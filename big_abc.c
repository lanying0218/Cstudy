/* 题目：输入三个数，按从大到小的顺序输出。
 * 作者：蓝鹰
 * 时间：2017-07-09
 */

#include <stdio.h>

    int main()
{
    int a,b,c,big;

        scanf("%d%d%d",&a,&b,&c);

            if (a<b)

                {big=a;a=b;b=big;}

            if (a<c)

                {big=a;a=c;c=big;}

            if (b<c)

                {big=b;b=c;c=big;}

        printf("%d>%d>%d\n",a,b,c);

return 0;

}
