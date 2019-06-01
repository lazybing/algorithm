//Give a 32-bit signed integer, reverse digits of an integer.

#include <iostream>
#include <climits>

using namespace std;

class Solution{
    public:
        int reverse(int x){
            //check if the first part overflows
            if(x > INT_MAX || x < INT_MIN) return 0;
            
            int result = 0;

            while (x != 0) {
                int pop = x % 10;
                x /= 10;

                if(result > INT_MAX / 10 || (result == INT_MAX / 10 && pop > 7))
                    return 0;
                if(result < INT_MIN / 10 || (result == INT_MIN / 10 && pop < -8))
                    return 0;

                result = result * 10 + pop;
            }

            return result;
        }
};

int main(){
    class Solution solution;
    int ret = solution.reverse(123);    
    cout << ret << endl;
}
