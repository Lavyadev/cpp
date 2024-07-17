#include<iostream>
using namespace std;
int main(){
     
    /* int a[5][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6},
        {4,5,6,7},
        {5,6,7,8}
     };*/

     int rows,columns;
      cout << "Enter the number of rows : ";
      cin >> rows;

      cout << "\nEnter the number of columns : ";
      cin >> columns;

      int a[rows][columns];

      cout << "\nEnter the elements of array : ";

      for (int i = 0; i<rows; i++){
         for (int j = 0; j<columns ; j++){

            cout << "\na["<< i <<"][" << j <<"] : ";
            cin >> a[i][j];

         }
      }

      cout << "\nThe array is : \n";

      for (int i=0; i<rows; i++){
         for (int j=0;j<columns; j++){
            cout << " " << a[i][j];
         }
         cout << "\n";
      }
} 