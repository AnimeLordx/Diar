
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int m;
    cin >>n;
    cin >>m;
    int array[n][m];
     for (int i =0; i< n; i++) 
     {for (int j = 0; j < m; j++){
            cin >> array[i][j];}
    } 
     for (int i =0; i< n; i++) {
        for (int j = 0; j < m; j++){
             double root = sqrt(array[i][j]);
             if (ceil(root) == floor(root)) {
               cout << static_cast<int>(root) << " ";
                 } else {
                cout << array[i][j] << " ";
             }
        }cout << endl;
     }
    return 0;
}
