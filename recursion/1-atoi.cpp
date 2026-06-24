//implement atoi function

class Solution {
public:

    int trav(string s, int cur, int size, int num){
        
    }

    int myAtoi(string s) {
        // num 0 goes to function
        // function calls repititvely until end or non char
        // backtractk start adding in num
        // if no sign consider positive
        // round to ends

        int n = s.size();
        int cur = 0;
        int num = 0;
        int ans = trav(s, cur, size, num);
    }
};