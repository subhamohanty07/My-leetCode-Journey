#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int alag = 0;
        for(int i=0; i<nums.size(); i++){
            alag ^= nums[i];
        }
        return alag;
    }
};
int main(){
    Solution sl;
    int n;
    cout<<"Enter size of the arra:\n";
    cin >> n;              

    vector<int> arr(n);    
    cout<<"Enter elements in the array: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];     
    }

    int alag = sl.singleNumber(arr);

    cout<<alag;
    

    return 0;

}