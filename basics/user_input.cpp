#include<iostream>
using namespace std;
int main()
{
   string name;
   cout << "Enter your name : " << endl;
  // cin >> name;
    getline(cin,name);
   cout << " Welcome " << name;
   return 0;
}