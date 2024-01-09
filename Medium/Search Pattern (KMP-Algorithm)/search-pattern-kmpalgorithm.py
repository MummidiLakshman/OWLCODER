#User function Template for python3

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
                    
                    
        
                

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans)==0:
            print(-1,end="")
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends