#pragma once
#include "Member.h"

/*
	클래스 이름: SearchRecruitmentListUI
	클래스 기능: searchRecruitment() operation으로 화사 직원이 등록한 채용 리스트 출력함
	*/
class SearchRecruitmentListUI {
public:
	void searchRecruitment(FILE* out_fp, Member* loginMember);
};