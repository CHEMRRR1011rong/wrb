/*
 * 学号：2604020233
 * 姓名：陈蓉
 * 题目：Homework2 - 题目3 奇偶与大小判断
 * 编译：gcc -Wall -Wextra -std=c11 task3_judge.c -o task3_judge
 */

#include <stdio.h>

int main(void)
{
    int n;

    /* (1) 判断奇偶 */
    printf("请输入一个整数 n：");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d 是偶数。\n", n);
    } else {
        printf("%d 是奇数。\n", n);
    }

    /* (2) 比较大小：三种情况分别处理 */
    int x, y;
    printf("请输入两个整数 x 和 y：");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("较大的数是：%d\n", x);
    } else if (x < y) {
        printf("较大的数是：%d\n", y);
    } else {
        printf("两个数相等。\n");
    }

    return 0;
}
