class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st,st2;
        int n = height.size();
        vector<int>right(n),left(n);
        //NGE
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and height[i] > height[st.top()])
                st.pop();
            if(st.empty()){
                st.push(i);
                right[i] = n;
            }
            else
                right[i] = st.top();
        }
        //GE from left
        for(int i=0;i<n;i++){
            while(!st2.empty() and height[i] > height[st2.top()])
                st2.pop();
            if(st2.empty()){
                st2.push(i);
                left[i] = -1;
            }
            else
                left[i] = st2.top();
        }
        int water = 0;
        for(int i=0;i<n;i++){
            if(left[i] >=0 and right[i]<n){
                
                water += min(height[left[i]],height[right[i]]) - height[i] < 0 ? 0 : min(height[left[i]],height[right[i]]) - height[i]; 
            }
        }
        return water;
    }
};
