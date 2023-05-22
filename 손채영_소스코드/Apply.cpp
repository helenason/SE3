#include <iostream>
#include <string>
#include "Person.h"
#include "Apply.h"
#include "Application.h"
#include "RecruitmentCollection.h"
using namespace std;

Application Apply::apply(int companyNum) {
	RecruitmentCollection recruitmentCollection;
	
	// companyNum을 가진 recruitment 찾고
	Recruitment recruitment = recruitmentCollection.findRecruitment(companyNum)[0];

	// 해당 recruitment의 인원수 +1
	recruitment.addPerson();

	// 해당 recruitment의 정보 가져오기
	string companyName = recruitment.getCompanyName();
	string task = recruitment.getTask();
	int numPeople = recruitment.getNumPeople();
	string applyDeadline = recruitment.getApplyDeadline();

	// recruitment 정보들로 application 클래스 생성 = 지원
	Application* application = new Application(companyName, companyNum, task, numPeople, applyDeadline);

	// 로그인된 계정의 지원 리스트에 추가
	Person loggedPerson;
	loggedPerson.addNewApplication(application);

	return application[0];
}