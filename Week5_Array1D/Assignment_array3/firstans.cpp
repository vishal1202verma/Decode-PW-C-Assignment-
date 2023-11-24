#include<iostream>
using namespace std;
int main(){
// Count the number of triplets whose sum is equal to the given value x
// it is solevby thre ponters
   int x;
   cout<<"enter the target :";
   cin>>x;
   int arr[6] = {2,3, 4, 5, 6, 0};
   int triplets =0;
   for(int i=0; i<6; i++){
      for(int j=i+1; j<6; j++){
         for(int k=j+1; k<6; k++){
            if(arr[i]+arr[j]+arr[k] == x){
                  triplets++;
            }
         }
      }
   }
   
   
   cout<<triplets;
   return 0;




}
