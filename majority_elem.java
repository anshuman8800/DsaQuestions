class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer> hs=new HashSet<Integer>();
        int n=nums.length;
        int max=0;
        for(int i=0;i<n;i++)
        {
            hs.add(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(!hs.contains(nums[i]-1))
            {
                 int c=1;
             int tar=nums[i]+1;
                while(hs.contains(tar))
                {
                    
                    c+=1;
                    tar=tar+1;
                }
             max=Math.max(c,max);
            }
        }
        return max;
    }
}
