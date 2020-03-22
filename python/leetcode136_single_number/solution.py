class Solution:
    def singleNumber(self, nums:List[int])->int:
        ret = 0

        for i in range(len(nums)):
            ret ^= nums[i]

        return ret

class Solution:
    def singleNumber(self, nums:List[int])->int:
        hash_tab = defaultdict(int)

        for i in nums:
            hash_tab[i] += 1

        for i in hash_tab:
            if hash_tab[i] == 1:
                return i

class Solution:
    def singleNumber(self, nums:List[int])->int:
        return 2 * sum(set(nums)) - sum(nums)
