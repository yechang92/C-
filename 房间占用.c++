#include<iostream>
using namespace std;
int main()
{
    int n,arr[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if(arr[k]==0)
    {
            cout<<k;
           
        }
       else
       {
           for(int i=1;i<=n;i++)
           {
               if(arr[i]==0)
               {
                   cout<<i;
                   //跳出循环
                   break;
               }
           }
       }
   
    
    return 0;
}
//输入n个房间，每个房间用0或1表示是否被占用，0表示未占用，1表示已占用，输入k，表示要找第k个未占用的房间，输出这个房间的编号，如果k大于n，则输出-1。