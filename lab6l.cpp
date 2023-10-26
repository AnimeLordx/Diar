#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int n;
    int sum =0;
    cin >> s;
    cin >> n;
    int max =0;
    for(int i=0; i < s.size(); i++){
        if(s[i] >= '0' and s[i]<= '9'){
           sum++;
           max = sum;
           if(max == n){
            break;
           }
        }else sum = 0;
    }
    if(max >= n){
        cout << "Valid";
    }else{
    cout << "Not valid";}
    return 0;
}
