#include <iostream>
#include <string>
#include "Search.h"
using namespace std;

Recruitment Search::searchRecruitmentByCompanyName(string companyName) {
	CompanyCollection companyCollection;

	//companyName�� ���� company select ��
	Company* searchedCompany = companyCollection.findCompany(companyName);

	//recruitment���� ���� ��������
	RecruitmentCollection recruitmentCollection = searchedCompany[0].listRecruitments();

	// collection���� �ش��ϴ� recruitment ã��
	Recruitment* recruitment = recruitmentCollection.findRecruitment(companyName);

	// Recruitment result = recruitment[0].getRecruitment();

	return recruitment[0];

}