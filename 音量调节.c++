#include<iostream>


using namespace std;
int main()
{
int n,v,arr[100000];
cin>>n>>v;
for(int i=0;i<n;i++)
{
    scanf("%d\n",&arr[i]);
}
int min=v;

for(int i=0;i<n;i++)
{
    if(arr[i]==0&&v>0)
    {
        v--;
    }
    else if(arr[i]==1&&v<10)
    {
        v++;
    }
   
}
cout<<v<<endl;
return 0;
}

//功能：模拟一个简单的音量调节器，输入初始音量和一系列操作（0表示音量减小，1表示音量增大），输出最终音量。












