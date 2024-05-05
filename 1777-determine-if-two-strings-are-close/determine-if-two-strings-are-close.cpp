class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()) return false;
        int a1[28],a2[28];
        for(int i = 0; i <word1.length(); i++){
            a1[word1[i]-'a']++;
            a2[word2[i]-'a']++;
        }
        
        for(int i = 0; i<28; i++){
            if((a1[i] != 0) != (a2[i] != 0 ))return false;
        }
        sort(a1, a1+28);
        sort(a2, a2+28);
        for(int i = 0; i<28; i++){
            if(a1[i]!=a2[i]) return false;
        }
        return true;
    }
};