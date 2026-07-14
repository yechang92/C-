#include<iostream>
using namespace std;
int main()
{
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
    int k;
    cin>>k;
    int answer=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
    {
        answer=i;
        cout<<answer;
            //返回0，不在执行
        return 0;
    }
    }
    cout<<answer;
    return 0;
}
//输入n个数字，然后输入一个数k，输出这个数的索引值
//如果不存在，输出-1