cmake_minimum_required(VERSION 3.22)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01 main.cpp PhoneBook.cpp PhoneBook.hpp Contact.cpp Contact.hpp)
