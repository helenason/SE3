#include <iostream>
#include <string>
#include "Recruitment.h"
using namespace std;

Recruitment::Recruitment(string name, string num, string task, int nPeople, string deadline) {
	this->companyName = name;
	this->businessNum = num;
	this->task = task;
	this->numPeople = nPeople;
	this->applyDeadline = deadline;
}
string Recruitment::getCompanyName() {
	return this->companyName;
}
string Recruitment::getBusinessNum() {
	return this->businessNum;
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
Recruitment Recruitment::getRecruitment() {
	return Recruitment(this->companyName, this->businessNum, this->task, this->numPeople, this->applyDeadline);
}
void Recruitment::addPerson() {
	(this->numPeople)++;
}