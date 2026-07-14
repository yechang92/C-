#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int arr[100];
    int num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    cin>>num;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==num)
    {
        count++;
    }
    }
    cout<<count<<endl;
    return 0;
}
//与指定数字相同的个数
//输入n个数字，然后输入一个数num，输出与这个数相同的个数