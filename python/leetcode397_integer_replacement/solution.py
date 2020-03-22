class Solution:
    def integerReplacement(self, n:int)->int:
        if n == 1:
            return 0
        elif n % 2 == 0:
            return 1 + self.integerReplacement(n // 2)
        else:
            return min(self.integerReplacement(n + 1),
                    self.integerReplacement(n - 1)) + 1

class Solution:
    def integerReplacement(self, n:int)->int:
        count = 0

        while n > 1:
            if n & 1 == 0:
                n >>= 1
            elif (n + 1) % 4 == 0 and n != 3:
                n += 1
            else:
                n -= 1

            count += 1

        return count

class Solution:
    def integerReplacement(self, n:int)->int:
        count = 0

        while n > 1:
            if n & 1 == 0:
                n >>= 1
            elif (n + 1) % 4 == 0 and n != 3:
                n += 1
            else:
                n -= 1

            count += 1

        return count
