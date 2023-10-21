#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        std::cout << "YES";
    else
        std::cout << "NO";
}
