#include<iostream>
using namespace std;
void greed(int n){
    if(n==0)
    return;
    cout<<"Hey Vishal Verma !"<<endl;
    // Recursive Call = it is the Replacement of the loops 
    greed(n-1); 
}
int main (){
int n = 3;
greed(n);



}