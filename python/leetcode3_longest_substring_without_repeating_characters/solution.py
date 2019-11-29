# runtime 1184ms beat 5%
class Solution:
    def lengthOfLongestSubstring(self, s:str)->int:
        res, left, right = 0, 0, 0
        settings = set()

        for left in range(0, len(s), 1):
            right = left
            while (right < len(s)):
                if s[right] in settings:
                    break
                else:
                    settings.add(s[right])
                    res = max(res, right - left + 1)
                    right = right + 1

            setttings.clear()

        return res

# runtime 68ms beat 64%
class Solution:
    def lengthOfLongestSubstring(self, s:str)->int:
        res, left, right = 0, 0, 0
        settings = set()

        while right < len(s):
            if s[right] in settings:
                while left < right:
                    if s[left] == s[right]:
                        settings.discard(s[left])
                        left = left + 1
                        break
                    else:
                        settings.discard(s[left])
                        left = left + 1

            settings.add(s[right])
            res = max(res, right - left + 1)
            right = right + 1

        return res

# runtime 72ms beat 56%
class Solution:
    def lengthOfLongestSubstring(self, s:str)->int:
        res, left, right = 0, 0, 0
        dic = {}

        while right < len(s) and left + res < len(s):
            if s[right] in dic:
                left = max(left, dic[s[right]] + 1)

            dic[s[right]] = right
            res = max(res, right - left + 1)
            right = right + 1

        return res

# runtime 44ms beat 99.32%
class Solution:
    def lengthOfLongestSubstring(self, s:str)->int:
        res, start = 0, 0
        dic = {}

        for i, value in enumerate(s):
            if value in dic:
                sums = dic[value] + 1
                if sums > start:
                    start = sums

            num = i - start + 1
            if num > res:
                res = num
            
            dic[value] = i

        return res
