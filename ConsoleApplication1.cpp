#include <iostream>
#include <cmath>
#include <string>   // 加上这个，string 才能用
using namespace std;

int main() {
    int lang, pi_choice, type;
    double pi, val, h, r;

    // 1. 选择语言
    cout << "1-中文 2-English: ";
    cin >> lang;

    string s[10];   // 多几个位置存放提示文字
    if (lang == 1) {
        s[0] = "圆周率π选项: 1-标准π(3.14159...) 2-自定义π值";
        s[1] = "请输入自定义π值: ";
        s[2] = "选择输入方式:1半径 2直径 3周长";
        s[3] = "数值";
        s[4] = "高";
        s[5] = "底面积";
        s[6] = "侧面积";
        s[7] = "表面积";
        s[8] = "圆柱体积";
        s[9] = "圆锥体积";
    } else {
        s[0] = "π option: 1-Standard π(3.14159...) 2-Custom π value";
        s[1] = "Enter custom π value: ";
        s[2] = "Input type:1-Radius 2-Diameter 3-Circumference";
        s[3] = "Value";
        s[4] = "Height";
        s[5] = "Base area";
        s[6] = "Lateral area";
        s[7] = "Surface area";
        s[8] = "Cylinder volume";
        s[9] = "Cone volume";
    }

    // 2. 选择 π
    cout << s[0] << ": ";
    cin >> pi_choice;
    if (pi_choice == 1) {
        pi = 3.141592653589793;   // 标准 π
    } else {
        cout << s[1];
        cin >> pi;
    }

    // 3. 选择输入方式（半径/直径/周长）
    cout << s[2] << ": ";
    cin >> type;
    cout << s[3] << ": ";
    cin >> val;
    if (type == 2) val /= 2;
    else if (type == 3) val /= (2 * pi);
    r = val;
    cout << s[4] << ": ";
    cin >> h;

    // 计算
    double base = pi * r * r;
    double lateral = 2 * pi * r * h;
    double surface = 2 * base + lateral;
    double cyVol = base * h;
    double coVol = cyVol / 3;

    // 输出结果
    cout << s[5] << ": " << base << endl;
    cout << s[6] << ": " << lateral << endl;
    cout << s[7] << ": " << surface << endl;
    cout << s[8] << ": " << cyVol << endl;
    cout << s[9] << ": " << coVol << endl;

    cout << (lang == 1 ? "按回车退出..." : "Press Enter to exit...") << endl;
    cin.ignore();
    cin.get();
    return 0;
}
