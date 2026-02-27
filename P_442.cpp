#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        vector<int>arr;
        int st = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]== st)
                count++;
            else{
                if(count >= 1)
                    arr.push_back(st);
                st = nums[i];
                count = 0;
            }
        }
        if (count >= 1)
            arr.push_back(st);
        return arr;
    }
};