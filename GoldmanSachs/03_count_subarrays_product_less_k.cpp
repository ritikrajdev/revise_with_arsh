#include <bits/stdc++.h>

using namespace std;

class Solution{
    long long factorial(int n) {
        long long product = 1;
        while (n--)
            product *= n + 1;
        return product;
    }
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int j = 0, cnt = 0;
        long long product = 1;
        
        for (int i = 0; i < n; i++) {
            product *= a[i];
            
            while (product >= k && j <= i)
                product /= a[j++];
            
            cnt += i - j + 1;
        }

        return cnt;
    }
};
