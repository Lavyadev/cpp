#include<iostream>
using namespace std;
int main()
{
    int a, b[5];

    cout << " enter the value of a : " ;
    cin >> a;
    
    cout << " enter the elements of array : ";
    cin >> b[0];
    cin >> b[1];
    cin >> b[2];
    cin >> b[3];
    cin >> b[4];

    cout << b[0]<< endl;
    cout << b[1]<< endl;
    cout << b[2]<< endl;
    cout << b[3]<< endl;
    cout << b[4]<< endl;

    cout << a;
    
    return 0;

}