class Solution:
    def removeDuplicates(self, nums:list[int]) -> int:
        i, j = 0, 0
        if len(nums) == 0:
            return 0

        for i in range(0, len(nums), 1):
            if nums[i] > nums[j]:
                j = j + 1
                nums[j] = nums[i]

        return j + 1
