#include<iostream>
using namespace std;
void  OddNum (int a, int b){
    if(a>b){
        OddNum(b, a);
        return;
    }

for(int i=a; i<=b; ++i){
    if(i%2 != 0){
        cout<<i<<" ";
    }
}
cout<<endl;
}

int main(){
// Given two numbers a and b, write a function to print all odd numbers between them
int a, b;
  cout<<"enter a :";
  cin>>a;
  cout<<"enter b :";
  cin>>b;
  OddNum( a, b);

}