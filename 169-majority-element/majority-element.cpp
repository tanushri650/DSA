class Solution {            //o(n) o(1)
public:
    int majorityElement(vector<int>& nums) {
   
   unordered_map<int,int>mpp;

   for(int i=0;i<nums.size();i++)
   {
      mpp[nums[i]]++;
   }

   int maz=0;
   int ans=0;

 for(auto it=mpp.begin();it!=mpp.end();it++)
 {
    if(maz<it->second)
    {maz=it->second;
    ans=it->first;}
 }

return ans;       
    }
};