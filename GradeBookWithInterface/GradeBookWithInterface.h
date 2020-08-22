#pragma once
#include <string>
class GradeBookWithInterface
{
public:
	GradeBookWithInterface(std::string);
	
	void setCourseName(std::string);
	
	std::string getCourseName();
	
	void displayMessage();
	
private:
	std::string courseName;
};


