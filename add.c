/*比较两个数的大小*/
#include <stdio.h>
int main()
{
    int a,b,max;
    scanf("请输入两个整数：%d%d",&a,&b);
    max={a>b?a:b}
    printf("大数是：%d\n",max);
    return 0;
}
