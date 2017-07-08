/* 题目：输入两个数，交换两个数的位置并输出。
 *
 * 作者：蓝鹰
 *
 * 时间：2017-07-08
 *
 */

#include <stdio.h>

int main()
{
        int a,b,c;

        scanf("%d%d",&a,&b);

        c = a, a = b, b = c;

        printf("a=%d,b=%d\n",a,b);

return 0;

}
