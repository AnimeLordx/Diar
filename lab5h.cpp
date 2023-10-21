#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt[10] = {0,0,0,0,0,0,0,0,0,0};
    string s;
    cin >> s;
    for(int i=0; i < s.size(); i++){
        cnt[ s[i] - '0']++;
    }

    int maxi = -1000000;
    int mini = 1000000;

    for(int i = 0; i<10; i++){
        if(cnt[i]==0) continue;
        if(cnt[i] > maxi ){
            maxi = cnt[i];
        }
        if(cnt[i] < mini){
            mini = cnt[i];
        }
    }   

        if(maxi == mini){
            cout <<"YES";
        }
        else cout <<"NO";
    return 0;
}
