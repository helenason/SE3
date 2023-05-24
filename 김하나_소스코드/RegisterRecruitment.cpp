#include <iostream>
#include <string>
#include "RegisterRecruitment.h"
#include "Recruitment.h"

using namespace std;

void RegisterRecruitment::registerNewRecruitment(FILE* inputFile, FILE* outputFile) {

    string newTask[32];
    int newNumPeople;
    string newDeadline[32];

    fscanf(inputFile, "%s %d %s", newTask, newNumPeople, newDeadline);


}