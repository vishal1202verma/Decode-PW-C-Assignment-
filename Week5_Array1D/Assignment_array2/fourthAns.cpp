// Find the difference between the sum of elements at even indices to the sum of elements at odd 
// indicates
#include<iostream>
using namespace std;
int count =0;
int Oddsum ( int a1[], int n){
   for(int i=0; i<n; i++){
      if(a1[i] %2 ==0){
        count += i;
      }
    //   count++;
   }    
   return count;
}
int Evensum(int a1[], int n){
    for(int i=0; i<n; i++){
      if(a1[i] %2 !=0){
        count += i;
      }
    //   count++;
   }    
    return count;
}
int main(){
int a1 [] = {2, 3 ,4, 5, 7, 3, 7,};
int n = sizeof(a1)/ sizeof(a1[0]);
 int difference = Oddsum(a1, n)- Evensum(a1, n);
 cout<<"difference between odd element sum  and even element sum is : "<<difference<<endl;

}
