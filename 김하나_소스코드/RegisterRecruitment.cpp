#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"
#include "Member.h"
#include "Company.h"

using namespace std;

void RegisterRecruitment::registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* loginMember)
{
    string businessNum = loginMember->getBusinessNum();

    Recruitment* newRecruitment = new Recruitment(businessNum, task, numPeople, applyDeadline);
    
    return newRecruitment;
}