// Count ways to reach the n'th stair
// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1


class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
     int MOD = 1000000007;
    int stairs(int n, vector<int>& dp) {
    if (n <= 1) {
        return 1;
    }
    
    if (dp[n] != -1) {
        return dp[n];
    }
    
    int left = stairs(n - 1, dp);
    int right = stairs(n - 2, dp);
    
    return dp[n] =(left+right)%MOD;
}
    
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n + 1, -1);
    return stairs(n, dp);
    }
};
