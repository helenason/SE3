#pragma once
#include<string>
#include "Login.h"
#include "Member.h"

using namespace std;

Login::Login()
{
	loginUI = new LoginUI(this);
}

LoginUI* Login::getLoginUI()
{
	return loginUI;
}

Member* Login::login(string id, string password, Member** members, int* membersCount)
{
	for (int i = 0; i < *membersCount; i++) {
		cout << "members[i]->getId(): " << members[i]->getId()<<endl;
		if ((members[i]->getId()==id) && (members[i]->getPassword()==password)) {
			cout << "members[i]->getId(): " << members[i]->getId();
			return members[i];
		}
	}
	//return member->checkMemberLogin(id, password, members, membersCount);
}