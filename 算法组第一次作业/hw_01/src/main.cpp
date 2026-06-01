#include "factorial.h"

int main()
{
    int number;
    std::cout << "请输入一个整数：";
    std::cin >> number;
    std::cout << number << "的阶乘为：" << calculate(number) << std::endl;
    return 0;
}