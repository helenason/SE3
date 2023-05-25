#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Member.h"

/*
	클래스 이름: RegisterRecruitmentUI
	클래스 기능: 입력 파일에 쓰여진 값들을 받아 채용 정보로 입력함
*/
class RegisterRecruitmentUI {
public:
	void inputDetails(FILE* in_fp, FILE* out_fp, Member* loginMember);
};