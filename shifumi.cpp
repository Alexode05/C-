#include <iostream>
#include <ctime>
using namespace std;

char userChoice();
char computerChoice();


int main() {
    int scoreUser = 0;
    int scoreComputer = 0;
    
    cout << "################# Shifumi #################" << '\n';
    
    do{
        char user = userChoice();
        char computer = computerChoice();
        
        if(user == computer){
            cout << '\n' << "It's a tie" << '\n';
        }
        else if((user == 'r' && computer == 's') || (user == 'p' && computer == 'r') || (user == 's' && computer == 'p')){
            cout << '\n' << "User wins" << '\n';
            scoreUser++;
        }
        else{
            cout << '\n' << "Computer wins" << '\n';
            scoreComputer++;
        }
        
        cout << "****************" << '\n';
        cout << "User: " << scoreUser << '\n' << "Computer: " << scoreComputer << '\n';
    }while (scoreUser < 3 && scoreComputer < 3);
    
    cout << "****************" << '\n';

    if(scoreUser == 3){
        cout << "############ User wins the game ############" << '\n';
    }
    else{
        cout << "########## Computer wins the game ##########" << '\n';
    
    }



    return 0;
}

char userChoice(){
    char choice;
    cout << "Rock, Paper, Scissors? (r/p/s) : ";
    cin >> choice;

    if(choice != 'r' && choice != 'p' && choice != 's'){
        cout << "Invalid choice" << '\n';
        return userChoice();
    }

    return choice;
}



char computerChoice(){
    srand(time(0));
    char choice;
    int num = (rand() % 3) + 1;
    switch(num){
        case 1:
            choice = 'r';
            cout << "Rock" << '\n';
            break;
        case 2:
            choice = 'p';
            cout << "Paper" << '\n';
            break;
        case 3:
            choice = 's';
            cout << "Cisors" << '\n';
            break;
    }
    return choice;
}