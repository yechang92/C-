#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    //包含a
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
              cout<<i<<endl;
        }
  
}
 
    return 0;
}
//输出1到a的因数