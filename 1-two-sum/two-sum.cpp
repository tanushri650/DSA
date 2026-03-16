class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

unordered_map<int,int>mpp;



int x=0;
int y=0; 


for(int i=0;i<nums.size();i++)
{
    x=nums[i];
    y=target-x;
    

   if(mpp.find(y)!=mpp.end()&& mpp[y]!=i)
   {
     return{i,mpp[y]};
   }

   mpp[nums[i]]=i;

}

return{};
    }
};