#pragma once

// 1. ����Ѵ�� 1���� �˻��Ǵ� ������ �ϰڽ��ϴ�.
// 2. ��� ä�� ������ �˻��Ǵ� ������ �մϴ�.�ٸ�, ���α׷� ���� ���� �������� �����ð��� ������ ���� ������ ���ؼ� �����Ѵٰ� �����մϴ�.

#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Company.h"
using namespace std;

class Search {
public:
	Recruitment* searchRecruitmentByCompanyName(string companyName, Company** companies, int companiesCount);
};