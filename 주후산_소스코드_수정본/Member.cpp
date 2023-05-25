#pragma once
#include <iostream>
#include <string>
#include "Member.h"
using namespace std;



Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}

int Member::getMemClassifier() 
{
	return this->memClassifier;
}

string Member::getId() {
	return this->id;
}

string Member::getPassword() {
	return this->password;
}


Member* Member::createNewMember(int memClassifier, string name, int num, string id, string password, Person* person, Company** companies, int* companiesCount) {
	Member* member = new Member(id, password);

	switch (memClassifier) {
	case 1:
		person = new Person(name, num, id, password);
		break;
	case 2:
		companies[*companiesCount++] = new Company(name, num, id, password);
		break;
	default:
		break;
	}

	return member;
}


Member* Member::checkMemberLogin(string id, string password, Member** members, int* membersCount)
{
	for (int i = 0; i < *membersCount; i++) {
		if (members[i]->getId().compare(id) && members[i]->getPassword().compare(password)) {
			return members[i];
		}
	}

	return NULL;
}

void Member::memberLogout(Member* loginMember)
{
	loginMember = NULL;
}



void Member::deleteMember(Member** members, int* membersCount, Person* person, Company** companies, int* companiesCount)
{
	for (int i = 0; i < *membersCount; i++) {
		if (members[i]->getId().compare(this->getId())) {
			for (int j = i; j < *membersCount; j++) {
				members[j] = members[j + 1];
			}
		}
	}
	membersCount--;
	switch (this->getMemClassifier()) {
	case 1:
		if (person->getId().compare(this->getId()))
			person = NULL;
		break;
	case 2:
		for (int i = 0; i < *companiesCount; i++) {
			if (companies[i]->getId().compare(this->getId())) {
				for (int j = i; j < *companiesCount; j++) {
					companies[j] = companies[j + 1];
				}
			}
		}
		companiesCount--;
		break;
	default:
		break;
	}
}


