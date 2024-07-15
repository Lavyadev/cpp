#include<iostream>
using namespace std;

/*int addition(int a, int b)
{
    int sum;
    sum = a + b;
    
    cout << sum;
}

int main()
{
    int a,b;
    cout << "Enter the first number : " ;
    cin >> a;

    cout << "\nEnter the second number : " ;
    cin >> b;

    addition(a,b);
}*/

void greetings(string name);
int main()
{
    string name;

    cout << "Please enter your name : " ;
    cin >> name ;

    greetings(name);
    return 0;
}

void greetings(string name)
{
    cout << "Hello " << name;
    
}
    



