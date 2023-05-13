class Solution {
public:
    bool checkIfPangram(string sentence) {
        int start='a', end='z';
        vector<int> a(26,0);
        for(char alp:sentence)
        {
        if( !(alp>=start && alp<=end))
            return false;
            a[alp-'a']++;         
            
        }
        for(int i:a)
        if(i<1)
            return false;
        return true;
    }
};
