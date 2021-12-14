/*****************Day1 Q2**************/

//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
//LeetCode 75


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid,high,i;
        high=nums.size()-1;
        low=mid=0;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:			//if 0 then swap with low to arrange them
                    {
                        swap(nums[low],nums[mid]);
                        low++;
                        mid++;
                        break;
                    }  
                case 1:			//if 1 Then mid ++ 
                    {
                        mid++;
                        break;
                    }
                case 2:			//in the rest case swap with high and high–
                    {
                        swap(nums[high],nums[mid]);
                        high--;
                        break;

                    }
            }
        }
    }
};

