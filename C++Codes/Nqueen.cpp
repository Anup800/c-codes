
// Sample code to perform I/O:

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
bool canPlaced(int n,int x, int y,int board[][20]){
	int i = x;
	int j = y;
	while(i>=0 and j>=0){
		if(board[i][j]==1)
		return false;
		i--;j--;
	}

	i =x;
	j =y;
	while(i>=0 and j<n){
		if(board[i][j]==1){
			return false;
		}
		i--;j++;
	}
	 for(int k =0 ;k< n; k++){
		 if (board[k][y]==1)
		 return false;
	 }


	 return true;

}
void printboard(int n , int board[][20]){
	
	
	for(int i =0 ;i< n;i++){
		for(int j =0;j<n ;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}

}
bool solvequeen(int n, int board[][20],int i){

 if(i ==n ){
	  printboard(n,board);
	 return  true;
	
 }

 for (int j=0 ;j< n;j++)
 {
	 if(canPlaced(n,i,j,board)){
		 board[i][j]=1;
		 bool success = solvequeen(n,board,i+1);
		 if(success){
			 return true;
		 }
	 }
	 board[i][j]=0;
 }
 
 return false;

}
void print(){

}
int main() {
	int num;
	cin >> num;	
	 int board [20][20]={0};	
	bool c = solvequeen(num,board,0);
	if(!c)
	cout<<"Not possible";// Reading input from STDIN
			// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
