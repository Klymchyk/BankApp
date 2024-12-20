#include <iostream>
using namespace std;
#include "Registration.h"
void Registration::registerUser(User user) {
    bool isValidEmail = validateEmail(user.getEmail());
    bool isPhoneValid = validatePhone(user.getPhone());
    if (isValidEmail && isPhoneValid) {
        saveToFile(user);
    }
}
bool Registration::validateEmail(string email) {
    const regex pattern
    ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email, pattern);
}
bool Registration::validatePhone(string phone) {
    if (phone.length() > 10) {
        return true;
    }
    return false;
}void Registration::saveToFile(User user) {
    cout << "Saving to file " << user.getName() << endl;
}