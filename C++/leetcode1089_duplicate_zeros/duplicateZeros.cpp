class Solution {
    public:
        void duplicateZeros(vector<int> & arr) {
            int size = arr.size();
            int count = 0;

            for (int i = 0; i < arr.size(); i++)
                if (arr[i] == 0)
                    count++;
            
            int tmp = count + size;

            for (int i = size - 1; i >= 0; i--) {
                if (--tmp < size)
                    arr[tmp] = arr[i];
                if (arr[i] == 0 && --tmp < size)
                    arr[tmp] = 0;
            }
        }
};
