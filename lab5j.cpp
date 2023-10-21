#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int beg =0, end =int(s.size()-1);
    int cnt =0;

    while(end >beg){
            if(s[beg] == s[end]){
                beg++; end --;
            }else{
                cnt++;
                if(cnt>=2){
                    cout <<"NO";
                    exit(0);
                }
                if(s[beg+1] ==s[end]) ++beg;
                else if (s[end-1]==s[beg]) --end;
                else{
                    cout << "NO";
                    exit(0);
                }
            }
    }
    cout << "YES";



    return 0;
}
