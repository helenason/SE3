#include<string>
#include"LoginUI.h"
#include"Person.h"
#include"Company.h"

LoginUI::LoginUI(Login* login) {
	this->login = login;
}

void LoginUI::loginUI(FILE* inputFile, FILE* outputFile, Member* loginMember, Member** members, int membersCount)
{
	string id, password;

	fscanf(inputFile, "%s %s", id, password);

	loginMember = login->login(id, password, members, membersCount);

	if (!loginMember)
		return;

	fprintf(outputFile, "2.1. ·Î±×ÀÎ\n");
	fprintf(outputFile, "> %s %s\n", id, password);

	fprintf(outputFile, "\n");
}