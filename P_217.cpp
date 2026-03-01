#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int st = nums[0];
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == st) {
                count++;
                if (count >= 2)
                    return true;
            } else {
                st = nums[i];
                count = 1;
            }
        }
        return false;
    }
};