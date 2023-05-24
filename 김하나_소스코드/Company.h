#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;

class Company {
private:
	string companyName;
	int businessNum;

public:
	Company();
	int getBusinessNum();
};