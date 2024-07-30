#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int guess;
    int tries = 0;
    const int num = (rand() % 100) +1;

    cout << "########### Guess My Number Game ###########" << '\n';
    do{
        cout << " Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if(guess < num){
            cout << "Higher" << '\n';
        }
        else if (guess > num){
            cout << "Lower" << '\n';
        }
        else{
            cout << "CORRECT! # of tries: " << tries << '\n';
        }
    }while (guess != num);
    cout << "############################################" << '\n';

    return 0;
}