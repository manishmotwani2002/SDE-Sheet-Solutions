/*****************Day2 Q1**************/

//Set Matrix Zero
//LeetCode 73

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        bool col=true;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0 )
            col=false;

            for(int j=1 ;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0 )
                {
                    matrix[i][j]=0;
                }
                    
            }
            if(col==false)
        matrix[i][0]=0;

        }
    }
};
