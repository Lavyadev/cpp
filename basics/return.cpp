#include<iostream>
using namespace std;
int cube(int num)
{
     cout<< num <<"\n";
    return num * num * num;

   
   

}
int main()
{
    int num , result;
    cout <<"Enter the number : " ;
    cin >> num ;
    result = cube(num);

    cout << result;
    
}