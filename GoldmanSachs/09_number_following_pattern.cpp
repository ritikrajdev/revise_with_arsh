#include<bits/stdc++.h> 

using namespace std; 

class Solution{   
public:
    string printMinNumberForPattern(string S){
        string s;
        s.reserve(S.length()+1);
        for (int i = 0; i < S.length() + 1; i++)
            s.push_back('0');
        
        int i = 0, k = 1;
        while (i < S.length()) {
            bool d_found = S[i] == 'D';
            while(S[i] == 'D' && i < S.length())
                i++;
            if (d_found) {
                int tmp = i;
                s[i--] = '0' + k++;
                while (S[i] == 'D' && i >= 0)
                    s[i--] = '0' +  k++;
                i = tmp;
            } else {
                s[i] = '0' +  k++;
            }

            i++;
        }
        
        if (s.back() == '0')
            s.back() = '0' + k;

        return s;
    }
};
