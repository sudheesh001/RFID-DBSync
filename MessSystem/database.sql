CREATE TABLE IF NOT EXISTS `Login` (
  `UserName` text NOT NULL,
  `Password` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE IF NOT EXISTS `FoodCount` (
	`UserName` text NOT NULL,
	`Date` datetime NOT NULL,
	`Breakfast` int(11) NOT NULL,
	`Lunch` int(11) NOT NULL,
	`Dinner` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE IF NOT EXISTS `Student` (
	`cardid` text,
	`UserName` text NOT NULL,
	`Name` text NOT NULL,
	`RegNo` text NOT NULL,
	`MessType` text NOT NULL,
	`Total` double precision NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
