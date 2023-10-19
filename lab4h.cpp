#include <iostream>
using namespace std;

int main()
{
    int sum = 1000000;
    int sumi;
    int n;
    int m;
    cin >>n;
    cin >>m;
    int array[n][n];
     for (int i =0; i< n; i++) 
     {
        int sumj = 0;
        for (int j = 0; j < m; j++){
            cin >> array[i][j];
            sumj+= array[i][j];
        }if (sumj < sum){
                sumi = i;
                sum = sumj;}
    } cout << sumi+1;

    return 0;
}
