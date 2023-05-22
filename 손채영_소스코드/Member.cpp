#include <iostream>
#include <string>
#include "Member.h"
using namespace std;

Member::Member(string id, string password) {
	this->id = id;
	this->password = password;
}
string Member::getId() {
	return this->id;
}
string Member::getPassword() {
	return this->password;
}
void Member::createNewMember() {

}
void Member::deleteMember() {

}
Member Member::getMember() {

}
void Member::activateMember() {

}
void Member::deactivateMember() {

}
void Member::getMemberClassifier() {

}