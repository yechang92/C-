#include<iostream>
using namespace std;
int main()
{
    int n,arr[100000],count=0,total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            break;
        }
        count++;
        if(arr[i]==0)
        {
        total++;
        }
    }
    cout<<count<<" "<<total;
    return 0;
}
    //0,1,-1 
//输入一个数组，数组中只有1和0，1代表行李，0代表空位，-1表示别人的行李，以及的个数。