#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
   string s;
   int sum=0;
   getline(cin, s);
    for(int i=0; i< s.size();i++  ){
       sum+=int(char(s[i])-48) ;
       }
    cout << sum;
    return 0;
}
