// nth fabonacci series number
#include<iostream>
using namespace std;
int fab(int n){
 if(n==1 || n==2) return 1;
 else return fab(n-1) + fab(n-2);


}
int main (){
cout<<fab(6)<<endl;



 
}