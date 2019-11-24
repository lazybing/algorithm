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

class Solution{
    public:
        bool backspaceCompare(string S, string T){
            int i = S.size(), j = T.size();
            int skipS = 0, skipT = 0;

            while (i >= 0 || j >= 0) {
                while (i >= 0) {
                    if (S[i] == '#') {skipS++; i--;}
                    else if (skipS > 0) {skipS--; i--;}
                    else break;
                }
                while (j >= 0) {
                    if (T[j] == '#'){skipT++; j--;}
                    else if (skipT > 0) {skipT--; j--;}
                    else break;
                }
                if (i >= 0 && j >= 0 && S[i] != T[j])
                    return false;
                if ((i >= 0) != (j >= 0))
                    return false;
                i--;
                j--;
            }
            return true;
        }
};
