#include<iostream>
using namespace std;
int main(){

    string gender = "male";
    string *pgender = &gender;
    int age = 20;
    int *page = &age;
    double weight = 78.6;
    double *pweight = &weight; 

    cout << *pgender <<endl;
    cout << *page << endl;
    cout << *pweight << endl;


    
}