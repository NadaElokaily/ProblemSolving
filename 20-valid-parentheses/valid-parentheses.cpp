class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        for(auto c : s)
        {
            if((c == '{')||(c == '(')||(c == '['))
            {
                stk.push(c);
            }
            else if (stk.empty()) return false;
            else if (c == ')')
            {
                if(stk.top() != '(') return false;
                else stk.pop();
            }
            else if (c == ']')
            {
                if(stk.top() != '[') return false;
                else stk.pop();
            }
            else if (c == '}')
            {
                if(stk.top() != '{') return false;
                else stk.pop();
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
};