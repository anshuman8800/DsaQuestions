class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
        {
            return {};
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start,end;
        vector<vector<int>>ans;
        set<vector<int>>s;
        for(int i=0;i<n;i++)
        {
            start=i+1;
            end=n-1;
            while(start<end)
            {
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==0)
                {
                    s.insert({nums[i],nums[start],nums[end]});
                    end--;
                    start++;
                }
                else if(sum>0)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        for(auto& x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};
