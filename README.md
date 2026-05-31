# Cylinder & Cone Calculator / 圆柱圆锥计算器

**A simple C++ program that calculates cylinder and cone (same base & height) area and volume. Supports both Chinese and English interface.**

**一个简单的 C++ 程序，输入底面大小（半径/直径/周长）和高，自动计算圆柱的底面积、侧面积、表面积、体积，以及等底等高圆锥的体积。支持中英文切换。**

## Features / 功能
- Input via radius, diameter, or circumference / 支持半径、直径、周长三种输入方式
- Calculate: base area, lateral area, surface area, volume / 计算底面积、侧面积、表面积、体积
- Cone volume = cylinder volume × 1/3 / 圆锥体积 = 圆柱体积 × 1/3
- Choose language at startup (Chinese / English) / 启动时选择中英文

## How to compile and run / 如何编译运行

### Requirements / 环境要求
- C++ compiler (g++, Visual Studio, etc.)

### Compile with g++ / 用 g++ 编译
```bash
g++ main.cpp -o cylinder_calc.exe -lm
Windows: cylinder_calc.exe

Linux/macOS: ./cylinder_calc
