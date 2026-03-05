#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int zeroCount = 0;
        int product = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zeroCount++;
            else
                product *= nums[i];
        }

        if (zeroCount > 1) {
            for (int i = 0; i < nums.size(); i++)
                answer.push_back(0);
        }
        else if (zeroCount == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0)
                    answer.push_back(product);
                else
                    answer.push_back(0);
            }
        }
        else {
            for (int i = 0; i < nums.size(); i++) {
                answer.push_back(product / nums[i]);
            }
        }

        return answer;
    }
};