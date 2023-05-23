#include <iostream>
#include <string>

using namespace std;

class Recruitment {
private:
	string companyName;
	string task;
	int numPeople;
	string applyDeadline;
    string registeredID;

public:
	Recruitment();
	void inputDetails(string task, int numPeople, string applyDeadline);
    void showCompanyRecruitments();
    void getRecruitment();
    void listRecruitmentDetails();
};