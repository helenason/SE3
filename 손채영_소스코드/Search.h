#pragma once

// 1. 언급한대로 1개만 검색되는 것으로 하겠습니다.
// 2. 모든 채용 정보가 검색되는 것으로 합니다.다만, 프로그램 실행 당일 기준으로 마감시간이 지나지 않은 정보에 대해서 지원한다고 가정합니다.

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
	// 1개만 검색되므로 s 삭제
};