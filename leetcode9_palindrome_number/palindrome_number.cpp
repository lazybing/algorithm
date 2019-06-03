//Determine whether an integer is a palindrome.
//An integer is a palindrome when it reads the
//same backward as forward.

class Solution{
public:
    bool isPalindrome(int x){
        if (x < 0)
            return false;

        vector <int> nums;
        while(x){
            nums.push_back(x % 10);
            x = x / 10;
        }

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != nums[nums.size() - i - 1])
                return true;

        return true;
    }
}

