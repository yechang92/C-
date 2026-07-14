#include<iostream>
using namespace std;
int main()
{
    int n,k,arr[1000],count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        
        if((arr[i]>=arr[k-1]) && (arr[i]>0))
    {
        count++;
    }
        
    }
    cout<<count<<endl;
    return 0;
}
//功能：输入一个整数n和一个整数k，再输入n个整数，输出大于等于第k个数且大于0的数的个数。
//思路：先输入n和k，再输入n个整数，然后遍历这n个整数，如果这个整数大于等于第k个数且大于0，则计数器加1，最后输出计数器的值。