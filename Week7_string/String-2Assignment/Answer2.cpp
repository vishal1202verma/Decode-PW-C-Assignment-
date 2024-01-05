// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2

#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main (){
string p = "2947578";
// cin >> p;
char f = '?', s = '?';
for (auto &i : p) {
if (f == '?' || i > f) {
s = f;
f = i;
} else if (i > s) {
s = i;
}
}
cout << s;


}
