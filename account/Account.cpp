//
// Created by Иван on 20.12.2024.
//

#include "Account.h"

Account::Account() {

}

Account::Account(int id, User applicant, string date, string status) {
    this->id = id;
    this->applicant = applicant;
    this->date = date;
    this->status = status;
}

User Account::getApplicant() {
    return applicant;
}

string Account::getDate() {
    return date;
}

string Account::getStatus() {
    return status;
}

int Account::getId() {
    return id;
}