#include<iostream>
using namespace std;
int main (){
// Find the factorial of a large number.

int n;
cout<<"enter any integer :";
cin>>n;
 int fact = 1;
for(int i=1; i<=n; ++i){
   
    fact*=i;
      
}
   cout<<fact;
return 0;

}