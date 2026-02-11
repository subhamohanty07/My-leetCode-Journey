class Solution {
public:
    int smallestEvenMultiple(int n) {
        // if((n>2) && (n%2==0))
        //     return n;
        bool found = false;
        int i=1, r;
        while(found == false){
            r = n * i;
            if(r%2==0)
                found = true; 
            i++;
        }
        return r;
    }
};