#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        for (auto& pr : freq) {
            if (pr.second == 1)
                return pr.first;
        }

        return -1;
    }
};