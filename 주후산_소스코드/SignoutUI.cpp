#pragma once
#include<string>
#include"SignoutUI.h"
#include"Person.h"
#include"Company.h"

SignoutUI::SignoutUI(Signout* signout)
{
	this->signout = signout;
}

void SignoutUI::signoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int membersCount, Person** persons, int personsCount, Company** companies, int companiesCount) {
	fprintf(outputFile, "1.2. È¸¿øÅ»Åð\n");

	signout->signout(loginMember, members, membersCount, persons, personsCount, companies, companiesCount);

	fprintf(outputFile, "> %s\n", loginMember->getId());
	fprintf(outputFile, "\n");
}