#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Member.h"

using namespace std;

/*
    클래스 이름: RegisterRecruitment
    클래스 기능: 새로운 채용 공고 등록
*/
class RegisterRecruitment {
private:

public:
    Recruitment* registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* member);
};