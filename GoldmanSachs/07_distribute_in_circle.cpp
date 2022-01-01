#include <iostream>

using namespace std;

/* https://www.interviewbit.com/problems/distribute-in-circle/ */

int solve(int A, int B, int C) {
    int ans = (C + A - 1) % B;
    if (ans == 0) ans = B;
    return ans;
}
