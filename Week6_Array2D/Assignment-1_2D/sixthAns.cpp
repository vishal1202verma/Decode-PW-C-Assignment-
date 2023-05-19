// Write a function which accepts a 2D array of integers and its size as arguments and displays the 
// elements of middle row and the elements of middle column.
#include<iostream>
using namespace std;
int middleColumn (int arr[5][5]){

    for(int i=0; i<5; i++){
          for(int j=0; j<5; j++){
           if(i== 2 || j==2 ){
            cout<<arr[i][j]<<" ";
           }
           
        }  
        cout<<endl;
    }
   
}


int main (){

int arr[5][5] = {
1, 2, 3, 4, 5,
3, 4, 5, 6, 7,
7, 6, 5, 4, 3,
8, 7, 6 ,5, 4,
1, 2, 3, 7, 8,};

middleColumn(arr);// arr isaactual parameter 

}
