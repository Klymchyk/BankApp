cmake_minimum_required(VERSION 3.30)
project(BankApp)

set(CMAKE_CXX_STANDARD 20)

add_executable(BankApp User.cpp
        User.h
        main.cpp
        main.h
        Registration.cpp
        Registration.h
        utils/UUID.h
        account/Account.cpp
        account/Account.h
        utils/DateUtil.cpp
        utils/DateUtil.h)
