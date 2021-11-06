
// Sample code to perform I/O:

#include <iostream>

using namespace std;

void brackets(string output,int n , int open , int close , int i )
{
    if (i==2*n){
        cout<<output<<endl;
        return;
    }
    if(open < n)
    {
        
        brackets(output + '(',n,open+1, close,i+1);

    }
    if(close<open){
        
brackets(output + ')',n,open,close+1,i+1);
    }
    
}
int main() {
    int n= 5;
    
    string output="";
    brackets(output,n,0,0,0);
		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
