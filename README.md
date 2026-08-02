# 圆柱圆锥计算器 / Cylinder & Cone Calculator

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows-green.svg)

一个简单好用的圆柱圆锥体积计算器，支持图形界面操作，无需命令行知识。

A simple cylinder & cone calculator with GUI, no command line needed.

---

## 功能特点 / Features

| 功能 | 说明 |
|------|------|
| 🖥️ 图形界面 | Win32 API 原生界面，点击操作 |
| 🔄 多种输入 | 支持半径 / 直径 / 周长三种方式 |
| 🔢 自定义 π | 可选择标准 π 或手动输入 |
| 💾 结果保存 | 一键保存计算记录到 result.txt |
| 🌐 双语支持 | 中文 / English 切换 |

## 下载使用 / Download

**无需安装，下载即用！**

👉 [下载最新版 v2.3](https://github.com/nihaosx/CylinderConeCalculator/releases/tag/v2.3)

下载 `cylinder_cone_gui.exe`，双击运行即可。

&gt; 💡 静态链接编译，无需额外 DLL 文件

## 界面预览 / Screenshot

<img width="759" height="583" alt="屏幕截图 2026-08-02 132105" src="https://github.com/user-attachments/assets/6c4a4aa8-2e6c-492f-bfaa-4b7d10ae4b6c" />

## 使用说明 / How to Use

1. 选择 π（标准 π 或自定义输入）
2. 选择输入方式（半径 r / 直径 d / 周长 C）
3. 输入数值和高
4. 点击 **计算** 查看结果
5. 点击 **保存结果** 写入 result.txt

## 版本历史 / Changelog

| 版本 | 日期 | 更新内容 |
|------|------|---------|
| v2.3 | 2026-07 | 🖥️ 图形界面版，Win32 API |
| v2.2 | 2026-07 | 🔄 循环计算 + 结果保存 |
| v2.1 | 2026-07 | 🔧 代码优化 + 多语言 |
| v2.0 | 2026-06 | 🔢 支持自定义 π |
| v1.0 | 2026-06 | 📝 初始版本 |

## 编译说明 / Build

```bash
g++ cylinder_cone_gui.cpp -o cylinder_cone_gui.exe -static-libgcc -static-libstdc++
