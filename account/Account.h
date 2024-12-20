//
// Created by Иван on 20.12.2024.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "../User.h"
#include <iostream>
using namespace std;
class Account {
private:
    int id;
    User applicant;
    string date;
    string status;
public:
    Account();
    Account(int id, User applicant, string date, string status);
    int getId();
    string getStatus();
    void setStatus(string status);

    string getDate();
    User getApplicant();};

#endif //ACCOUNT_H