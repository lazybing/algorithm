vector<vector<int>> threesum(vector<int> & nums)
{
    vector<vector<int>> res;
    if (nums.size() < 3) 
        return res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
        int a = nums[i];
        if (a > 0)
            break;

        if (i > 0 && a == nums[i - 1])
            continue;

        for (long j = i + 1, k = nums.size() - 1; j < k;){
            int b = nums[j];
            int c = nums[k];
            int value = a + b + c;
            if (value == 0) {
                res.push_back(vector<int>({a, b, c}));
                while(j < k && b == nums[++j]);
                while(j < k && c == nums[--k]);
            } else if (value > 0) {
                k--;
            } else {
                j++;
            }
        }
    }

    return res;
}
