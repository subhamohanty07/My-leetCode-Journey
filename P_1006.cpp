class Solution {
public:
    int clumsy(int n) {
        int result = 0;
        int temp = n;
        int p = 1;

        for (int i = n - 1; i > 0; i--) {
            if (p % 4 == 1) { 
                temp *= i;
            }
            else if (p % 4 == 2) { 
                temp /= i;
            }
            else if (p % 4 == 3) {  
                result += temp;
                temp = i;
            }
            else {                  
                result += temp;
                temp = -i;
            }
            p++;
        }

        result += temp;
        return result;
    }
};
