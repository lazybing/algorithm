//solution one
class Solution {
public:
    int maxArea(vector<int>& height){
        int res  = 0;
        int area = 0;
        for (int i = 0; i < height.size() - 1; i++)
            for (int j = i + 1; j < height.size(); j++) {
                area = (j - i) * min(height[i], height[j]);
                if (area > res)
                    res = area;
            }

        return res;
    }
};

//solution two
class Solution {
    public:
        int maxArea(vector<int>& height){
            int res  = 0;
            int area = 0;
            int left = 0, right = height.size() - 1;

            while (left < right) {
                area = (right - left) * min(height[right], height[left]);
                res  = max(res, area);
                if (height[left] < height[right])
                    left++;
                else
                    right--;
            }

            return res;
        }
};
