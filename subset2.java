class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);// sort the elements
 List<List<Integer>> ans=new ArrayList<>();
        List<Integer> as=new ArrayList<>();
        int i=0;
        genSubset(nums,i,as,ans);
        return ans;
    }
    public void genSubset(int[]nums,int i,List<Integer> as,List<List<Integer>> ans)
    {
        
        if(i==nums.length)
        {   
            if(!ans.contains(as)) //use this  statement so that no two same subset is added to ans(arrrayList of arrrayList)
            {
            ans.add(new ArrayList<Integer>(as));
            }
           return;
        }
        as.add(nums[i]);
        genSubset(nums,i+1,as,ans);
        as.remove(as.size()-1);
        genSubset(nums,i+1,as,ans);
    }
}
