# factorial — 阶乘计算（算法组第一次作业）

## 项目简介

本仓库对应 **Transistor 算法组第一次作业** 中的 C++ 小项目，用于练习完整工程流程：**编写代码 → CMake 多目录构建 → Git 版本控制 → 规范文档**。

程序从标准输入读取一个整数，在终端输出该数的阶乘。阶乘通过 `include/factorial.h` 声明、`src/factorial.cpp` 实现的 `calculate(int)` 完成；`src/main.cpp` 负责 `std::cin` / `std::cout` 交互。工程由 **CMake** 生成静态库 `factorial_lib` 并与 `main.cpp` 链接，最终得到可执行文件 **`factorial`**（不是单独「运行」某个 `.cpp` 文件）。

## 目录结构

```text
.
├── include/           # 头文件
│   └── factorial.h    # long long calculate(int n);
├── src/               # 源代码
│   ├── factorial.cpp  # 阶乘实现
│   └── main.cpp       # 入口：读入并打印结果
├── CMakeLists.txt     # CMake 配置
├── .gitignore         # 忽略 build/ 等生成物
├── run.sh             # 一键配置、编译并运行
└── README.md          # 项目说明
```

## 环境要求

| 项 | 说明 |
|---|---|
| 系统 |  **Ubuntu 22.04** |
| 编译器 | 支持 **C++14** 的 GCC 或 Clang |
| 构建 | **CMake ≥ 3.10**（与 `CMakeLists.txt` 中 `cmake_minimum_required` 一致；作业文档要求不低于 3.8，本项目已满足） |


## 快速开始

在项目根目录执行：

```bash
bash run.sh
```

也可手动构建与运行：

```bash
mkdir -p build && cd build
cmake ..
cmake --build . #或者是make
./factorial
```

## 模块说明

- **`factorial.h`**：声明 `long long calculate(int number);`，并提供 `<iostream>` 等与实现/调用相关的包含关系（按当前工程约定）。
- **`factorial.cpp`**：递归实现阶乘；须 `#include "factorial.h"`。
- **`main.cpp`**：提示输入、读入整数、输出阶乘结果。
