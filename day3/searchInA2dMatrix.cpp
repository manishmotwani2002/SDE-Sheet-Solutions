/********************Search In a 2d Matrix - Leetcode 74 *****************************/


class Solution {
public:
    bool search(vector<vector<int>>& matrix,int l,int r,int n,int m,int target)
    {
        if(l<=r)
        {
            int mid= (l+r)/2;
            if(matrix[mid/m][mid%m]==target)
            {
                return true;
            }
            else if(matrix[mid/m][mid%m]>target)
            {
                return search(matrix,l,mid-1,n,m,target);
            }
            else
                return search(matrix,mid+1,r,n,m,target);
        }
        
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==0)
            return false;
        
          return search(matrix,0,(n*m)-1,n,m,target);
    }
};

