/*****************Day2 Q3**************/

//Next Permutation
//LeetCode 31


class Solution {
public:
    void reverseList(vector<int> &nums,int i1)
    {
        i1++;
        int n=nums.size()-1;
        while(i1<n)
        {
            swap(nums[i1],nums[n]);
            n--;
            i1++;
        }
    }
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size(),ind1,ind2,i;
        
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind1=i;
                break;
            }
        }
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else {
        for(i=n-1;i>0;i--)
        {
            if(nums[i]>nums[ind1])
            {
                ind2=i;
                break;
            }
        }
        
        swap(nums[ind1],nums[ind2]);
        
        reverseList(nums,ind1);
        }
    }
};
