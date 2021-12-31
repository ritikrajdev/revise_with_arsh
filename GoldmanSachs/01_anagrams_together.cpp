#include <bits/stdc++.h>

using namespace std;

class Solution {

    bool anagram(string &s1, string &s2) {
        map<char, size_t> s1_cnt, s2_cnt;
        if (s1.length() != s2.length())
            return false;

        for (auto c : s1)
            s1_cnt[c]++;

        for (auto c : s2)
            s2_cnt[c]++;

        for (auto it1 = s1_cnt.cbegin(), it2 = s2_cnt.cbegin();
             it1 != s1_cnt.cend() && it2 != s2_cnt.cend(); it1++, it2++) {
            if (it1->first != it2->first || it1->second != it2->second)
                return false;
        }

        return true;
    }

  public:
    vector<vector<string>> Anagrams(vector<string> &string_list) {
        vector<vector<string>> anagrams;
        anagrams.push_back({string_list[0]});

        for (int i = 1; i < string_list.size(); i++) {
            bool found = false;
            for (auto &lst : anagrams) {
                if (found = anagram(lst[0], string_list[i])) {
                    lst.push_back(string_list[i]);
                    break;
                }
            }
            if (!found)
                anagrams.push_back({string_list[i]});
        }

        return anagrams;
    }
};
