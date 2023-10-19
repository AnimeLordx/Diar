//Problem A: 74302. 2d array
//Given a two-dimensional array n x n. Find the largest number in array.

//Input format
//The first line contains one integer n (1 <= n <= 100000 ) — array size. Remaining lines contain n rows with n integers a[i] (-100000 <= a[i] <= 100000 ) — elements of array.

//Output format
//One number, maximal number in array.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int array[n];
    long sum = 0;
    for (int i =0; i< n; i++)
    {
        for (int i =0; i< n; i++){
            cin >> array[i];
        if( array[i] > sum) {
            while(array[i] > sum)
            {  sum++;
            }
    }
        }
    }
    cout << sum;
    return 0;
}
