#include<iostream>
using namespace std;
/*int main()
{
    bool isMale = false;
    if(isMale)
    {
        cout << "You are a male";
    }
    else 
    {
        cout << "You are not a male";
    }
   bool isMale = true;
   bool isTall = false;

   if(isMale && isTall)
   {
    cout << " You are a tall male. ";
   }
   else if(isMale && !isTall)
   {
    cout << " You are a male but not tall.";
   }
   else if(!isMale && isTall)
   {
    cout << "You are not a male but tall.";
   }
   else{
    cout << "You are not a male and not tall";
   }
}*/
  
  int get_max(int num1 , int num2, int num3)
  {
   if (num1 > num2)
   {
    if(num1 > num3)
    {
        cout << "\nnum1 is the greatest";
    }
    else 
    {
        cout << "\nnum3 is the greatest";

    }
   }
   else 
   {
    if(num2 > num3)
    {
        cout << "\nnum2 is the greatest.";
    }
    else {
        cout << "\nnum3 is the greatest";
    }
   }
  }
  int main()
  {
    int num1,num2, num3;
    cout << "Enter the first number : ";
    cin >> num1;

    cout << "\nEnter the second number : ";
    cin >> num2;

    cout << "\nEnter the third number : ";
    cin >> num3;

    get_max(num1,num2,num3);
    return 0;
  }
      
