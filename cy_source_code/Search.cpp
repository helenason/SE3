#include <iostream>
#include <string>
#include "Search.h"
using namespace std;

Recruitment Search::searchRecruitmentByCompanyName(string companyName) {
	CompanyCollection companyCollection;

	//companyName을 가진 company select 후
	Company* searchedCompany = companyCollection.findCompany(companyName);

	//recruitment가서 정보 가져오기
	RecruitmentCollection recruitmentCollection = searchedCompany[0].listRecruitments();

	// collection에서 해당하는 recruitment 찾기
	Recruitment* recruitment = recruitmentCollection.findRecruitment(companyName);

	// Recruitment result = recruitment[0].getRecruitment();

	return recruitment[0];

}