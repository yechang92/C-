#include<iostream>
using namespace std;
int main()
{
    int k,L,R;
    
    int arr[100],sum=0;
    
    cin>>k>>L>>R;
    //是按顺序的，不是输入的
    for(int i=L;i<=R;i++)
    {
        if(i%k==0||i%10==k) 
    {
        sum+=i;
    }
        
    }
    cout<<sum<<endl;
    return 0;
}
//输入k，L，R，求L到R之间所有能被k整除或者末尾数字为k的数的和。
