#include<iostream>
using namespace std;
int main()
{
    int hh,mm;
    cin>>hh>>mm;
    for(int i=0;i<5;i++)
    {
    if((mm+i)%5==3)
    {
        cout<<i<<endl;
    }
    }
    return 0;
}
//输出时刻:x点x分，在5分钟内，下一次恰好是3的倍数的时刻。