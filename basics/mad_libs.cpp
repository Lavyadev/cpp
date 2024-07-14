#include<iostream>
using namespace std;
int main()
{
    string adjective1, adjective2, bird, room, verb;
    cout << "It was a ______(adjective1), cold November day. ";
    cout << "I woke up to the ______(adjective2) smell of ______(bird) roasting in the ______(room) downstairs. ";
    cout << "I ______(verb) downstairs to see. ";

    cout << "\nEnter all the missing words " ;
    cin >> adjective1;
    cin >> adjective2;
    cin >> bird;
    cin >> room;
    cin >> verb;

    cout << "It was a "<< adjective1<<" cold November day. ";
    cout << "I woke up to the "<< adjective2<< " smell of "<< bird<< " roasting in the " << room << " downstairs. ";
    cout << "I " << verb << " downstairs to see. ";
    return 0;
    
}