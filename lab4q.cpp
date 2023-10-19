#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int s = 1; s <= n; s++) {
        for (int x = n-1 ; x >= s; x--) {
            cout << ".";
        }

        for (int x=1; x<=(2*s - 1); x++){
            cout << "*";
        }
        
        for (int x = n-1 ; x >= s; x--) {
            cout << ".";
        }

        cout << endl;
    }
    
    return 0;
}
