#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for (int i = left; i <= right; i++) {
            int n = i;
            bool isSelf = true;
            if (i < 10)
                arr.push_back(i);
            else {
                while (n > 0) {
                    int r = n % 10;
                    if (r == 0  || i % r != 0) {
                        isSelf = false;
                        break;
                    }
                    n /= 10;
                }
                if (isSelf == true)
                    arr.push_back(i);
            }
        }
        return arr;
    }
};