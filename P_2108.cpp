#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0; i< words.size(); i++){
            string str = words[i];
            int s = 0, e = str.size()-1;
            bool isPal = true;
            while(e>s){
                if(str[s]!=str[e]){
                    isPal = false;
                    break;
                }
                s++;
                e--;
            }
            if(isPal == true)
                return str;            
        }
        return "";
    }
};