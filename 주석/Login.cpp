#pragma once
#include <string>
#include "Login.h"
#include "LoginUI.h"
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
		if ((members[i]->getId() == id) && (members[i]->getPassword() == password)) {
			return members[i];
		}
	}
}