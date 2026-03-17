class Solution {
public:
    int maxSubArray(vector<int>& nums) {

int sum=0;
int maxo=INT_MIN;
int start=0;
int end=0;
int temps=0;
for(int i=0;i<nums.size();i++)
{ 
   if(sum==0){temps=i;}

  sum=sum+nums[i];

if(sum>maxo)
{

end=i;
start=temps;

}


  maxo=max(maxo,sum);

 
   
  if(sum<0)
  {sum=0;}

}
return maxo;
        
    }
};