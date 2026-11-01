/*
 * 学号：2604020233
 * 姓名：陈蓉
 * 题目：Homework2 - 题目5 闰年判断（选做·加分）
 * 编译：gcc -Wall -Wextra -std=c11 task5_leap.c -o task5_leap
 */

#include <stdio.h>

int main(void)
{
    int year;

    printf("请输入年份：");
    scanf("%d", &year);

    /* 能被 4 整除且不能被 100 整除，或者能被 400 整除 */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d 是闰年。\n", year);
    } else {
        printf("%d 不是闰年。\n", year);
    }

    return 0;
}
