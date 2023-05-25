#pragma once
#include <string>
#include "Signout.h"
#include "SignoutUI.h"
#include "Member.h"
#include "Company.h"

using namespace std;
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��    :
*/
Signout::Signout()
{
	signoutUI = new SignoutUI(this);
}
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��    :
*/
SignoutUI* Signout::getSignoutUI()
{
	return signoutUI;
}
/*
	�Լ� �̸� :
	���	  :
	���� ���� :
	��ȯ��    :
*/
void Signout::signout(Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount)
{


	for (int i = 0; i < *membersCount; i++) {
		if (members[i]->getId().compare(loginMember->getId())) {
			for (int j = i; j < *membersCount - 1; j++) {
				members[j] = members[j + 1];
			}
		}
	}
	(*membersCount)--;


	if (loginMember->getMemClassifier() == 2) {
		for (int i = 0; i < *companiesCount; i++) {
			if (companies[i]->getId().compare(loginMember->getId())) {
				for (int j = i; j < *companiesCount - 1; j++) {
					companies[j] = companies[j + 1];
				}
			}
		}
		(*companiesCount)--;
	}

	loginMember = NULL;
}