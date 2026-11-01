/*
 * 学号：2604020233
 * 姓名：陈蓉
 * 题目：Homework2 - 题目2 四则运算（含除零判断）
 * 编译：gcc -Wall -Wextra -std=c11 task2_calc.c -o task2_calc
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    printf("和   = %d\n", a + b);
    printf("差   = %d\n", a - b);
    printf("积   = %d\n", a * b);

    if (b == 0) {
        /* 除数为 0 时不能做除法，只输出前面三项 */
        printf("除数不能为 0，无法计算商和余数。\n");
    } else {
        printf("商   = %d\n", a / b);
        printf("余数 = %d\n", a % b);
    }

    return 0;
}
