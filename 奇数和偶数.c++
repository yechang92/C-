#include<iostream>
using namespace std;

int main()
{
    int n,ji=0,oi=0;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    
    }
    for(int i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    {
        oi++;
    }
    else
    {
        ji++;
        
    }
}
    cout<<ji<<" "<<oi;
    return 0;
}
//功能：输入一个整数n，输出n个数中奇数和偶数的个数。