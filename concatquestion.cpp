class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;int count=0;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        if(i==nums.size()-1)
        {
            i=-1;
            count++;}
            if(count==2)
            break;
        
            
        }
        
   return ans; }
};