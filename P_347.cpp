#include<unordered_map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        for(int n : nums)
            freq[n]++;

        vector<pair<int,int>> p;

        for(auto &x : freq)
            p.push_back({x.first, x.second});

        sort(p.begin(), p.end(),
        [](pair<int,int> a, pair<int,int> b){
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i = 0; i < k; i++)
            ans.push_back(p[i].first);

        return ans;
    }
};