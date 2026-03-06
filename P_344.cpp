#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> r;
        for(int i=s.size()-1; i>=0; i--){
            r.push_back(s[i]);
        }
        s = r;
    }
};