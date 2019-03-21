#include <stdio.h>

void main () {

	CREATE TABLE Student (
		name[30] char,
		studentId int,
		major[30] char,
	);

	INSERT INTO Student (”Ryung” , 201224537 , "Geography" );
	INSERT INTO Student (”Sumin” , 201229534 , "Mathematics" );
	SELECT name FROM Student;
	DELETE FROM Student WHERE ( studentId == 201224537) ;
}