class Solution1 {
public:
    int addDigits(int num){
        return 1 + (num - 1) % 9
    }
};


class Solution2 {
    public:
        int addDigits (int num) {
            if (num < 10) return num;

            int ret = 0;
            while (num >= 10) {
                ret += num % 10;
                num /= 10;
            }

            ret += num;

            return addDigits(ret);
        }
};
