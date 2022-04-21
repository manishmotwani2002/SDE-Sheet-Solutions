/************************8 Majority Element 2 leetcode 229 **************************/


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,element1=-1,element2=-1,i,n=nums.size(),temp=0,temp1=0;
        
        vector<int> vtt;
        
        for(i=0;i<n;i++)
        {
            if(element1==nums[i])
            {
                count1++;
            }
            else if(element2==nums[i])
            {
                count2++;
            }
            else if(count1==0)
            {
                element1=nums[i];
                count1++;
            }   
            else if(count2==0)
            {
                element2=nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        for(i=0;i<n;i++)
        {
            if(nums[i]==element1)
                temp++;
            else if(nums[i]==element2)
                temp1++;
        }
        if(temp>floor(n/3))
            vtt.push_back(element1);
        if(temp1>floor(n/3))
            vtt.push_back(element2);
        
        return vtt;
        
    }
};

