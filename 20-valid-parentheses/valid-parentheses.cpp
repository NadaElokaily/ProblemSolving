class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        for(int i =0; i< s.length(); i++)
        {
            if((s[i] == '{')||(s[i] == '(')||(s[i] == '['))
            {
                stk.push(s[i]);
            }
            else if (stk.empty()) return false;
            else if (s[i] == ')')
            {
                if(stk.top() != '(') return false;
                else stk.pop();
            }
            else if (s[i] == ']')
            {
                if(stk.top() != '[') return false;
                else stk.pop();
            }
            else if (s[i] == '}')
            {
                if(stk.top() != '{') return false;
                else stk.pop();
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
};