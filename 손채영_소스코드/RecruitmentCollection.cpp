#include <iostream>
#include <string>
#include "RecruitmentCollection.h"
using namespace std;

Recruitment RecruitmentCollection::findFirst() {

}
Recruitment RecruitmentCollection::getNext() {

}
void RecruitmentCollection::addRecruitment() {

}
void RecruitmentCollection::removeRecruitment() {

}
Recruitment* RecruitmentCollection::findRecruitment(string companyName) {
	for (int i = 0; i < sizeof(ownedRecruitment) / sizeof(*ownedRecruitment); i++) {
		Recruitment* rec = this->ownedRecruitment[i];
		string comName = rec->getCompanyName();

		if (comName == companyName) {
			return rec;
		}
	}
}

Recruitment* RecruitmentCollection::findRecruitment(int companyNum) {
	for (int i = 0; i < sizeof(ownedRecruitment) / sizeof(*ownedRecruitment); i++) {
		Recruitment* rec = this->ownedRecruitment[i];
		int comNum = rec->getCompanyNum();

		if (comNum == companyNum) {
			return rec;
		}
	}
}