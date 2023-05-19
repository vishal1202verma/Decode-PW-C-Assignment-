#include<iostream>
using namespace std;
int main(){
// Count the number of triplets whose sum is equal to the given value x
   int x;
   cout<<"enter the value of x :";
   cin>>x;
   int arr[6]= {0, 2, 6 ,8, 12 ,14};
   int triplets = 0;
   for(int i=0; i<6; i++){
      for(int j=i+1; j<6; j++){
        for(int k=j+1; k<6; k++){
           if(arr[i]+arr[j]+arr[k] ==x){

             triplets++;
           }
        }
      
      }
   } 
   cout<<triplets<<endl;
   return 0;




}
