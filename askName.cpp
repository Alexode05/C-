#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    while (name.empty()){
        cout << "What's your name? : " << '\n';
        getline(cin >> ws, name); // getline() is used to get a line that can contain spaces
                            // std::ws is used to ignore white spaces in case of the second question
                            // will be asked bfore the first one
    }
    
    do {
        cout << " How old are you ?: " << '\n';
        cin >> age;
    } while(age == 0);
    
    cout << "Hello " << name << ", you are " << age << " years old" << '\n';
    return 0;
}