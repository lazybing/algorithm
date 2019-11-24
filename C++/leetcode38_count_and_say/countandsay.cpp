class Solution {
    public:
        string generateNext(string str){
            int count = 0, i = 0;
            string result = "";

            while(str[i]) {
                count = 1;
                while(str[i] == str[i+1]){
                    count++;
                    i++;
                }
                result.push_back(count+'0');
                result.push_back(str[i]);
                i++;
            }
            return result;
        }
        string countAndSay(int n) {
            string result = "1";
            string def = "1";

            if (n == 1)
                return def;

            for (int i = 1; i < n; i++)
                result = generateNext(result);

            return result;
        }
};

