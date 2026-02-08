#include<iostream>
#include<vector>
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> arr;
        for(int i=0; i<n; i++){
            int r = start + 2 * i;
            arr.push_back(r);
        }
        int output = 0 ^ arr[0];
        for(int i=1; i<arr.size(); i++){
            output ^= arr[i];
        }
        return output;
    }
};