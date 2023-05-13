//Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
void Square (int n){
    
   for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
       
   }

   
}
 
int main(){
int n;
cout<<"enter first n natural num :";
cin>>n;
Square(n);


}

