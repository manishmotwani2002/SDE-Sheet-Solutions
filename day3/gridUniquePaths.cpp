/********************** Grid Unique Paths - Leetcode 62****************/


class Solution {
public:
   
    int solve(vector<vector<int>>& arr,int m,int n,int i,int j)
    {
        if(i==m-1 && j==n-1 )
        {
            return 1;
        }
        
        if(i>=m || j>=n)
        {
            return 0;
        }
        
        if(arr[i][j]!=-1)
        {
            return arr[i][j];
        }
       
         return arr[i][j]=solve(arr,m,n,i,j+1) + solve(arr,m,n,i+1,j);
    }
    int uniquePaths(int m, int n) {
         vector<vector<int>> arr( m , vector<int> (n, -1));
        return solve(arr,m,n,0,0);
    }
};

