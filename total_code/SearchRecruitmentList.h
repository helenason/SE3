#pragma once
#include <iostream>
#include <string>
#include "Member.h"

using namespace std;
class Recruitment;

/*
    클래스 이름: SearchRecruitmentList
    클래스 기능: 회사 회원 본인이 등록한 채용 정보 조회해줌
*/
class SearchRecruitmentList {
private:

public:
    Recruitment* searchCompanyRecruitments(string ID, Member* member);
};