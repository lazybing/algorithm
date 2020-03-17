class Solution:
    def maxSlidingWindow(self, nums:List[int], k:int)->List[int]:
        length = len(nums)
        if length * k == 0:
            return []

        output = []
        for i in range(length - k + 1):
            max_val = -sys.maxsize - 1
            for j in range(i, i + k):
                max_val = max(max_val, nums[j])

            output.append(max_val)

        return output

class Solution:
    def maxSlidingWindow(self, nums:List[int], k:int)->List[int]:
        d = collections.deque()
        out = []

        for i, n in enumerate(nums):
            while d and nums[d[-1]] < n:
                d.pop()

            d += i
            if d[0] == i - k:
                d.popleft()
            if i >= k - 1:
                out.append(nums[d[0]])

        return out
