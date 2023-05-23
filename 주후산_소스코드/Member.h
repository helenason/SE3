#include <iostream>
#include <string>
using namespace std;

class Member {
private:
	int memClassifier;
	string name;
	int num;
	string id;
	string password;
	bool isActivated = false;

public:
	Member(string id, string password);
	string getId();
	string getPassword();
	void createNewMember();
	~Member();
	bool getActivated();
};