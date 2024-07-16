#include<iostream>
using namespace std;
double add(double num1, double num2)
{
    cout << num1 + num2;
}
double subtract(double num1 ,double num2)
{
    cout << num1 - num2;
}
double multiply(double num1 , double num2)
{
    cout << num1 * num2;
}
double divide(double num1, double num2)
{
    cout << num1 / num2;
}

int main()
{
    double num1, num2; 
    char operation;

    cout << "Enter the first number : ";
    cin >> num1 ;

    cout << "\nEnter the second number : ";
    cin >> num2;

    cout << "\nEnter the opration you want to perform : ";
    cin >> operation;

    if(operation == '+')
    {
        add(num1, num2);
    }
    else if(operation == '-')
    {
        subtract(num1,num2);
    }
    else if(operation == '*')
    {
        multiply(num1, num2);
    }
    else if(operation == '/')
    {
        divide(num1, num2);
    }
    else
    {
        cout << "\nInvalid operation";
    }


}