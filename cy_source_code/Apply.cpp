#include <iostream>
#include <string>
#include "Person.h"
#include "Apply.h"
#include "Recruitment.h"
#include "Application.h"
using namespace std;

Application* Apply::apply(string businessNum, Company** companies, int companiesCount, Member* loginMember) {
	
	Recruitment* foundRecruitment;
	// businessNum을 가진 company 찾기
	for (int i = 0; i < companiesCount; i++) {
		if (businessNum == companies[i]->getBusinessNum()) {
			foundRecruitment = companies[i]->getRecruitment();
		}
	}

	// 해당 recruitment의 인원수 + 1
	foundRecruitment->addPerson();

	// recruitment 정보 가져오기
	string companyName = foundRecruitment->getCompanyName();
	string task = foundRecruitment->getTask();
	int numPeople = foundRecruitment->getNumPeople();
	string applyDeadline = foundRecruitment->getApplyDeadline();

	// recruitment 정보들로 application 클래스 생성 = 지원
	Application* newApp = new Application(companyName, businessNum, task, numPeople, applyDeadline);

	// 로그인된 계정의 지원 리스트에 추가
	// loginMember.addNewApplication(newApp); // loginMember가 일반인지 회사인지 아는 방법? addNewApplication이 person의 함수인데 어떻게 호출?

	Person* loginPerson = new Person("id", "pw", "name", "num"); // 수정 전
	loginPerson->addNewApplication(newApp);

	return newApp;
}