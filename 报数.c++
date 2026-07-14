#include<iostream>
using namespace std;
int main()
{
    int N,M;
    
    cin>>N>>M;
    
    for(int i=1;i<=N;i++)
    {
        if(i%M==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
//功能：输入两个整数N和M，输出1到N之间所有不能被M整除的数。