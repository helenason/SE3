#pragma once
#include<string>
#include"Signout.h"
#include"Member.h"
#include"Person.h"
#include"Company.h"

Signout::Signout()
{
	signoutUI = new SignoutUI(this);
}

SignoutUI* Signout::getSignoutUI()
{
	return signoutUI;
}

void Signout::signout(Member* loginMember, Member** members, int membersCount, Person** persons, int personsCount, Company** companies, int companiesCount) 
{
	loginMember->deleteMember(members, membersCount, persons, personsCount, companies, companiesCount);
}