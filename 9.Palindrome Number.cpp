class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int X = str.size();
        for(int i = 0; i < X; i++){
            if(str[i] != str[X-1-i])
                return false;
        }
        return true;
    }
};
