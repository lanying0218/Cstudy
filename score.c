/*
*
*   题目：成绩查询，输入需要查询的成绩，输出成绩的等级。
*
*   作者：蓝鹰
*
*   时间：2017-07-18
*
*/


#include <stdio.h>

int main()

{
    int score;

         printf("请输入需要查询的成绩：");

         scanf("%d",&score);

         printf("所查成绩%d分：",score);

         if (score>100) printf("满分100分,请重新输入.\n");

    else if (score==100) printf("满分,非常棒！\n");

    else if (score>=90) printf("成绩优秀.\n");

    else if (score>=80) printf("成绩良好.\n");

    else if (score>=70) printf("成绩一般.\n");

    else if (score>=60) printf("成绩很差.\n");

    else if (score<60)  printf("成绩非常差.\n");

return 0;

}
