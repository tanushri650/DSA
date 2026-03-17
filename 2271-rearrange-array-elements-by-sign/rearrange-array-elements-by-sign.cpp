class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

    int indepos=0;

    int indeneg=1;

    int n=nums.size();
    
    vector<int>k(n);

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
           k[indepos]=nums[i];
           indepos=indepos+2;
        }
        else
        {
           k[indeneg]=nums[i];
           indeneg=indeneg+2;
        }
    }


return k;





    }
};