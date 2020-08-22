#include <iostream>
#include <iomanip>
#include "GradeBook.h"
GradeBook::GradeBook(std::string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(std::string name)
{
	if (name.length() < 25)
	{
		courseName = name;
	}
	else
	{
		courseName = name.substr(0, 25);
		std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n Limiting courseName to first 25 characters.\n" << std::endl;
	}
}

std::string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
}

void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	double average;

	total = 0;
	gradeCounter = 0;

	std::cout << "Enter grade or -1 to quit: ";
	std::cin >> grade;
	while (grade != -1)
	{
		std::cout << "Enter grade or -1 to quit: ";
		std::cin >> grade;
		total += grade;
		gradeCounter++;
	}
	if(gradeCounter!=0)
	{
		average = static_cast<double>(total) / gradeCounter;
		std::cout << "\nTotal of all "<<gradeCounter<<" grades is " << total << std::endl;
		std::cout << "Class average is " <<std::setprecision(2)<<std::fixed<< average << std::endl;
	}
	else
	{
		std::cout << "No grades were entered!" << std::endl;
	}
	


}


