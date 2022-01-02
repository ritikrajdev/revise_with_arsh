#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int x, vector<int>& vec) {
        if (accumulate(vec.begin(), vec.end(), 0) < x)
			return 0;

        int min_len = INT_MAX;

		int i = 0, j = 0;
		long long sum_i_j = 0;

		while (j < vec.size()) {
			while (sum_i_j < x && j < vec.size())
				sum_i_j += vec.at(j++);

			while (x <= sum_i_j && i < j)
				sum_i_j -= vec.at(i++);

			cout << i << ' ' << j << endl;

			min_len = min(min_len, j - i + 1);
		}

		return min_len;
    }
};
