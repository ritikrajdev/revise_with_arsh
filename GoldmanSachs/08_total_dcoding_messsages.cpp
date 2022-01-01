#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
class Solution {
    vector<int> t;
    int _CountWays(string& str, int n) {
        if (str[0] == '0') return t[n] = 0;
        if (n <= 1) return t[n] = 1;
        
        if (t[n] != -1) return t[n];
        
        int count = 0;
        if (str[n-1] - '0' > 0)
            count += _CountWays(str, n-1);

        int two_digit_num = stoi(str.substr(n-2, 2));
        if (two_digit_num <= 26 && two_digit_num >= 10)
            count += _CountWays(str, n-2);
        else if (two_digit_num % 10 == 0)
            count = 0;
        
        return t[n] = count % mod;
    }
	public:
		int CountWays(string str){
		    size_t n = str.length();
		    t.reserve(n+1);
		    for (int i = 0; i < n+1; i++)
		        t.push_back(-1);
		    return _CountWays(str, n);
		}
};
