#include<bits/stdc++.h>
using namespace std;
int longestsubarray(string s){
     
     int i ,left=0,maximum=1;
     int n = s.size();
     unordered_map<char,int>m;
     if(n==0)
     return 0;
     for(i=0;i<n;i++){
         m[s[i]] +=1;

         if(m[s[i]]>1)
         {
             while(s[left] != s[i]){
                 
                 m[s[left]]-= 1;
                 left++;
             }
             if(s[i]==s[i-1])
             left++;
         }
         maximum=max(i-left+1,maximum);
     }
 return maximum;
}

int main(){
    string s ="aab";
    int m=longestsubarray(s);
    cout<<m;

}