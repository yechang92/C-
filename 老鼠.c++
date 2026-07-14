#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int y;
  
         cin>>y; 
    
   
    if(y%x==0)
    {
         cout<<n-(y/x)<<endl;
    }
    else
    {
       cout<<n-(y/x+1)<<endl;
    }
    
    // cout<<n-(y/x+1)<<endl;
    return 0;
}
//功能：输入一个整数n，再输入两个整数x和y，输出最少需要多少个x才能使y可以被x整除。
//思路：首先判断y是否可以被x整除，如果可以被整除，则输出n-(y/x)，如果不能被整除，则输出n-(y/x+1)。
