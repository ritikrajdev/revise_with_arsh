#include <bits/stdc++.h>

using namespace std;

string encode(string src)
{     
    string s;

    size_t i = 0;
    while (i < src.size()) {
        s.push_back(src[i]);
        int cnt = 0;
        
        while (src[i] == s.back() && i < src.size())
            cnt++, i++;

        s += to_string(cnt);
    }
    return s;
}  
