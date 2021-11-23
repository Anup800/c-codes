#include<bits/stdc++.h>
using namespace  std;
// namespace  std;

int rod(int n , vector<int> v,vector<int> dp){
if(n<=0)
return 0;

int ans= INT_MIN;
for(int i =0;i<n;i++){
    int cut =i+1;
    
    if(dp[n-cut]!=0)
    return dp[n-cut];

    int subans = v[i] + rod(n-cut,v,dp); 
    if (subans > ans)
    {
        
     ans=subans;
     
    }
}
    
    return dp[n]=ans;

}
int main(){
vector<int> v ={1,5,8,9,10,17,17,20};
int n= v.size();
vector<int> dp(n+1);
dp[0]=0;

cout<<rod(n,v,dp);
return 0;

}


