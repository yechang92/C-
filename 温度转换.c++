#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double K;
    cin>>K;
    
    double C=K-273.15;
    
    double F=C*1.8+32;
    
    if(F>212)
    {
        
    cout<<"Temperature is too high!";
        
    }
    
    else 
    {
        
    cout<<fixed<<setprecision(2)<<C<<" "<<F;
        
    }
    return 0;
}
//温度转换:输入一个开尔文温度K，输出对应的摄氏温度C和华氏温度F，若F>212则输出"Temperature is too high!"。
