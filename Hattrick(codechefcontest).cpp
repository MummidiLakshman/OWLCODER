n=int(input())
for i in range(0,n):
    a,b,c,d,e,f=map(str,input().split())
    if((a=='W' and b=='W' and c=='W') or (b=='W' and c=='W' and d=="W") or(c=='W' and d=='W' and e=='W') or(d=='W' and e=='W' and f=='W')):
        print("YES")
    else:
        print("NO")
