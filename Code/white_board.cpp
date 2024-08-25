class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if (tokens.size() == 0) return 0;
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
                st.push(std::stoi(tokens[i]));
            else {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                if (tokens[i] == "+") st.push(first + second);
                if (tokens[i] == "-") st.push(first - second);
                if (tokens[i] == "*") st.push(first * second);
                if (tokens[i] == "/") st.push(first / second);
            }
        }
        return st.top();
    }
};