class Solution(object):
    def isPalindrome(self, s):
        cleaned = ""

        for ch in s:
            if ch.isalnum(): 
                cleaned += ch.lower()

        r_str = cleaned[::-1]

        return cleaned == r_str