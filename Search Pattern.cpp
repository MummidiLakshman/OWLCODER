class Solution:
    def search(self, pat, txt):
        # code here
        l=[]
        n=len(txt)
        p=len(pat)
        for i in range(0,n-p+1):
            k=txt[i:i+p]
            if(k==pat):
                l.append(i+1)
        return l
