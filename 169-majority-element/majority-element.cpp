class Solution {            //o(n) o(1)
public:
    int majorityElement(vector<int>& nums) {
   
    int ele,count;
    count=0;

    for(int i=0;i<nums.size();i++)
    {
        if(count==0)
        {
            count++;
            ele=nums[i];
        }

        else if(ele==nums[i])
        {
            count++;
        }

        else
        {
            count--;
        }

    }
     

return ele;




    }
};