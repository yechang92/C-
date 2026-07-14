#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tp,A,B,C,D;
    cin>>tp>>A>>B>>C>>D;
    if(tp==0)
    {
        
    cout<<A+B<<endl;
        
}
    if(tp==1)
    {
       cout<<max(A-C,0)+max(B-D,0);
    }
    
    return 0;
}
//功能：输入一个整数tp和四个整数A,B,C,D，若tp=0则输出A+B，若tp=1则输出max(A-C,0)+max(B-D,0)
