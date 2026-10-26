/*
 * 学号：2604020233
 * 姓名：陈蓉
 * 题目：Homework1 - 题目3 格式化输出练习
 * 编译：gcc -Wall -Wextra -std=c11 task3_table.c -o task3_table
 */

#include <stdio.h>

#ifdef _WIN32
#include <stdlib.h>
#endif

/*
 * 说明：printf 的域宽（如 %-12s）按"字节"补空格，而 UTF-8 中
 * 一个汉字占 3 个字节、显示时却只占 2 列，所以中文字符串直接用
 * %-12s 会导致列错位。下面两个辅助函数改为按"显示宽度"补空格：
 * ASCII 字符算 1 列，汉字算 2 列，使表头与数据行逐列对齐。
 */

/* 计算字符串的显示宽度（列数） */
static int disp_width(const char *s)
{
    int w = 0;

    while (*s != '\0') {
        if ((unsigned char)*s < 0x80) {
            w += 1;      /* ASCII 字符占 1 字节 1 列 */
            s += 1;
        } else {
            w += 2;      /* UTF-8 汉字占 3 字节 2 列 */
            s += 3;
        }
    }
    return w;
}

/* 输出字符串后补空格，使它左对齐占满 width 列 */
static void print_left(const char *s, int width)
{
    int pad = width - disp_width(s);

    printf("%s", s);
    while (pad > 0) {
        putchar(' ');
        pad--;
    }
}

/* 先补空格再输出字符串，使它右对齐占满 width 列 */
static void print_right(const char *s, int width)
{
    int pad = width - disp_width(s);

    while (pad > 0) {
        putchar(' ');
        pad--;
    }
    printf("%s", s);
}

int main(void)
{
#ifdef _WIN32
    /* Windows 控制台默认不是 UTF-8，切换后中文才不会乱码 */
    system("chcp 65001 > nul");
#endif

    /* 三列：编号右对齐 6 列，名称左对齐 12 列，单价右对齐 10 列 */
    print_right("编号", 6);
    printf("  ");
    print_left("名称", 12);
    print_right("单价", 10);
    printf("\n");

    printf("%6d  ", 1);
    print_left("铅笔", 12);
    printf("%10.2f\n", 1.50);

    printf("%6d  ", 2);
    print_left("笔记本", 12);
    printf("%10.2f\n", 5.80);

    printf("%6d  ", 3);
    print_left("橡皮", 12);
    printf("%10.2f\n", 0.75);

    printf("%6d  ", 4);
    print_left("圆规", 12);
    printf("%10.2f\n", 12.00);

    return 0;
}
