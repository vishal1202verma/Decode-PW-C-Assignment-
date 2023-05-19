#include<iostream>
using namespace std;
int main (){

// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns. 
// Write a program to add two matrices and save the result in one of the given matrices
// input 
int arr[5][5];
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        arr[i][j] = 10;
    }
}

// print 
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;



 

}