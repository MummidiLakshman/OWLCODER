  public:
    long long reversedBits(long long X) {
        // code here
        long long k=0,j=31;
        for(int i=0;i<32;i++)
        {
            if((X&(1<<i))!=0)
            {
                k=k | 1L<<(j-i);
            }
        }
        return k;
    }
