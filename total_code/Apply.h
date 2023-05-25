#pragma once
#include <iostream>
#include <string>
#include "Company.h"

using namespace std;

class Application;

class Apply {
public:
	Application* apply(string businessNum, Company** companies, int companiesCount, Member* loginMember);

};