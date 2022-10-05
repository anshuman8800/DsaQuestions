class Solution {
public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

          stack<int> s;
          unordered_map<int,int> m;
          vector<int> ans(nums1.size(), -1);
          for(auto i:nums2)
          {
              //every number can be next greater element of previous
              while(!s.empty() && s.top()<i)
              {
                  m[s.top()] = i;
                  s.pop();
              }
              s.push(i);  
          }
          for(int i=0;i<nums1.size();++i)
              if(m.find(nums1[i]) != m.end())
                  ans[i] = m[nums1[i]];

          return ans;

      }
};
