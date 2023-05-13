#include<iostream>
using namespace std;
int main( ) {
 int a = 5, b, c ;
 b = a = 15 ;
 c = a < 15 ;
 cout << "a = " << a << ", b = " << b << " , c = "<< c ;


int x = 3 ;
 float y = 3.0 ;
 if (x == y)
 cout <<"x and y are equal" ;
 else
 cout << "x and y are not equal\n" ;
 
 
 int test = 0;
 cout << "First character " << '1' << endl;
 cout << "Second character " << (test ? 3 : '1') << endl;
 


return 0;
}
