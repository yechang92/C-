#include<iostream>
using namespace std;
int main()
{
    int n,min;
    cin>>n;
    
    if(n-20<200&&n>=200)
    {
        min=n-50; 
        
    }
    
   else if(n<100)
   {
         min=n;
   }
    
   else if(n>=100&&n<=200)
    {
        min=n-20;
    }
    else 
    {
        min=n-50-20;
    }

    //输出
    
    cout<<min<<endl;
    
    return 0;





    
}

//功能：输入一个整数n，输出n的优惠后的最小值。