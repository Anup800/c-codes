#include<bits/stdc++.h>

using namespace std;

void mergeHelper(int s, int e, vector<int> &a){
vector<int> temp;

int i = s;
int m = (s+e)/2;
int j = m+1;

 while (i<= m and j<=e ){
     if(a[i]<a[j]){
         temp.push_back(a[i]);
         i++;
     }
     else{
         temp.push_back(a[j]);
         j++;
     }
 }
 while(i<=m){
     temp.push_back(a[i++]);
 }
 while(j<=e){
     temp.push_back(a[j++]);
 }
 int k =0;
 for(int idx =s;idx<=e; idx++){
     a[idx]= temp[k++];
 }
 return;
  
}
void  merge(int s ,int e, vector<int> &a ){
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    merge(s,mid,a);
    merge(mid+1,e,a);
    return mergeHelper(s,e,a);

}
int main (){
    cout<<"hello World";
    vector<int> a={1,2,4,3,7,9, 8,13,12,0};
    merge(0,9,a);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ; ";
    }
    return 0;
}