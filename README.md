## 项目介绍
这是一个简单的C++项目，用于计算阶乘。
项目结构如下：
- include/
  - factorial.h
- src/
  - factorial.cpp
  - main.cpp
- CMakeLists.txt
- README.md
- .gitignore


## 项目说明
1. `include/factorial.h`：声明了计算阶乘的函数 `calculate`。
2. `src/factorial.cpp`：实现了 `calculate` 函数。
3. `src/main.cpp`：主函数，用于输入整数并输出其阶乘。
4. `CMakeLists.txt`：CMake 项目配置文件，用于构建项目。
5. `README.md`：项目说明文档。
6. `.gitignore`：Git 忽略文件，用于忽略构建目录。

## 项目构建
1. 进入项目根目录。
2. 运行 `cmake .` 生成构建文件。
3. 运行 `make` 编译项目。
4. 运行 `./factorial` 查看结果。

## 注意事项
1. 项目使用了 C++ 14 标准，确保在编译时指定 C++ 14 标准。
2. 项目使用了 CMake 3.10 及以上版本，确保在构建时指定 CMake 3.10 及以上版本。
