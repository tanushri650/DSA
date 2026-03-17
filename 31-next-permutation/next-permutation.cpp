class Solution {  // 1,1,6,2,5
public:
    void nextPermutation(vector<int>& nums) {

    int indo=-1;
    int n=nums.size();

    for(int i=n-1;i>0;i--)
    {
        if(nums[i-1]<nums[i])
        {
            indo=i-1;

            break;
        }
    }


    if(indo==-1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }



    for(int i=n-1;i>indo;i--)
    {
        if(nums[i]>nums[indo])
        {
            swap(nums[indo],nums[i]);
            break;
        }
    }
    
 


   reverse(nums.begin()+indo+1,nums.end());













    }
};