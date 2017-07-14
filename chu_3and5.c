/*题目：输入一个正整数，判断这个数能否被3和5同时整除。
 *
 *作者：蓝鹰
 *
 *时间：2017-07-14
 *
 * /
 
#include <stdio.h>

int main()

{

int n;
    
        scanf("%d",&n);

    if (n>0)
        
        {
            if (( n % 3 == 0 )&& ( n % 5 == 0 ))

                {printf ("%d能被3和5同时整除\n",n);}

            else

                {printf("%d不能被3和5同时整除\n",n);}

        }
    
    else

        {
                printf("您的输入有误,请输入一个正整数.\n");
        
        }
        
return 0;

}   
