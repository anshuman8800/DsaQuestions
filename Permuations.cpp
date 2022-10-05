class Solution {
public:
    void allPermutations(int ind,vector<vector<int>>&ans,vector<int>&nums)
    {
        //base case -> when index reaches end of nums
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        //explore and swap index 0,1 , 0,2  , 0,3 .....0,n
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            //moving the index pointer ahead by 1
            allPermutations(ind+1,ans,nums);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        allPermutations(0,ans,nums);
        return ans;
    }
};
