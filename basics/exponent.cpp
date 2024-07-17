#include<iostream>
using namespace std;
int main(){
    int base,exponent;
    
    cout << "Enter the base value : ";
    cin >> base;

    cout << "\nEnter the exponent value : "; 
    cin >> exponent;

    int answer = 1;

    if(exponent == 0){
        cout << answer;
        
    }
    
    else{
        for(int i = 0; i < exponent; i++){

        answer = answer * base;
        
        }

        cout << answer;

    }

}