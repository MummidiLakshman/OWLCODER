n=int(input())
for i in range(0,n):
    a,b=map(int,input().split())
    s=input()
    k=1
    c=0
    for i in range(0,len(s)):
        if(s[0]=='0'):
            c+=1
            print("NO")
            break
        if(s[i]=='1'):
            k=b
        if(s[i]=='0'):
            if(k<=0):
                c+=1
                print("NO")
                break
            else:
                k-=1
    if(c==0):
        print("YES")
