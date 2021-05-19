class Solution:
    def isPalindrome(self, s: str) -> bool:
        s_list = [i.lower() for i in s if i.isalnum()]

        for i in range(len(s_list) // 2):
            if s_list[i] != s_list[(-1 * i) -1]:
                return False
        return True