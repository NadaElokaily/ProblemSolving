class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        set<int> occ;
        for( auto i:arr){
            m[i]++;
        }
        for(auto i : m){
            if(occ.find(i.second) != occ.end()) return false;
            else occ.insert(i.second);
        }
        return true;
        
    }
};