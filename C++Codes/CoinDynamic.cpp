#include<bits/stdc++.h>
using namespace std;

int coinChange(int n, vector<int> a,vector<int> &dp){
    if (n==0)
    return 0;
   int ans=INT_MAX;
   
    
    for(int i =0 ; i< a.size();i++)
   {   
       if(dp[n]!=-1){
       cout<<"h>";
       return dp[n];
         }
       if(n-a[i]>=0)
       {
      int  subans= coinChange (n-a[i],a,dp);
       
       if (subans +1 < ans  and subans !=INT_MAX)
          ans=subans+1;  
       }
       
    
   }
   return dp[n]=ans;
}
int main(){
    vector<int> a ={1,2,5};
    int n = 9;
    vector<int> dp(n+1,-1);
    
    cout<< coinChange(n,a,dp);
    
    return 0;
}