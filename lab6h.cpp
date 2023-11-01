#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main(){
   string s;
   getline(cin, s);
    for(int i=0; i< s.size();i++  ){
       if( int(char(s[i])) % 2 == 0){
        
       }else{
        cout << "Not valid";
        return 0;
       }


    }
    cout << "Valid";
    return 0;
}
