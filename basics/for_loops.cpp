#include<iostream>
using namespace std;
int main(){
    /*int i;
    for (i = 0; i< 5; i++){
        cout << i << endl;
    }*/

   int a[20];

   cout << "Enter the elements of the array : ";

   for(int i =0; i <10; i++){

    cin >> a[i];
    }

    cout << "\nThe array is : ";

    for(int i=0; i < 10; i++){
        cout << a[i] << " ";
        
    }


}