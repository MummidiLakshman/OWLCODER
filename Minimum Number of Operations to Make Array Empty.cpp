    public int minOperations(int[] nums) {
        int ans=0;
        HashMap<Integer,Integer> hm=new HashMap<>();
        for(int i:nums){
            if(!hm.containsKey(i))  hm.put(i,1);
            else    hm.put(i,hm.get(i)+1);
        }
        System.out.println(hm);
        for (Map.Entry<Integer,Integer> m : hm.entrySet()) {
            if(m.getValue()==1) return -1;

            if(m.getValue()%3==0) ans+=m.getValue()/3;
            else ans+=m.getValue()/3+1;
            // System.out.println(m.getKey()+" "+m.getValue());
        }
        return ans;

    }
