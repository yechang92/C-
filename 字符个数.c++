#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
    string s;
    //读取一整行，空格不跳过
    getline(cin,s);
    int len=sizeof(s)/sizeof(char);
    for(char c:s)
    {
        if(c>='0'&&c<='9')
        {        
        count++;        
        } 
    }
    cout<<count;
    return 0;
}
//读取一行字符串，然后统计里面有多少个数字
//例如：abc1234567890，输出为10
