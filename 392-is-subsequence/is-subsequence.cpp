class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "") return true;
        if(t == "") return false;
        int i1= 0; 
        for(auto c2 : t){
            if (c2 == s[i1]){
                i1++; 
                if(i1 >= s.length()) return true;
            }
        }
        return false;
    }
};