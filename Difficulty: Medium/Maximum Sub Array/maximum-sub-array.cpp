// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        
        vector<int>ans;
    
    int sum=0;
    int maxo=-1;
    int startsub=-1;
    int endsub=-1;
    int start=0;
    
    for(int i=0;i<arr.size();i++)
    { 
       
        
        if(arr[i]>=0)
        {
           
           if(sum==0)
       {
           start=i;
       }
          
           sum+=arr[i];
           
          
        
        
        
        if(maxo<sum||(sum==maxo&&(i-start>endsub-startsub)))
        {
            maxo=sum;
            endsub=i;
            startsub=start;
            
        }
        }
        
       else
        {
            sum=0;
            
        }
    }
        
        
        if(startsub == -1) return {-1};
        
    for(int i=startsub;i<=endsub;i++)
    {
      ans.push_back(arr[i]);  
    }
        
        return ans;
        
    }
};