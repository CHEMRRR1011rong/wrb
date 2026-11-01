/*
 * 学号：2604020233
 * 姓名：陈蓉
 * 题目：Homework2 - 题目1 个人信息录入
 * 编译：gcc -Wall -Wextra -std=c11 task1_input.c -o task1_input
 */

#include <stdio.h>

#ifdef _WIN32
#include <stdlib.h>
#endif

int main(void)
{
#ifdef _WIN32
    /* Windows 控制台默认不是 UTF-8，切换后中文才不会乱码 */
    system("chcp 65001 > nul");
#endif

    int age;
    double height;
    char blood;

    printf("请输入年龄：");
    scanf("%d", &age);

    printf("请输入身高(米)：");
    scanf("%lf", &height);

    printf("请输入血型：");
    scanf(" %c", &blood);   /* %c 前加空格，跳过上一次输入留下的回车 */

    printf("+----------------------+\n");
    printf("|      个人信息卡      |\n");
    printf("+----------------------+\n");
    printf("| 年龄：%d 岁          |\n", age);
    printf("| 身高：%.2f 米        |\n", height);
    printf("| 血型：%c 型           |\n", blood);
    printf("+----------------------+\n");

    return 0;
}
