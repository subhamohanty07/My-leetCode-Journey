#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int st = nums[0];
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == st) {
                count++;
                if (count > n/2)
                    return st;
            } else {
                st = nums[i];
                count = 1;
            }
        }

        return st;
    }
};