#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] < s[i - 1]) {
            cout << "NO";
            sum ++;
            break;

        }
    }
    if (sum == 0){
    cout << "YES";
    }
    

    return 0;
}
