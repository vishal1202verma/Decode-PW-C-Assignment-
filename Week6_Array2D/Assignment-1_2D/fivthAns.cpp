// Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
using namespace std;
int main (){
int arr[3][4] ={1, 3, 5, 7, 3, 4, 7, 8,1, 4, 12, 3};
int Maxrowsum =INT8_MIN;
int maxRow = -1;

for(int i=0; i<3; i++){
    int rowsum =0;
    for(int j=0; j<4; j++){
        rowsum += arr[i][j];
    }

    if(rowsum>Maxrowsum){
        Maxrowsum = rowsum;
        maxRow =i;
    }
  
}

cout<<maxRow+1;

}
