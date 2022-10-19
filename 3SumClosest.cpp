class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int minDiff = INT_MAX;
        for(int i=0; i<nums.size()-2; i++){
            int l = i+1;
            int r = nums.size()-1;
            while(l < r){
                int sum = nums[i]+nums[l]+nums[r];
                if(abs(target-sum) < minDiff){
                    minDiff = abs(target-sum);
                    ans = sum;
                }
                if(sum < target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
};
