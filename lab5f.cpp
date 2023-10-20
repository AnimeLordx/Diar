#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum2;
    int sum;
    cin >> sum;
    cin >> sum2;
    for (int i = sum; i <= sum2; i++) {
        cout << s[i];
        }
    return 0;
}
