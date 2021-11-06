 #include<bits/stdc++.h>
 using namespace std;
void dfs(vector<vector<int>> & mat,vector<vector<int>> & visited,int i ,int j , int m , int n )
{  if(i>=m or j>=n or i<0 or j<0)
    return;
    if(visited[i][j]==1)
    return ;
    if(map[i][j]==1)
    {   visited[i][j]=1;
        return;
    }
    visited[i][j]=1;
    
    

    dfs(mat , visited , i+1,j,m,n);
    dfs(mat , visited , i-1,j,m,n);
    dfs(mat , visited , i,j+1,m,n);
    dfs(mat , visited , i,j-1,m,n);


}
 vector<vector<int>> updateMatrix(vector<vector<int>>& mat){
  int m =mat.size();
  int n = mat[0].size();
  vector<vector<int>(n)>(m)  v;
  for(int i =0;i<m;i++)
     {
         for(int j=0;j<n;j++){
             if(mat[i][j]==0){
                 dfs(mat,v,i,j,m,n);
             }
         }
     }

 }