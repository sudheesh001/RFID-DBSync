# all the imports
import os,binascii
from flask import Flask, request, session, g, redirect, url_for, abort, \
     render_template, flash
from flaskext.mysql import MySQL
from config import config, ADMINS, MAIL_SERVER, MAIL_PORT, MAIL_USERNAME, MAIL_PASSWORD
from werkzeug.utils import secure_filename
from flask import send_from_directory
import datetime
 
import logging
from logging.handlers import SMTPHandler
credentials = None

mysql = MySQL()
# create our little application :)

app = Flask(__name__)

for key in config:
	app.config[key] = config[key]

mysql.init_app(app)
app.config.from_object(__name__)


def tup2float(tup):
	return float('.'.join(str(x) for x in tup))

def get_cursor():
	return mysql.connect().cursor()

@app.teardown_appcontext
def close_db():
	"""Closes the database again at the end of the request."""
	get_cursor().close()


@app.errorhandler(404)
def page_not_found(e):
	return render_template('404.html'), 404

@app.route('/')
def screen():
	return render_template('screen.html')

@app.route('/login', methods=['GET', 'POST'])
def login():
	global store
	error = None
	db=get_cursor()
	session['temp']=0
	if request.method == 'POST':
		username=str(request.form['username'])
		password=str(request.form['password'])
		sql='select Count(*) from Login where UserName="%s" and Password=MD5("%s")'%(username,password)
		db.execute(sql)
		data = db.fetchone()[0]
		if not data:
			# Throws error
			error = "Incorrect username / password"
			print error
		else:
			session['logged_in'] = True
			message = "You have successfully logged in"
			return render_template('screen.html')
	return render_template('login.html')

@app.route('/register')
def register():
	return render_template('register.html')

@app.route('/add', methods=['GET','POST'])
def add():
	if request.method == 'POST':
		db = get_cursor()
		username = request.form['username']
		password = request.form['password']
		name = request.form['name']
		confirm_password = request.form['confirmpassword']
		regno = request.form['regno']
		messtype = request.form['messtype']
		checksql = "SELECT * FROM Student where RegNo='%s'"%regno
		db.execute(checksql)
		data = db.fetchall()
		print data
		if not data:
			total = 0
			if password != confirm_password:
				return redirect(url_for('register'))
			sql = 'INSERT INTO Student (UserName, Name, RegNo, MessType, Total) values ("%s","%s","%s","%s",%s)'
			db.execute(sql%(username,name,regno,messtype,total))
			db.execute("COMMIT")
			db.execute("INSERT INTO Login values('%s', MD5('%s'))"%(username,password))
			db.execute("COMMIT")
			return redirect(url_for('screen'))
		return redirect(url_for('register'))
	return redirect(url_for('register'))

@app.route('/logout')
def logout():
    if session['logged_in'] != None:
        if session['logged_in']==True:
            session.pop('logged_in', None)
            session.pop('temp',0)
            flash('You were logged out')
        else:
            flash('Welcome Back!')
    return redirect(url_for('screen'))

if __name__ == '__main__':
    app.debug = True
    app.secret_key=os.urandom(24)
    # app.permanent_session_lifetime = datetime.timedelta(seconds=200)
    app.run()

