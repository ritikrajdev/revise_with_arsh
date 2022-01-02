#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int, size_t> freq_map;
        for (auto num: nums)
            freq_map[num % k]++;
        
        if (freq_map[0] % 2 != 0) 
            return false;
        
        for (int i = 1, j = k - 1; j > i; i++, j--) {
            if (freq_map[i] != freq_map[j])
                return false;
        }
        return true;
    }
};

