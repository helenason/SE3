#include <iostream>
#include <string>
#include "Recruitment.h"
using namespace std;

string Recruitment::getCompanyName() {
	return this->companyName;
}
int Recruitment::getCompanyNum() {
	return this->companyNum;
}
string Recruitment::getTask() {
	return this->task;
}
int Recruitment::getNumPeople() {
	return this->numPeople;
}
string Recruitment::getApplyDeadline() {
	return this->applyDeadline;
}
// selectRecruitmentByCompanyName �ʿ��� getRecruitment() ���.
Recruitment Recruitment::getRecruitment() {
	return Recruitment(this->companyName, this->companyNum, this->task, this->numPeople, this->applyDeadline);
}
void Recruitment::addPerson() {
	(this->numPeople)++;
}