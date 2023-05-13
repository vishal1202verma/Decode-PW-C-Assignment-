// WAP to find the largest three elements in the array
#include<iostream>
using namespace std;
int main(){
 int arr[8] ={2, 3, 5, 13 ,9, 12 ,4 , 6};
int max, max2, max3;
max = max2 = max3  = arr[0];
//  int ans =0;
 for(int i=0; i<8; i++){
    if(arr[i]>max){
        max3 = max2;
        max2 = max;
        max = arr[i];
    }
    else if( arr[i]> max2){
        max3 = max2;
        max2 = arr[i];
    }
    else if(arr[i]>max3){
        max3 = arr[i];
    }
 }
  cout<<" Three greatest number of array are :"<<max<<" "<< max2 <<" "<<max3;

}