CREATE DATABASE STUDENTdb;
use studentdb;
CREATE TABLE student1(studentId int PRIMARY KEY AUTO_INCREMENT,studentname varchar(20),email varchar(50),address varchar(250),zipcode varchar(10);)
ALTER TABLE student1 add COlUMN contact varchar(20)
alter table student change contact phone int
ALTER TABLE student1 DROP COLUMN phone
DROP TABLE student1
CREATE TABLE course (cid int PRIMARY KEY AUTO_INCREMENT,cname varchar(50),fees float ,duration varchar(20));
CREATE TABLE enroll(enid int PRIMARY KEY AUTO_INCREMENT,sid int ,cid int ,FOREIGN KEY(sid) REFERENCES student2(studentID),FOREIGN KEY (cid) REFERENCES course(cid));
