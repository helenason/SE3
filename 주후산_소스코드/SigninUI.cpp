#include <string>
#include"SigninUI.h"
#include"Person.h"
#include"Company.h"

SigninUI::SigninUI(Signin* signin)
{
	this->signin = signin;
}

void SigninUI::signinUI(FILE* inputFile, FILE* outputFile, Member** members, int membersCount, Person** persons, int personsCount, Company** companies, int companiesCount)
{
	int memClassifier, num;
	string name, id, password;

	fscanf(inputFile, "%d %s %d %s %s", memClassifier, name, num, id, password);

	members[membersCount++] = signin->signin(memClassifier, name, num, id, password, persons, personsCount, companies, companiesCount);

	fprintf(outputFile, "1.1. 회원가입\n");
	fprintf(outputFile, "> %d %s %d %s %s\n", memClassifier, name, num, id, password);

	fprintf(outputFile, "\n");
}