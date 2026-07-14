#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int arr[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%9==0&&arr[i]%8!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
//功能：输入一个整数n，输出n个数中能被9整除但不能被8整除的数的个数。