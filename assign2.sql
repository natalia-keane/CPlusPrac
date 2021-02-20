drop database assign;
create database assign;
use assign;

create table Employee(
  Emp_ID varchar(5) not null,
  EMP_LNAME varchar(40),
  EMP_MI varchar(40),
  EMP_FNAME varchar(40),
  EMP_SEX varchar(20),
  EMP_AGE int,
  EMP_SALARY float,
  EMP_HIREDATE datetime,
  DEPT_CODE varchar(40),
  primary key(EMP_ID));


  create table Fines(
    BookID varchar(5) not null,
    memberID varchar(5) not null,
  	unpaidFines decimal(8,2),
  	primary key(BookID,memberID),
  	foreign key(BookID) references Book(BookID) on delete cascade on update cascade,
  	foreign key(memberID) references Member(memberID) on delete cascade on update cascade
  );
  

/*Write the SQL statement to create a new table called TEMP whose attributes should be similar
to that of table EMPLOYEES. Save as Query1-TABLE TEMP*/

/*Write the SQL statement to Alter table TEMP and add the primary key. Save as Query2-ALTER &
ADD PRIMARY KEY*/
  alter table Loan add column DateDue date after dateOut;
  
/*Write the SQL statement to insert into TEMP, the values contained in the first row of the
EMPLOYEES table. Save as Query3-INSERT INTO TEMP*/
  insert into Member (memberID,memberFName,memberLname,city,street) values ('00001','James','Bond','Arizona','1st Street');

insert into Member values ('00012','Blake','Lively','St Andrew','Gossip Girll');
/*Write the SQL statement to DELETE records from TEMP where EMP_HIREDATE is before 2010.
Save as Query4-DELETE FROM TEMP*/
delete from member WHERE memberID='00012';

/*List all members who have books with due dates between March 1, 2017 and April 10, 2017*/
select * from member join Loan where DateDue between '2017-03-01' and '2017-04-10';
