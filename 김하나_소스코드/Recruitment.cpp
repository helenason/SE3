#include <iostream>
#include <vector>
#include "Recruitment.h"

Recruitment::Recruitment() {};

void Recruitment::inputDetails(string companyName, string recruitmentTitle, string task, int numPeople, string applyDeadline, string registeredID) {
    this->companyName = companyName;
    this->recruitmentTitle = recruitmentTitle;
    this->task = task;
    this->numPeople = numPeople;
    this->applyDeadline = applyDeadline;
    this->registeredID = registeredID;
}

void Recruitment::showCompanyRecruitments() {
    cout << "Recruitments of " << companyName << ":\n";
    vector<std::string> recruitmentTitles; // recruitmentTitle을 저장할 vector

    // companyName에 해당하는 recruitmentTitle들을 recruimentTitles에 저장
    // 예시로 "Samsung" 회사의 recruitmentTitle들을 recruitementTitles 벡터에 저장
    numRecruitments = // # of recruitments per company

    for (i = 0; i < numRecruitments; i++) {
        recruitmentTitles.push_back(recruitmentTitle)
    }
}

void Recruitment::inputDetails(string task, int numPeople, string applyDeadline) {
    cout << "Task: " << endl;
    cin >> task;

    cout << "Expected Number of People for recruitment: " << endl;
    cin >> numPeople;
    
    cout << "Application Deadline: " << endl;
    cin >> applyDeadline;
    
    return 0;
}