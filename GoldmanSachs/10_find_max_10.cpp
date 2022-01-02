#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// n Log(k) + k 
vector<int> k_largest_elements(vector<int> &vec, int k) {
    if (k >= vec.size())
        return vec;

    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (const auto num : vec) {
        min_heap.push(num);
        if (min_heap.size() > k)
            min_heap.pop();
    }

    vector<int> result(k);
    for (auto &num : result) {
        num = min_heap.top();
        min_heap.pop();
    }

    return result;
}
