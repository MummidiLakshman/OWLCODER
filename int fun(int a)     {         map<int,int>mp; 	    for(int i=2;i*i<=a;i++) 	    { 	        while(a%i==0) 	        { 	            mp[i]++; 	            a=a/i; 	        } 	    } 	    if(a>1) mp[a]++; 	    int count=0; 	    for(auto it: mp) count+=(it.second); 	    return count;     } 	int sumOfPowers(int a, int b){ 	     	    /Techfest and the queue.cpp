    int fun(int a)
    {
        map<int,int>mp;
	    for(int i=2;i*i<=a;i++)
	    {
	        while(a%i==0)
	        {
	            mp[i]++;
	            a=a/i;
	        }
	    }
	    if(a>1) mp[a]++;
	    int count=0;
	    for(auto it: mp) count+=(it.second);
	    return count;
    }
	int sumOfPowers(int a, int b){
	    
	    // Code here
	    int c=0;
	    while(a<=b)
	    {
	        c+=fun(a);
	        a++;
	    }
	    return c;
	    
}
