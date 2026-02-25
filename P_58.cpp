#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i = 0, j;
        vector<int> arr;
        while (s[i] != '\0') {
            if (s[i] == ' ') {
                if (count > 0) {
                    arr.push_back(count);
                    count = 0;
                }
            } else {
                count++;
            }
            i++;
        }
        if (count > 0)
            arr.push_back(count);

        int n = arr.size();
        return arr[n-1];
    }
};