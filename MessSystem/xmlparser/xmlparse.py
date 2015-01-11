from xml.dom import minidom
xmldoc = minidom.parse('dcard.xml')
itemlist = xmldoc.getElementsByTagName('attr') 
for s in itemlist[-1:] :
    print s.firstChild.nodeValue