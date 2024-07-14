#include<iostream>
using namespace std;
int main()
{
    string name = "Lavya Parashar";
    /*cout << name.length();
    cout << "\n" << name[4];
    name[0] = 'V';
    cout << "\n" << name;*/

    /*cout << name.find("P", 0) << endl;
    cout << name.find("Parashar", 6);*/

    cout << name.substr(8,3);

    string name1 = name.substr(8,3);
    cout << "\n" << name1;
    

    return 0;
}