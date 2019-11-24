class Solution:
    def twoSum(self, number:List[int], target: int)->List[int]:
        for i in range (0, len(numbers), 1):
            for j in range (i + 1, len(numbers), 1):
                if numbers[i] + numbers[j] == target:
                    return [i + 1, j + 1]

        return []

class Solution:
    """
    " type namber: List[int]
    " type target: int
    " rtype: List[int]
    """
    def twoSum(self, number:List[int], target: int)->List[int]:
        left, right = 0, len(numbers) - 1
        while left < right:
            if (numbers[left] + numbers[right] == target):
                return [left + 1, right + 1]
            elif numbers[left] + numbers[right] < target:
                left += 1
            else:
                right -= 1

        return []
