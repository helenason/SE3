#include <iostream>
#include <string>
#include "Recruitment.h"

using namespace std;

class Company {
private:
	string companyName;
    Recruitment recruitment; // has-a 관계 표현

public:
	Company();
	string getCompany();
};