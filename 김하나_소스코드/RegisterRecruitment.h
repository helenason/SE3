#pragma once
#include <iostream>
#include <string>
#include "Member.h"
<<<<<<< HEAD
#include "Recruitment.h"
=======
#include "Company.h"
>>>>>>> 3dfb430608b4bdb4f0b7a49eda0bba38a9b6e6a5

using namespace std;
class Recruitment;

class RegisterRecruitment {
private:

public:
    Recruitment* registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* member);
};