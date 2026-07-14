#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int arr[n];
    int num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[n]);
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