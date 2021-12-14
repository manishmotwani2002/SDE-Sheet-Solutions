/*****************Day1 Q3**************/

//Merge 2 sorted array without extra space
//GFG

//Approach:- 

//We will evaluate gap = (m+n)/2  [CEIL always]  . With this gap we will consider the arrays as continuous and check for element 0 and gap first (in M array) and then increase it to 1, gap+1 and so on…
//
//On these 2 we will check that swap is necessary or not, and will repeat this process till     gap =1  (we will make gap=gap/2 after every iteration).
//
//INTUITION:- Shell Sort


class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            float diff=((m+n)/2)+((m+n)%2);
            int i=0,gap=ceil(diff),f;
            while(gap>=1)
            {
                if(gap<=n)
                {
                    f=gap-1;
                    if(arr1[i]>arr1[f] && f<n)
                    {
                        //swap
                        int temp=arr1[i];
                        arr1[i]=arr1[f];
                        arr1[f]=temp;
                    }
                }
                else
                {
                    f=gap-n-1;
                    if(arr1[i]>arr2[f] && f<m)
                    {
                        //swap
                        int temp=arr1[i];
                        arr1[i]=arr2[f];
                        arr2[f]=temp;
                    }
                }
                        
                i++;
                gap=ceil(gap/2 + gap%2);
            }
        } 
};

