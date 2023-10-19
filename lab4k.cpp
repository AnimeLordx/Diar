#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sum = 0;
    int sumi = 0;
    int n;
    int m;
    cin >> n;
    cin >> m;
    int array[n][m];
     for (int i =0; i< n; i++){
        for (int j = 0; j < m; j++){
            cin >> array[i][j];}
    } 
     for (int i =0; i < n; i++) {
        for (int j = 0; j < m; j++){
         sum+=array[i][j];
        }cout <<"The sum of row number " << i+1 << " "<< "is " << sum << endl;
        sum=0;
     }
     for (int j =0; j < m; j++) {
        for (int i = 0; i < n; i++){
         sumi+=array[i][j];
        }cout <<"The sum of column number " << j+1 << " "<< "is " << sumi << endl;
        sumi=0;
     }
    return 0;
}
