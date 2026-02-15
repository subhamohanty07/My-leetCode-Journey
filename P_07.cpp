#include<iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        int n = x;
        while(n!=0){
            int r = n % 10;
            rev = rev * 10 + r;
            n /= 10;            
        }
        if (rev > INT_MAX || rev < INT_MIN)
            return 0;
        return rev;
    }
};