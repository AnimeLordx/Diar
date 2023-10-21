#include <iostream>
using namespace std;

int main() {
    int n;
    char m;
    int x = 5;
    string s;
    cin >> s;
    cin >> m;
    cin >> n;
    int sum = 0 ;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == m) {
            x = s[i];
            sum++;
            

        }
    }
    if (sum == n){
    cout << "YES";
    }else {
        cout << "NO";
    }
    

    return 0;
}
