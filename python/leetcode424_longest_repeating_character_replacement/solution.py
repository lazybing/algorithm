class Solution:
    def characterReplacement(self, s:str, k:int)->int:
        max_char_n = low = high = 0
        counts = collections.Counter()

        for high in range(1, len(s) + 1):
            counts[s[high - 1]] += 1
            max_char_n = max(max_char_n, counts[s[high - 1]])

            if high - low - max_char_n > k:
                counts[s[low]] -= 1
                low += 1

        return high - low

def Solution:
    def characterReplacement(self, s:str, k:int)->int:
        maxf = res = 0
        count = collections.Counter()
        for i in range(len(s)):
            counts[s[i]] += 1
            maxf = max(maxf, counts[s[i]])

            if res - maxf < k:
                res += 1
            else:
                counts[s[i - res]] -= 1

        return res
