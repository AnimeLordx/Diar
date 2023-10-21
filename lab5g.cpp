#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
string n;
string m;
cin >> n;
cin >> m;
if(n.find(m) !=-1){
    if(n.length() == m.length()){
        cout <<"YES";
    }
}   else{
    cout <<"NO";
}


    return 0;
}
