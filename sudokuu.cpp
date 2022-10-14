class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         vector<vector<bool>>rows(10,vector<bool>(10,0));
         vector<vector<bool>>col(10,vector<bool>(10,0));
         vector<vector<unordered_set<int>>>box(4,vector<unordered_set<int>>(4));
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<"i";
                char cur = board[i][j];
                if(cur=='.')
                    continue;

                // row check
                if(!rows[i][cur-'0']){
                    rows[i][cur-'0'] = 1;
                }
                else{
                    return 0;
                }
                //column check
                if(!col[j][cur-'0']){
                    col[j][cur-'0'] = 1;
                }
                else{
                    return 0;
                }
                //box check
                if(box[i/3][j/3].find(cur-'0') == box[i/3][j/3].end()){
                    box[i/3][j/3].insert(cur-'0');
                }
                else{
                    return 0;
                }
            }
         }
         return 1;
    }
};
