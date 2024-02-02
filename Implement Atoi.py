
class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self,s):
        # Code here
       # s=-1
        i=0
        if(s[i]=='-'):
            i=1
        while(i<len(s)):
            if ord(s[i])<48 or ord(s[i])>57:
                return -1
            i+=1
        return int(s)
