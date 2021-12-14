/*****************Day1 Q6**************/

//Merge Overlapping Subintervals
//Leetcode - 6

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        int i;
        
        if(intervals.size()==0)
            return ans;
        
        sort(intervals.begin(),intervals.end());
        
        pair<int,int> pr;
        
        pr.first=intervals[0][0];
        pr.second=intervals[0][1];
        
        for(i=0;i<intervals.size();i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            
            if(pr.second >= start)
            {
                if(pr.second < end)
                {
                    pr.second=end;
                }
                //can be merged
                
            }
            else
            {
                //update the pair and ans
                vector<int>temp;
                temp.push_back(pr.first);
                temp.push_back(pr.second);
                
                ans.push_back(temp);
                
                pr.first = intervals[i][0];
                pr.second = intervals[i][1];
            }
        }
        vector<int>temp;
                temp.push_back(pr.first);
                temp.push_back(pr.second);
                
                ans.push_back(temp);
        return ans;
    }
};

