#include <iostream>
#include <cmath>

using namespace std;

void menu(){
    cout << " " << endl;
    cout << "----------------------------" << endl;
    cout << "Rules Of The Game" << endl;
    cout << "----------------------------" << endl;
    cout << "1. Choose any number between 1-10" << endl;
    cout << "2. If you win you will get 10 times the money you bet" << endl;
    cout << "3. If you bet on the wrong number you will lose your betting money" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "         " << endl;
    
}

void choices(){
    cout << "Do you want to play again? y/n: ";
}



int main()
{
    int dice;
    int bet;
    int number_guess;
    string name;
    int deposit;
    char choice;
    
    cout << "CASINO GAME" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter Deposit amount to enter game: $ ";
    cin >> deposit;
    
    
    do{ 
        menu();
        cout << "Your current balance is:  $ " << deposit << endl;
        
        
        do{
            cout << name << " enter money to bet: $ ";
            cin >> bet;
        }while(bet>deposit);
        
        
        do{
        cout << "Guess the number to bet between 1-10: ";
        cin >> number_guess;
        }while(number_guess > 10 || number_guess < 1);
        
        srand(time(0));
        dice = rand()%10+1;
        
        if(dice == number_guess){
            cout << "Congratulations you won! $ " << (bet*10) << endl;
            cout << "The winning number was: " << dice << endl;
            deposit = deposit + (bet*10);
            }
            else{
                cout << "Bad luck this time! You lost " << bet << endl;
                cout << "The winning number was: " << dice << endl;
                deposit = deposit - bet;
            }
            
        cout << name << " You have: $ " << deposit << endl;
            
        if(deposit <= 0){
            cout << "Sorry you have no money! Come again next time!" << endl;
            break;
        }
        choices();
        cin >> choice;
        }while(choice == 'y');

    return 0;
}





