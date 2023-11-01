#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n;
    int m;
    double l;
    cin >> n;
    cin >> m;
    l=sqrt((m*m)+(n*n));
    cout << setprecision(4) << l;
}
