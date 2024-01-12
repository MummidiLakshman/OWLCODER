        c=0
        d=0
        k=len(s)
        a=s[0:k/2]
        b=s[k/2:k]
        f="aeiouAEIOU"
        for i in a:
            if i in f:
                c+=1
        for i in b:
            if i in f:
                d+=1
        if(c==d):
            return True
        else:
            return False
