#include<iostream>
using namespace std;
int main()
{
    int answer , guess , tries;

    answer = 7;

    tries = 1;

    while(tries <= 3){
        cout << "\nGuess a number between 1 to 10 : ";
        cin >> guess;
        if(guess == answer)
        {
            cout <<"\nCongratulations! You have guessed the correct number.";
            break;
        }
        else{
            if(tries <= 2)
            {
            cout <<"\nWrong guess. Try again.";
            }
            else{
                cout <<"\nWrong guess. You have lost the game.";
            }
        }
        tries++;
    }
    


}