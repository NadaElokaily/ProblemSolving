class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        stack<string> st;
        for(auto c:s){
            if(c != ' '){
                temp += c;
            }
            else{
                if(temp != "")
                    st.push(temp);
                temp = "";
            }
        }
        if(temp != "") st.push(temp);

        string ans = st.top();
        st.pop();
        while(!st.empty()){
            ans+=" ";
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};