#include<iostream>
using namespace std;
int main()
{
    string name = "Lavya Parashar";
    cout << name.length();
    cout << "\n" << name[4];
    name[0] = 'V';
    cout << "\n" << name;
}