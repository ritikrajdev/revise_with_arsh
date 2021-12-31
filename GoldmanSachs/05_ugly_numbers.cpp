#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

class Solution{
public:
	ull getNthUglyNo(int n) {
	    vector<ull> vec;
	    vec.reserve(n);
	    
	    int ptr2=0, ptr3=0, ptr5=0;

	    vec.push_back(1);
	    for (int i = 1; i < n; i++) {
	        ull val = min({
	            vec[ptr2]*2,
	            vec[ptr3]*3,
	            vec[ptr5]*5
	        });
	        
	        vec.push_back(val);
	        
	        if (val == vec[ptr2]*2) ptr2++;
	        if (val == vec[ptr3]*3) ptr3++;
	        if (val == vec[ptr5]*5) ptr5++;
	    }

	    return vec.back();
	}
};
