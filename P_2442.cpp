#include<vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < 10)
                nums.push_back(nums[i]);
            else {
                int rev = 0;
                int n = nums[i];
                while (n > 0) {
                    int digit = n % 10;
                    rev = rev * 10 + digit;
                    n = n / 10;
                }
                nums.push_back(rev);
            }
        }
        unordered_set<int> s(nums.begin(), nums.end());

        return s.size();
    }
};
