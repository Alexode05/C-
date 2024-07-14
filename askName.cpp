#include <iostream>

int main() {
    std::string name;
    int age;

    std:: cout << "What's your name? : " << '\n';
    std:: getline(std::cin >> std::ws, name); // getline() is used to get a line that can contain spaces
                                                // std::ws is used to ignore white spaces in case of the second question
                                                // will be asked bfore the first one

    std:: cout << " How old are you ?: " << '\n';
    std:: cin >> age;

    std:: cout << "Hello " << name << ", you are " << age << " years old" << '\n';
}