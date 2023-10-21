#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    const int n = 26;
    int cnt[n] = {0}, cnt1[n] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        cnt1[t[i] - 'a']++;
    }
    bool flag = true; 
    for (int i = 0; i < n; i++)
    {
        if (cnt[i] != cnt1[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
