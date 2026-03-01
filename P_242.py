class Solution(object):
    def isAnagram(self, s, t):
        result1 = "".join(sorted(s))
        result2 = "".join(sorted(t))
        if result1 == result2:
            return True
        else:
            return False
        