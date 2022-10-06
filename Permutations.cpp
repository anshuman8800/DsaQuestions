class Solution {
public:
    void help(vector<vector<int>>& ans,vector<int>& nums,int p){
        if(p==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=p;i<nums.size();i++){
            swap(nums[i],nums[p]);
            help(ans,nums,p+1);
            swap(nums[i],nums[p]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        help(ans,nums,0);
        
        return ans;
    }
};
