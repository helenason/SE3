#pragma once
#include <iostream>
#include <string>

using namespace std;
class CancelApplicationUI;
class Company;
class Member;
/*
	클래스 이름 :CancelApplication
	기능	  :컨트롤 클래스로 입력받은 사업자 번호를 바탕으로 
			  로그인한 회원의 지원 중 같은 사업자 정보를 가진 지원을 취소한다.
*/
class CancelApplication
{
private:
	CancelApplicationUI* cancelApplicationUI;
public:
	CancelApplication();
	CancelApplicationUI* getCancelApplicationUI();
	Company* cancelApplication(Member* member, Company** companies, int companiesCount, string businessNum);
};