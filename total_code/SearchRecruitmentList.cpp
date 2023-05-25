#pragma once
#include <iostream>
#include "SearchRecruitmentList.h"
#include "Recruitment.h"
#include "Member.h"

using namespace std;

/*
    함수 이름: SearchRecruitmentList::searchComapnyRecruitments()
    기능: 전달받은 ID와 recruitment을 생성한 자의 ID가 동일하면, 본인이 등록한 채용 공고로 받아들여, 해당 공고 내용을 갖고 옴
    전달 인자: string ID, Member* member
    반환값: member의 getRecruitment() 함수 호출한 포인터
*/
Recruitment* SearchRecruitmentList::searchCompanyRecruitments(string ID, Member* member) {

    return member->getRecruitment(); // virtual function 이용

}