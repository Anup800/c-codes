#include<bits/stdc++.h>
using namespace std;

long long int powerModulo(int a, int b){
    
    a=a% 1000000007;
    b= b%1000000007;
    if(b==0)
    return 1;

    else
    return  (a * powerModulo(a,b-1));
    //Write your code here. Do not modify the function or parameters. Use helper functions if needed.
    
}
void countbrackets()
{
    if (i== 2*n)
    cout<<output<<endl;
}

int main(){

  cout<<  powerModulo(5,3);
}