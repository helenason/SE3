#include <iostream>
#include <string>
#include "Person.h"
#include "Apply.h"
#include "Application.h"
#include "RecruitmentCollection.h"
using namespace std;

Application Apply::apply(int companyNum) {
	RecruitmentCollection recruitmentCollection;
	
	// companyNum�� ���� recruitment ã��
	Recruitment recruitment = recruitmentCollection.findRecruitment(companyNum)[0];

	// �ش� recruitment�� �ο��� +1
	recruitment.addPerson();

	// �ش� recruitment�� ���� ��������
	string companyName = recruitment.getCompanyName();
	string task = recruitment.getTask();
	int numPeople = recruitment.getNumPeople();
	string applyDeadline = recruitment.getApplyDeadline();

	// recruitment ������� application Ŭ���� ���� = ����
	Application* application = new Application(companyName, companyNum, task, numPeople, applyDeadline);

	// �α��ε� ������ ���� ����Ʈ�� �߰�
	Person loggedPerson;
	loggedPerson.addNewApplication(application);

	return application[0];
}