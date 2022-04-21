/********************** Reverse Pairs - Leetcode 493*********************/


class Solution {
public:
    int count=0;
    void merge(vector<int> &nums,int start,int  mid,int end)
    {
        int i=start,j=mid+1;
        while(i<=mid && j<=end)
        {
            if((long)nums[i]>(long)2*nums[j])
            {
                count=count+(mid-i+1);
                j++;
            }
            else
            {
                i++;
            }
        }
        
        //merge step...can be done via merge sort swapping technique also
        sort(nums.begin()+start,nums.begin()+end+1);
    }
    void mergeSort(vector<int>& nums, int start, int end){
        if(start == end) return;
        
        int mid = (start + end)/2;
        mergeSort(nums,start, mid);
        mergeSort(nums,mid+1,end);
        
        merge(nums,start,mid,end);
        
    }
    int reversePairs(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        mergeSort(nums,0,nums.size()-1);
        return count;
    }
};
