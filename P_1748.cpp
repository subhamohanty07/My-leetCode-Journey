#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> removeAllRepeated(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int x : arr) {
        freq[x]++;
    }

    vector<int> result;
    for (int x : arr) {
        if (freq[x] == 1)
            result.push_back(x);
    }

    return result;
}
    int sumOfUnique(vector<int>& nums) {
        vector <int> newone = removeAllRepeated(nums);
        int sum = 0;
        for(int i=0; i<newone.size(); i++)
            sum += newone[i];

        return sum;
    }
};