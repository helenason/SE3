#include <iostream>
#include <string>
#include "Person.h"
#include "Apply.h"
#include "Recruitment.h"
#include "Application.h"
using namespace std;

Application* Apply::apply(string businessNum, Company** companies, int companiesCount, Member* loginMember) {
	
	Recruitment* foundRecruitment;
	// businessNum�� ���� company ã��
	for (int i = 0; i < companiesCount; i++) {
		if (businessNum == companies[i]->getBusinessNum()) {
			foundRecruitment = companies[i]->getRecruitment();
		}
	}

	// �ش� recruitment�� �ο��� + 1
	foundRecruitment->addPerson();

	// recruitment ���� ��������
	string companyName = foundRecruitment->getCompanyName();
	string task = foundRecruitment->getTask();
	int numPeople = foundRecruitment->getNumPeople();
	string applyDeadline = foundRecruitment->getApplyDeadline();

	// recruitment ������� application Ŭ���� ���� = ����
	Application* newApp = new Application(companyName, businessNum, task, numPeople, applyDeadline);

	// �α��ε� ������ ���� ����Ʈ�� �߰�
	// loginMember.addNewApplication(newApp); // loginMember�� �Ϲ����� ȸ������ �ƴ� ���? addNewApplication�� person�� �Լ��ε� ��� ȣ��?

	Person* loginPerson = new Person("id", "pw", "name", "num"); // ���� ��
	loginPerson->addNewApplication(newApp);

	return newApp;
}