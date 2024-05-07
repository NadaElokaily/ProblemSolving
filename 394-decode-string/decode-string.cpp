class Solution {
public:
    string decodeString(string s) {
        string d ="",txt="",result="";
        stack<char> st;
        for(auto a : s){
            
            if(a != ']'){
                st.push(a);
            }
            else{
                char temp;
                bool flag = false;
                while(!st.empty()){
                    temp = st.top();
                    st.pop();
                    if(isdigit(temp)){
                        d = temp+d;
                        flag = true;
                    }
                    else{
                        if(!flag){
                            if(temp != '[')
                                txt = temp + txt;
                        }
                        else {
                            st.push(temp);
                            string temp_txt = "";
                            int counter = (d!="")? stoi(d): 0;
                            for(int i = 0; i< counter; i++){
                                temp_txt += txt;
                            }
                            for (auto c : temp_txt){
                                st.push(c);
                            }
                            d = "";
                            txt = "";
                            break;
                        }
                    }
                }
                int counter = (d!="")? stoi(d): 0 ;
                for(int i = 0; i< counter; i++){
                    result += txt;
                }
                txt = "";
                d = "";
            }
        }
        if(!st.empty()){
            while(!st.empty()){
                txt = st.top() + txt;
                st.pop();
            }
        }
        result+=txt;

        return result;
        
    }
};