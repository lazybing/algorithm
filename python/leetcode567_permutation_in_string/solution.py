class Solution:
    #generate the sub string
    def perm(self, s:str)->str:
        if len(s) <= 1:
            return [s]

        s1 = []
        for i in range(len(s)):
            for j in self.perm(s[0:i] + s[i + 1:]):
                s1.append(s[i] + j)

        return s1

    def checkInclusion(self, s1:str, s2:str)->bool:
        if (len(s1) > len(s2)):
            return False

        s1_perm = list(set(self.perm(s1)))
        #check if the perm str of s1 is the substr of s2
        for i in s1_perm:
            idx = s2.find(i)
            if idx != -1:
                return True

        return False

class Solution:
    def match(self, s1:str, s2:str)->bool:
        for i in range(26):
            if s1[i] != s2[i]:
                return False
        return True

    def checkInclusion(self, s1:str, s2:str)->bool:
        if (len(s1) > len(s2)):
            return False

        list1 = [0 for i in range(26)]
        list2 = [0 for i in range(26)]
        
        for i in range(len(s1)):
            list1[ord(s1[i]) - ord['a']] += 1
            list2[ord(s2[i]) - ord['a']] += 1

        for i in range(len(s2) - len(s1)):
            if self.match(list1, list2):
                return True
            list2[ord(s2[i + len(s1)]) - ord('a')] += 1
            list2[ord(s2[i]) - ord('a')] -= 1

        return self.match(list1, list2)

class Solution:
    def checkInclusion(self, s1:str, s2:str)->bool:
        if (len(s1)) > len(s2):
            return False
        list1 = [0 for in range(26)]
        list2 = [0 for in range(26)]

        for i in range(len(s1)):
            list1[ord(s1[i]) - ord('a')] += 1
            list2[ord(s2[i]) - ord('a')] += 1

        count = 0
        for i in range(26):
            if list1[i] == list2[i]:
                count += 1

        for i in range(len(s2) - len(s1)):
            r = ord(s2[i + len(s1)]) - ord('a')
            l = ord(s2[i]) - ord('a')
            if count == 26:
                return True

            list2[r] += 1
            if list2[r] == list1[r]:
                count += 1
            elif list2[r] == list1[r] + 1:
                count -= 1

            list2[l] -= 1
            if list2[l] == list1[1]:
                count += 1
            elif list2[l] == list1[l] - 1:
                count -= 1

        return count == 26
