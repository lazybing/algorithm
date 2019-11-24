#Brute Force 
class Solution:
    def maxArea(self, height:List[int])->int:
        maxarea = 0

        for i in range(0, len(height), 1):
            for j in range(i + 1, len(height), 1):
                maxarea = max(maxarea, min(height[i], height[j]) * (j - i))

        return maxarea

# Two pointer Approach
class Solution:
    def maxArea(self, height:List[int])->int:
        #init the param
        left, right, width, res = 0, len(height) - 1, len(height) - 1, 0
        for w in range (width, 0, -1):
            if height[left] < height[right]:
                res, left = max(res, height[left] * w), left + 1
            else:
                res, right = max(res, height[right] * w), right - 1

        return res

