#pragma once
#include <string>
#include "Signout.h"
#include "SignoutUI.h"
#include "Member.h"
#include "Company.h"

using namespace std;

/*
    함수 이름 : Signout::Signout()
    기능	  : Signout 바운터리 객체 초기화
    전달 인자 : 없음
    반환값    : 없음
*/
Signout::Signout()
{
	signoutUI = new SignoutUI(this);
}

/*
    함수 이름 : Signout::getSignoutUI()
    기능	  : Signout 바운더리 객체 반환
    전달 인자 : 없음
    반환값    : SignoutUI*
*/
SignoutUI* Signout::getSignoutUI()
{
	return signoutUI;
}

/*
    함수 이름 : Signout::signout()
    기능	  : 전달받은 member 객체가 저장되어있는 member 배열 및 company 배열에서 제거
    전달 인자 : Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount
    반환값    : 없음
*/
void Signout::signout(Member* loginMember, Member** members, int* membersCount, Company** companies, int* companiesCount)
{


	for (int i = 0; i < *membersCount; i++) {
		if (members[i]->getId().compare(loginMember->getId())) {
			for (int j = i; j < *membersCount - 1; j++) {
				members[j] = members[j + 1];
			}
		}
	}
	(*membersCount)--;


	if (loginMember->getMemClassifier() == 2) {
		for (int i = 0; i < *companiesCount; i++) {
			if (companies[i]->getId().compare(loginMember->getId())) {
				for (int j = i; j < *companiesCount - 1; j++) {
					companies[j] = companies[j + 1];
				}
			}
		}
		(*companiesCount)--;
	}

	loginMember = NULL;
}