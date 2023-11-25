#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s;
    int n, i=0;
    cin>>n;
    while(pow(2,i)<=n){
        i++;
    }
    int array[i+1];
    for(int j = 0; j<i; j++){
        array[j]=n%2;
        n/=2;
    }
    for(int k=i-1; k>=0; k--){
        cout<<array[k];
    }
    return 0;
}
