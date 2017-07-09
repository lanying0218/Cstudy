/*  求1＋2＋3＋...＋100。
 *  作者：蓝鹰
 *  时间：2017-07-09
*/

#include <stdio.h>

int main()

{
    int i,sum=0;

        for (i=1;i<=100;i++)
             
             sum=sum+i;

    printf("sum=%d\n",sum);

return 0;

}
