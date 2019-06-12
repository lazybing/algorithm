class Solution{
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int low = 0, high = numbers.size - 1;

            while(low < high) {
                if (numbers[low] + numbers[high] == target) 
                    break;
                if (numbers[low] + numbers[high] < target) 
                    low++;
                else
                    high++;
            }

            return vector<int> ({low+1, high+1});
        }
};

