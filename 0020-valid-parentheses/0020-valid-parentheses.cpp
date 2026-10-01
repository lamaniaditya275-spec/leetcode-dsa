class Solution {
public:
    bool isValid(string st) {
        if (st.size() % 2)
            return false;

        stack<int> s;
        for (auto c : st) {
            if (c == '(' || c == '[' || c == '{') {
                s.push(c);
            } else {
                if (s.empty())
                    return false;
                int tp = s.top();
                if ((c == ')' && tp != '(') || (c == ']' && tp != '[') ||
                    (c == '}' && tp != '{')){
                    return false;
                    }
                s.pop();   
            }
        }
        return s.empty();
    }
};