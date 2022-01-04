/*****************Day2 Q6**************/

//RotateMatrix
//LeetCode 48

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //first transpose then reverse every row
        
        int n=matrix.size();
        
        //transpose
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

