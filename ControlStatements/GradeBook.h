#pragma once
#include <string>
class GradeBook
{
public:
	GradeBook(std::string name);
	void setCourseName(std::string name);
	std::string getCourseName();
	void displayMessage();
	void determineClassAverage();
private:
	std::string courseName;
};

