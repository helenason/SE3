#pragma once

// 1. ����Ѵ�� 1���� �˻��Ǵ� ������ �ϰڽ��ϴ�.
// 2. ��� ä�� ������ �˻��Ǵ� ������ �մϴ�.�ٸ�, ���α׷� ���� ���� �������� �����ð��� ������ ���� ������ ���ؼ� �����Ѵٰ� �����մϴ�.

#include <iostream>
#include <string>
#include "CompanyCollection.h"
#include "RecruitmentCollection.h"
#include "Recruitment.h"
#include "Company.h"
using namespace std;

class Search { // control
public:
	Recruitment searchRecruitmentByCompanyName(string companyName);
	// 1���� �˻��ǹǷ� s ����
};