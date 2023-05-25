#pragma once
#include "Apply.h"
/*
* 클래스 이름 : ApplyUI
* 클래스 기능 : control 클래스로서 사업자 번호를 입력받아 지원 후 지원 정보 출력
*/
class ApplyUI {
private:
	Apply* apply;
public:
	void enterTerms(FILE* in_fp, FILE* out_fp, Company** companies, int companiesCount, Member* loginMember);
};