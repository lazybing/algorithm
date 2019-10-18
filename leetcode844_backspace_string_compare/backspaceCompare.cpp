class Solution {
    public:
        bool backspaceCompare(string S, string T) {
            stack<char> s_stack;
            stack<char> t_stack;

            for (int i = 0; i < S.size(); i++)
                if (S[i] != '#') s_stack.push(S[i]);
                else if (!s_stack.empty()) s_stack.pop();

            for (int i = 0; i < T.size(); i++)
                if (T[i] != '#') s_stack.push(T[i]);
                else if (!s_stack.empty()) s_stack.pop();

            return s_stack == t_stack;
        }
};
