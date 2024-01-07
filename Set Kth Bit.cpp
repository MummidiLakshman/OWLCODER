    int setKthBit(int N, int K)
    {       // Write Your Code here
        int s=(N|(1<<K));
        return s;
    }
