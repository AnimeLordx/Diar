#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum2 = 0;
    int sum =0;

    for (int i=0; i < s.length(); i++) {
        if ( i%2==0) {
            sum2+=s[i];
        } else{
            sum+=s[i];
        }
    }
        if (sum == sum2){
            cout << "YES";
        }else {
            cout <<"NO";
        }

    return 0;
}
