#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    int freqA[101] = {0};
    int freqB[101] = {0};

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freqA[a[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        freqB[b[i]]++;
    }

    int sameCount = 0;
    for (int i = 1; i <= 100; ++i) {
        sameCount += min(freqA[i], freqB[i]);
    }

    cout << sameCount << endl;

    return 0;
}
