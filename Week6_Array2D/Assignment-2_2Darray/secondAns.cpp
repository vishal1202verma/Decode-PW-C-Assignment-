#include<iostream>
using namespace std;
int main (){
// Write a program to rotate the matrix by 90 degrees anti-clockwise.
int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8 ,9};
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
} 
cout<<endl;
// reverse the matrix by column wise
    for(int k=0; k<3; k++){
        int i=0;
        int j=2;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    cout<<endl;
    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
} 
    cout<<endl;
    // rotate the matrix
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++ ){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
