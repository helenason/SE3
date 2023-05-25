#include<string>
#include"LogoutUI.h"

LogoutUI::LogoutUI(Logout* logout)
{
	this->logout = logout;
}

void LogoutUI::logoutUI(FILE* inputFile, FILE* outputFile, Member* loginMember)
{
	logout->logout(loginMember);

	fprintf(outputFile, "2.2. ·Î±×¾Æ¿ô\n");
	fprintf(outputFile, "> %s\n", loginMember->getId());

	fprintf(outputFile, "\n");
}