#pragma once
#include <iostream>
#include <string>
#include "Company.h"
using namespace std;

class SearchUI {
public :
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount);
};