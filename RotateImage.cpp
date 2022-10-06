class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //mirroring
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++)
                swap(matrix[i][j],matrix[n-1-i][j]);
        }

        //transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
    }
};
