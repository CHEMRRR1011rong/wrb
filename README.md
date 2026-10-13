<div align="center">

# 📘 26级程序设计基础（C语言）作业仓库

**Programming Fundamentals · C Language · Homework Repository**

[![Course](https://img.shields.io/badge/Course-Programming%20Fundamentals-blue?style=flat-square)](#-课程简介)
[![Language](https://img.shields.io/badge/Language-C-00599C?style=flat-square&logo=c&logoColor=white)](#-仓库结构)
[![Homework](https://img.shields.io/badge/Homework-1-orange?style=flat-square)](#-作业列表)
[![Status](https://img.shields.io/badge/Status-Ongoing-success?style=flat-square)](#-作业列表)
[![Visibility](https://img.shields.io/badge/Visibility-Private-lightgrey?style=flat-square)](#-常见问题-faq)

<sub>👋 欢迎来到本课程的作业仓库！请先花 5 分钟读完本页，再动手交作业。</sub>

</div>

---

## 📖 目录

| 章节 | 内容 |
|:---:|---|
| [🎓 课程简介](#-课程简介) | 这门课、这个仓库是干什么的 |
| [📂 仓库结构](#-仓库结构) | 目录怎么组织，`main` 的定位 |
| [🚀 作业提交方式](#-作业提交方式) | **六步走完整流程（最重要）** |
| [🚨 提交注意事项](#-每次作业的提交注意事项) | 交之前务必逐条核对 |
| [📋 作业列表](#-作业列表) | 每次作业的题目与截止时间 |
| [🏅 评分标准](#-评分标准) | 5 级制怎么评 |
| [❓ 常见问题](#-常见问题-faq) | 踩坑自救指南 |
| [📮 联系方式](#-联系方式) | 有问题找谁 |

---

## 🎓 课程简介

本仓库是 **26级《程序设计基础（C语言）》** 课程的作业发布、提交与批改平台。

| 项目 | 说明 |
|:---|:---|
| 📕 课程名称 | 程序设计基础（C语言） |
| 🏫 开课单位 | 信息工程学院 |
| 👥 面向对象 | 2026级 电子信息工程 1 / 2 / 3 班 |
| 🔒 仓库性质 | **私有仓库**，仅课程师生可见 |
| 🎯 使用方式 | 教师发布题目 → 同学提交作业 → 助教审核评分 |

> 💡 **一句话理解本仓库**：`main` 分支是"公告栏"（只有题目），你的**学号分支**是"你的作业本"。

---

## 📂 仓库结构

```text
HomeWork/
├── README.md                  📘 本文件：总说明（你正在看的这一页）
│
├── Homework1/                 📝 第一次作业
│   └── README.md              └─ 题目、要求、评分标准、截止时间
│
├── Homework2/                 📝 第二次作业（后续发布）
│   └── README.md
│
└── ...                        📝 以此类推
```

**每次作业的提交都遵循同一个模式：**

```text
Homework<N>/                 ← 第 N 次作业的文件夹（教师创建）
└── <你的学号>/               ← 你的专属目录（你创建）
    ├── task1_xxx.c          ← 你的源文件
    ├── task2_xxx.c
    └── ...
```

> ❗ `main` 分支**只存放作业说明**。请勿向 `main` 提交任何代码，也不要修改 `main` 上的任何文件。

---

## 🚀 作业提交方式

> 🍴 本课程采用 **Fork + Pull Request** 模式。跟着下面六步走即可，第一次可能会有点陌生，做过一次就熟了。

### 🪜 第 0 步 · 找到你的学号分支

教师已为每位同学预先创建了一个**以学号命名的分支**，例如 `2604020348`。

> 🔑 **这个分支就是你整个学期唯一的作业本**，所有作业都交到它上面。

### 🍴 第 1 步 · Fork 本仓库

打开本仓库页面，点击右上角的 **`Fork`** 按钮，把仓库复制到你自己的账号下，得到 `你的用户名/HomeWork`。

### 📥 第 2 步 · 克隆你 Fork 出来的仓库

```bash
git clone https://github.com/<你的用户名>/HomeWork.git
cd HomeWork
```

### 🌿 第 3 步 · 切换到你的学号分支

```bash
git checkout 2604020348        # ⚠️ 换成你自己的学号
```

如果提示分支不存在，先同步一次再切：

```bash
git fetch origin
git checkout -b 2604020348 origin/2604020348
```

确认当前分支正确（星号所在行就是你所在的分支）：

```bash
git branch
```

### ✍️ 第 4 步 · 完成作业

在 `Homework<N>/<你的学号>/` 目录下创建源文件，例如：

```text
Homework1/2604020348/task1_card.c
```

具体题目见对应作业文件夹里的 `README.md`。

### 📤 第 5 步 · 提交并推送

```bash
git add Homework1/2604020348/
git commit -m "Homework1: 完成第一次作业"
git push origin 2604020348
```

### 🔀 第 6 步 · 发起 Pull Request

回到 GitHub，点击 **`Compare & pull request`**，然后**仔细核对**这几项：

| 字段 | 应该填什么 | ⚠️ 易错点 |
|:---|:---|:---|
| **base repository** | `YYXY-IE26/HomeWork` | 主仓库 |
| **base branch** | **你自己的学号**，如 `2604020348` | ❌ **不是 `main`！** |
| **head repository** | 你的 Fork | |
| **head branch** | 你的学号分支 | |

**PR 标题格式：**

```text
Homework1-2604020348-张三
```

**PR 描述建议写：** 完成了哪几题、遇到什么问题、有什么想说明的。

> ✅ PR 发出后，助教会阅读你的代码并给出**等级 + 评语**。
> ✅ 达到及格线（3 级）的 PR 由助教合并；未达标的会收到修改建议，**请在同一个 PR 上继续修改**，不要另开新 PR。

---

## 🚨 每次作业的提交注意事项

> 📌 **交作业前请逐条核对下面这份清单。**

### ✅ 应该做的

- ✅ 只在 `Homework<N>/<你的学号>/` 目录下新增文件
- ✅ 源文件用 `.c` 后缀，文件名用**小写英文 + 下划线**，不含空格和中文
- ✅ 源文件保存为 **UTF-8 编码**，并在文件顶部注释里写明**学号、姓名、题目**
- ✅ 代码缩进整齐、适当加注释，保证 `gcc -Wall` 编译无错误
- ✅ PR 的 **base 分支选自己的学号分支**
- ✅ 截止时间前可以多次提交，**以最后一次为准**

### ❌ 不要做的

- ❌ 不要向 `main` 分支提交任何内容
- ❌ 不要修改**任何** `README.md`（包括根目录和作业目录里的）
- ❌ 不要改动**其他同学**的目录
- ❌ 不要提交编译产物：`*.exe`、`*.o`、`*.obj`、`*.out`
- ❌ 不要提交 IDE 缓存：`.vs/`、`.vscode/`、`*.suo`、`*.user`
- ❌ 不要删除或重建自己的学号分支
- ❌ 不要使用 `git push --force`
- ❌ 不要抄袭：允许讨论思路，代码必须自己写
- ❌ 不要提交压缩包、图片等与作业无关的文件

> 🚨 违反上述任一条，本次作业可能被记为 **1 级**或要求重做。

---

## 📋 作业列表

| # | 作业 | 主要内容 | 截止时间 | 状态 |
|:---:|:---|:---|:---:|:---:|
| 1 | [Homework1](./Homework1/README.md) | `printf` 输出与基本数据类型 | 2026-10-20 23:59 | 🟢 进行中 |

<sub>📌 后续作业会在本表持续更新，请以本表和各作业文件夹内的 `README.md` 为准。</sub>

---

## 🏅 评分标准

每次作业按 **5 级制**评分，**达到 3 级及以上**方可合并。

| 等级 | 表现 | 图示 |
|:---:|:---|:---:|
| **5** | 完全符合全部要求，思路清晰，代码规范，无错误，或有额外亮点 | 🌟🌟🌟🌟🌟 |
| **4** | 基本符合要求，功能完整，存在少量小问题（如注释缺失、命名不统一） | 🌟🌟🌟🌟 |
| **3** | 达到基本要求，可正常运行，但存在明显但非致命的问题 | 🌟🌟🌟 |
| **2** | 未达到基本要求，存在较严重错误或功能缺失 | 🌟🌟 |
| **1** | 未完成 / 抄袭 / 提交内容与作业无关 | 🌟 |

> 🎯 **及格线：3 级。** 低于 3 级的 PR 只会收到评语与修改建议，不会合并；修改后重新提交到**同一个 PR**即可重新审核。

---

## ❓ 常见问题 FAQ

<details>
<summary><b>❓ Q1：老师发布了新作业，我的 Fork 怎么同步？</b></summary>

<br>

在 GitHub 上打开你的 Fork，点击 **`Sync fork` → `Update branch`**。然后在本地：

```bash
git checkout main
git pull
git checkout <你的学号>
git merge main
git push origin <你的学号>
```

</details>

<details>
<summary><b>❓ Q2：我不小心把代码提交到 <code>main</code> 了怎么办？</b></summary>

<br>

**不要 force push，也不要删除分支。** 立刻在 PR 里说明情况并联系助教，助教会协助处理。

</details>

<details>
<summary><b>❓ Q3：我可以修改 README 或别人的目录吗？</b></summary>

<br>

**不可以。** 这两类改动都会被直接打回。你的改动范围只有 `Homework<N>/<你的学号>/`。

</details>

<details>
<summary><b>❓ Q4：一定要用命令行吗？可以用 Dev-C++ / VS Code / Visual Studio 吗？</b></summary>

<br>

编辑器随意，只要提交的是 `.c` 源码即可。也可以用 GitHub Desktop 图形界面完成 clone / commit / push，但 **Fork 和 PR 的 base 分支仍需在网页上确认**。

</details>

<details>
<summary><b>❓ Q5：代码能编译，但输出中文是乱码？</b></summary>

<br>

Windows 控制台默认是 GBK 编码。请把源文件保存为 **UTF-8**，并在需要时于程序开头加一行 `system("chcp 65001");`（需 `#include <stdlib.h>`）。若仍乱码，可先用英文输出调试。

</details>

<details>
<summary><b>❓ Q6：迟交了怎么办？</b></summary>

<br>

仍可提交，但请主动在 PR 里说明。是否扣分由任课教师按课程规定处理。

</details>

<details>
<summary><b>❓ Q7：我看不到本仓库 / 无法 Fork？</b></summary>

<br>

本仓库为私有仓库，你需要先被添加为协作者。请提供你的 **GitHub 用户名 + 学号 + 姓名**给助教。

</details>

---

## 📮 联系方式

| 角色 | 联系方式 |
|:---|:---|
| 👨‍🏫 任课教师 | 课堂 / 课程群通知 |
| 🧑‍💻 助教 | 课程群 @助教 |
| 🐛 作业或仓库问题 | 在本仓库提 [Issue](../../issues)（请注明学号与问题） |

---

<div align="center">

**🎯 写好每一行代码，就是写好每一次作业。**

<sub>本仓库由课程助教维护 · 最后更新：2026-10-13</sub>

</div>
