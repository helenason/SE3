#pragma once
#include <iostream>
#include <string>
#include "Member.h"
#include "Recruitment.h"

using namespace std;
class Recruitment;

class RegisterRecruitment {
private:

public:
    Recruitment* registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* member);
};