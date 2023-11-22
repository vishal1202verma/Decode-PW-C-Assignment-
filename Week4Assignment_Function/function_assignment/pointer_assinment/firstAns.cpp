#include<iostream>
using namespace std;
int main(){
// : Write a program to find the product of two numbers using pointers
int a, b;
cout<<"enter a :"<<endl;
cin>>a;
cout<<"enter b :";
cin>>b;
int *p1= &a;
int *p2 = &b;
cout<<"Product of two numbers :"<<(*p1)*(*p2);

}