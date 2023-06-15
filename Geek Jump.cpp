// Geek Jump

class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
     // top down approach
    //  space optimized
    // O(1) space
        int prev=0;
        int prev2=0;
         
         for(int index= 1;index<n;index++)
         {
             
             int left=prev+abs(height[index]-height[index-1]);
            //  jab right side mai kuch ho hin nhi
             int right=INT_MAX;
             if(index>1)
             {
                 right=prev2+abs(height[index]-height[index-2]);
             }
            int curri=min(left,right);
             prev2=prev;
             prev=curri;
             
         }
         return prev;
        
        
        
    }
    
    // top down approach
         
    // vector<int>dp(n+1,-1);
    //      dp[0]=0;
    //      for(int index= 1;index<n;index++)
    //      {
             
    //          int left=dp[index-1]+abs(height[index]-height[index-1]);
    //         //  jab right side mai kuch ho hin nhi
    //          int right=INT_MAX;
    //          if(index>1)
    //          {
    //              right=dp[index-2]+abs(height[index]-height[index-2]);
    //          }
    //          dp[index]=min(left,right);
    //      }
    //      return dp[n-1];
        
    
    // O(n)+ O(n) space complexity first n for stack space second n for vecor array
    // o(n) time 

    // bottom up approach 
    // means bottom up mai akri vale ko pkdkr kr phele vale pr pauchte
    // n-t to 0 tk
    
    // int general_steps1and2(int index,vector<int>&dp,vector<int>&height)
    // {
    //     // bottom up approach
        
        
    //     if(index==0)
    //     {
    //         return 0;
    //     }
    //     if(dp[index]!=-1)
    //     {
    //         return dp[index];
    //     }
       
    //     int left =general_steps1and2(index-1,dp,height)+abs(height[index]-height[index-1]);
    //     int right=INT_MAX;
    //     if(index>1)
    //     {
    //         // agr index excist krta hoga tbhi toh right side mai ja paega (i-2)
    //          right=general_steps1and2(index-2,dp,height)+abs(height[index]-height[index-2]);
    //     }
    //     return dp[index]=min(left,right);
        
    // }
    // int minimumEnergy(vector<int>& height, int n) {
    //     // Code here
    //     vector<int>dp(n+1,-1);
    //   return general_steps1and2(n-1,dp,height);
    // }
    
    
    
};