#include <iostream>
using namespace std;
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  // 都要强制转换
  double c = (double)a / (double)b;
  printf("%.9f", c);
  return 0;
}