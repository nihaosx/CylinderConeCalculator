圆柱圆锥计算器 / Cylinder & Cone Calculator
 License 
 Platform 
一个专为数学教育设计的圆柱圆锥体积计算器，支持图形绘制和分步计算展示，让几何体积计算一目了然。
A cylinder & cone calculator designed for math education, featuring graphics drawing and step-by-step solutions.
✨ 功能特点 / Features
表格
功能	说明
🎨 图形绘制	计算后自动画出圆柱和圆锥示意图，标注 r 和 h
📝 分步计算	像老师板书一样展示完整解题步骤
📄 保存作业	一键生成 homework.txt，题目+过程+答案全包含
🔄 多种输入	支持半径 / 直径 / 周长三种方式
🔢 自定义 π	可选择标准 π 或手动输入
💾 结果保存	计算记录追加保存到 result.txt
🌐 双语支持	中文 / English 切换
🖥️ 界面预览 / Screenshot
<img width="894" height="605" alt="图片" src="https://github.com/user-attachments/assets/5ecbde30-bb50-4c07-bc2e-c4aff45e602e" />


┌─────────────────────────────────────────────────────┐
│  [分步计算结果]                [圆柱示意图]          │
│  已知: r = 3, h = 5            ┌───┐                │
│  Step 1: 求底面积             /     \_h=5          │
│  Step 2: 求侧面积             │       │ r=3        │
│  Step 3: 求体积               └───┘                │
│  答: 圆柱体积 141.37        [圆锥示意图]            │
│                              /   \                  │
│                             /  h=5\                 │
│                            ─────────                │
└─────────────────────────────────────────────────────┘

📥 下载使用 / Download
无需安装，下载即用！
👉 下载最新版 v3.0
下载 cylinder_cone_edu_v3.exe，双击运行即可。

    💡 静态链接编译，无需额外 DLL 文件

📖 使用说明 / How to Use

    选择 π（标准 π 或自定义输入）
    选择输入方式（半径 r / 直径 d / 周长 C）
    输入数值和高
    （可选）勾选 分步模式，查看完整解题步骤
    点击 计算，左侧显示结果，右侧画出图形
    点击 保存作业，生成可直接抄写的 homework.txt

🏫 适用场景 / Use Cases

    ✅ 初中数学课堂演示 — 老师上课展示几何体积计算
    ✅ 学生课后作业辅助 — 对照分步过程理解公式
    ✅ 几何体积计算练习 — 快速验证计算结果
    ✅ 教师备课工具 — 生成标准解题过程

📚 版本历史 / Changelog
表格
版本	日期	更新内容
v3.0	2026-08	🎨 教育版：图形绘制 + 分步计算 + 作业保存
v2.3	2026-07	🖥️ 图形界面版，Win32 API
v2.2	2026-07	🔄 循环计算 + 结果保存
v2.1	2026-07	🔧 代码优化 + 多语言
v2.0	2026-06	🔢 支持自定义 π
v1.0	2026-06	📝 初始控制台版本
💻 编译说明 / Build
bash

g++ cylinder_cone_edu_v3.cpp -o cylinder_cone_edu_v3.exe -static-libgcc -static-libstdc++ -lgdi32 -luser32

📄 文件说明 / Files
表格
文件	说明
cylinder_cone_edu_v3.cpp	教育版完整源代码
cylinder_cone_edu_v3.exe	Windows 可执行文件
result.txt	计算记录（自动生成的历史记录）
homework.txt	作业文件（自动生成的解题过程）
📜 许可证 / License
MIT License - 所有人都可以放心使用它 / Everyone can use it with confidence
