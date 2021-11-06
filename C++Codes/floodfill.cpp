#include<bits/stdc++.h>
using namespace std;

void dfs( vector<vector<int>>& image, int sr, int sc, int newColor,int oldColor,int rows,int cols ){
    if(image[sr][sc]==newColor)
    return;
    if(sr>=rows or sr<0 or sc>=cols or sc<0)return;
    if(image[sr][sc==oldColor])
    image[sr][sc]=newColor;
    dfs(image,sr-1,sc,newColor,oldColor,rows,cols);
    dfs(image,sr,sc-1,newColor,oldColor,rows,cols);
    dfs(image,sr+1,sc,newColor,oldColor,rows,cols);
    dfs(image,sr,sc+1,newColor,oldColor,rows,cols);
    return;
    
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       if(newColor==image[sr][sc])
       return image;
       int  rows=image.size();
        int col = image[0].size();
        int oldColor=image[sc][sr];
        dfs(image,sr,sc,newColor,oldColor,rows,col);
        return image;
    }

