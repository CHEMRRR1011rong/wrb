/*
 * 学号：2604020233
 * 姓名：陈蓉
 * 题目：Homework1 - 题目1 个人信息卡片
 * 编译：gcc -Wall -Wextra -std=c11 task1_card.c -o task1_card
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

    printf("+--------------------------------------+\n");
    printf("|            个 人 信 息 卡            |\n");
    printf("+--------------------------------------+\n");
    printf("|  姓名：陈蓉                          |\n");
    printf("|  学号：2604020233                    |\n");
    printf("|  班级：26电子信息工程2班             |\n");
    printf("|  专业：电子信息工程                  |\n");
    printf("+--------------------------------------+\n");
    printf("|  座右铭：天道酬勤，厚积薄发。        |\n");
    printf("+--------------------------------------+\n");

    return 0;
}
