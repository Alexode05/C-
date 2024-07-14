#include <iostream>
#include <string> // Inclusion de l'en-tête pour std::string

namespace first {
    int age = 20;
}

namespace sec {
    int age = 30;
}

namespace third {
    int age = 40;
}

int main() {
    using namespace third;
    std::cout << "I like pizza!" << '\n';
    std::cout << "It is very good!" << '\n';

    // type of variables
    std::string name = "alex";
    double height = 5.8;
    char letter = 'a';
    bool alive = true;
    std::cout << "Hello " << name << '\n' << "You are " << age << " years old" << '\n';  
    
    // constant variable
    const double pi = 3.14159; 

    // namespace
    std::cout << first ::age << '\n';
    std::cout << sec ::age << '\n';
    std::cout << age << '\n';

    return 0; // Ajout d'un retour de valeur pour la fonction main
}