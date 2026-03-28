#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int len = s.length();

        if (len % 2 != 0)
            return false;

        vector<char> stack;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push_back(ch);
            } else {
                if (stack.empty())
                    return false;

                char topChar = stack.back();
                stack.pop_back();

                if ((ch == ')' && topChar != '(') ||
                    (ch == '}' && topChar != '{') ||
                    (ch == ']' && topChar != '[')) {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};