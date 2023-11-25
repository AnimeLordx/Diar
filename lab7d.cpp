#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    int sum=0;
    for(int i = 0; i<len; i++){
        sum+=s[i]-'0';
    }
    cout<<sum;
    return 0;
}
