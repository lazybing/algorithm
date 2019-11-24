class Solution {
    public:
        int romanToInt(string s) {
            if (s.size() == 0) return 0;
            int ret = 0;

            for (int i = 0; i <= s.size() - 1; i++) {
                switch(s[i]){
                    case 'I':
                        if (i + 1 < s.size() && s[i + 1] == 'V') {
                            ret += 4;
                            i++;
                        }else if(i + 1 < s.size() && s[i + 1] == 'X') {
                            ret += 9;
                            i++;
                        }else{
                            ret += 1;
                        }
                        break;
                    case 'V':
                        ret += 5;
                        break;
                    case 'X':
                        if (i + 1 < s.size() && s[i + 1] == 'L') {
                            ret += 40;
                            i++;
                        }else if (i + 1 < s.size() && s[i + 1] == 'C') {
                            ret += 90;
                            i++;
                        }else{
                            ret += 10;
                        }
                        break;
                    case 'L':
                        ret += 50;
                        break;
                    case 'C':
                        if (i + 1 < s.size() && s[i + 1] == 'D') {
                            ret += 400;
                            i++;
                        }else if(i + 1 < s.size() && s[i + 1] == 'M'){
                            ret += 900;
                            i++;
                        }else{
                            ret += 100;
                        }
                        break;
                    case 'D':
                        ret += 500;
                        break;
                    case 'M':
                        ret += 1000;
                        break;
                }
            }
            return ret;
        }
};

