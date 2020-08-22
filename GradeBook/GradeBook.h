
#pragma once
#include <string>
class GradeBook
{
public:
	GradeBook(std::string name)
	{
		setCourseName(name);
	}
	void setCourseName(std::string name)
	{
		courseName = name;
	}
	std::string getCourseName()
	{
		return courseName;
	}
	void displayMessage()
	{
		std::cout << "Welcome to the Grade Book for " << courseName << "!" << std::endl;
	}
private:
	std::string courseName;
};