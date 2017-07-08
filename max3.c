/*题目：比较三个数的大小，并输出最大数。
 *作者：蓝鹰
 *时间：2017-07-08
*/

#include <stdio.h>

int max3(int x,int y,int z)

{
  int u;
        
        u = x>y?x:y;
        
        u = u>z?u:z;
        
  return (u);

}

int main()
        
{
        
  int a,b,c,d;
        
        scanf("%d%d%d",&a,&b,&c);
        
              d=max3(a,b,c);
        
        printf("max=%d\n",d);
        
  return 0;
        
}
