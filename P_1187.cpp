#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

class Solution {
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {

        sort(arr2.begin(), arr2.end());
        arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());

        map<int,int> dp;
        dp[-1] = 0;

        for(int a : arr1) {

            map<int,int> newdp;

            for(auto [prev, cost] : dp) {

                if(a > prev) {
                    if(!newdp.count(a) || newdp[a] > cost)
                        newdp[a] = cost;
                }

                auto it = upper_bound(arr2.begin(), arr2.end(), prev);

                if(it != arr2.end()) {
                    int val = *it;
                    if(!newdp.count(val) || newdp[val] > cost + 1)
                        newdp[val] = cost + 1;
                }
            }

            dp = newdp;

            if(dp.empty())
                return -1;
        }

        int ans = INT_MAX;
        for(auto [k,v] : dp)
            ans = min(ans, v);

        return ans;
    }
};