#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    int ss = int (s.size());
    int tt = int (t.size());
    if(tt % ss != 0){
        cout <<"NO";
        exit(0);
    } 
    int cnt = tt/ss;
    for(int i=0; i < cnt; i++ ){
        int l=i*ss;
        if (t.substr(l, ss) != s){
            cout <<"NO";
            exit(0);

        }
    } 
    cout << "YES";
    return 0;
}
