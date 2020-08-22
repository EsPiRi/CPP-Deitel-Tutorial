
#include <iostream>
#include "GradeBook.h"

int main()
{
	std::string nameOfCourse;
	
	GradeBook myGradeBook1("CS101 Introduction to C++ Programming");
	GradeBook myGradeBook2("CS102 Data Structures in C++");


	std::cout << "gradeBook1 created for course: " << myGradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << myGradeBook2.getCourseName()
		<< std::endl;

	return 0;
}

