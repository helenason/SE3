#pragma once
#include <iostream>
#include <string>
#include "Company.h"
#include "Application.h"
using namespace std;

class Apply {
	
public :
	Application* apply(string businessNum, Company** companies, int companiesCount, Member* loginMember);
	
};