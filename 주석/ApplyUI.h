#pragma once
#include "Apply.h"
/*
* Ŭ���� �̸� : ApplyUI
* Ŭ���� ��� : control Ŭ�����μ� ����� ��ȣ�� �Է¹޾� ���� �� ���� ���� ���
*/
class ApplyUI {
private:
	Apply* apply;
public:
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember);
};