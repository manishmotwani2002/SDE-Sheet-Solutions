/*****************Day1 Q5**************/

//Kadane�s algorithm
//leetcode - 53


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maximum=max(sum,maximum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maximum;
    }
};

