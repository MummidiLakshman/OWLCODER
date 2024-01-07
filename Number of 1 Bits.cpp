    int setBits(int N) {
        // Write Your Code here
        int c=0;
        for(int i=0;i<32;i++)
        {
            if((N&(1<<i))!=0)
            {
                c+=1;
            }
            //N=N>>1;
        }
        return c;
    }
