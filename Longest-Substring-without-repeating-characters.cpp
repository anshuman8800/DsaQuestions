class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<int,int>countOfchar;
        int ans=0;
        int start=0;
        for(int end=0;end<s.size();end++)
        {
            countOfchar[s[end]]++;
            while(countOfchar[s[end]]>1)
            {
                countOfchar[s[start]]--;
                start++;
            }
            ans = max(ans,end-start+1);
        }
        return ans;
    }
};
