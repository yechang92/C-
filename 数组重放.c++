#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
//输入数组元素个数，然后输入数组元素，最后输出数组元素，但是顺序是反的