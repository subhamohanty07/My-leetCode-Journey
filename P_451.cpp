#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        vector<pair<char, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });
        string result = "";
        for (auto& p : v) {
            result += string(p.second, p.first);
        }

        return result;
    }
};