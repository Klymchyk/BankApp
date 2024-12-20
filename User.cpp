#include "User.h"

#include <iostream>

using namespace std;

string User::getId() {
    return id;
}

string User::getName() {
    return name;
}

string User::getEmail() {
    return email;
}

string User::getPhone() {
    return phone;
}

string User::getUserType() {
    return userType;
}

string User::getRole() {
    return role;
}

void User::setId(string id) {
    this->id = id;
}

void User::setName(string name) {
    this->name = name;
}

void User::setEmail(string email) {
    this->role = role;
}

void User::setPhone(string phone) {
    this->phone = phone;
}

void User::setUserType(string userType) {
    this->userType = userType;
}

void User::setRole(string role) {
    this->role = role;
}

User::User() {

}

User::User(string id, string name, string email, string phone, string userType, string role) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->userType = userType;
    this->role = role;
}