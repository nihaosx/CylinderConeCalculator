#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    int lang, type;
    double val, h, r;

    cout << "1-中文 2-English: ";
    cin >> lang;

    string s[8];
    if (lang == 1) {
        s[0] = "选择输入方式:1半径 2直径 3周长";
        s[1] = "数值"; s[2] = "高"; s[3] = "底面积"; s[4] = "侧面积";
        s[5] = "表面积"; s[6] = "圆柱体积"; s[7] = "圆锥体积";
    }
    else {
        s[0] = "Input type:1-Radius 2-Diameter 3-Circumference";
        s[1] = "Value"; s[2] = "Height"; s[3] = "Base area";
        s[4] = "Lateral area"; s[5] = "Surface area";
        s[6] = "Cylinder volume"; s[7] = "Cone volume";
    }

    cout << s[0] << ": ";
    cin >> type;
    cout << s[1] << ": ";
    cin >> val;
    if (type == 2) val /= 2;
    else if (type == 3) val /= (2 * PI);
    r = val;
    cout << s[2] << ": ";
    cin >> h;

    double base = PI * r * r;
    double lateral = 2 * PI * r * h;
    double surface = 2 * base + lateral;
    double cyVol = base * h;
    double coVol = cyVol / 3;

    cout << s[3] << ": " << base << endl;
    cout << s[4] << ": " << lateral << endl;
    cout << s[5] << ": " << surface << endl;
    cout << s[6] << ": " << cyVol << endl;
    cout << s[7] << ": " << coVol << endl;

    cout << "按回车退出..." << endl;
    cin.ignore();
    cin.get();
    return 0;
}