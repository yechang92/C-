#include <iostream>
// C++调用字符串库头文件
#include <string>

using namespace std;
int main()
{

  // cout << "Hello, World!" << endl;
  // cout << "你好!" << endl;
  // cout << "Hola!" << endl;
  // cout << "Bonjour!" << endl;

  int num1 = 10;
  // 表示sizeof(num1)是求变量所占的字节大小，这里是4个字节。

  cout << "num1的字符串大小为" << sizeof(num1) << endl;

  // 字符对应ACII码值大小
  char ch = 'A';
  cout << "字符ch的ASCII码值为" << (int)ch << endl;

  // 字符串

  // C风格字符串
  char str[] = "hello world";
  cout << "字符串str为" << str << endl;
  // C++风格字符串
  string str2 = "hello world";

  cout << "字符串str2为" << str2 << endl;

  return 0;
}