#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Person.h"
#include "Company.h"
#include "Search.h"
#include "SearchUI.h"
#include "Apply.h"
#include "ApplyUI.h"
#include "Recruitment.h"
#include "Application.h"
using namespace std;

class Apply {
public:
	Application* apply(string businessNum, Company** companies, int companiesCount, Member* loginMember);

};