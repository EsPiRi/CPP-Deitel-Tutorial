

#include <iostream>
#include "GradeBookWithInterface.h"
GradeBookWithInterface::GradeBookWithInterface(std::string name)
{
	setCourseName(name);
}

void GradeBookWithInterface::setCourseName(std::string name)
{
	courseName = name;
}

std::string GradeBookWithInterface::getCourseName()
{
	return courseName;
}
void GradeBookWithInterface::displayMessage()
{
	std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
}

