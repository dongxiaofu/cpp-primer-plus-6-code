//
// Created by chugang on 2020/6/16.
//
#include <iostream>
#include <fstream>

int main() {
    using namespace std;
    char name[20];
    int year;
    double a_price, d_price;

    ofstream outfile;
    outfile.open("test.txt");

    cout << "输入您的名字：\n";
    cin.getline(name, 20);
    cout << "输入年份：\n";
    cin >> year;
    cout << "输入价格：\n";
    cin >> a_price;
    d_price = 3.913 * a_price;

    cout << fixed;
    cout.precision(4);  // 这行和它上面的那一行，限制cout只输出浮点数的小数位数只有四位
    cout.setf(ios_base::showpoint);
    cout << "名字：" << name << endl;
    cout << "价格1：" << a_price << endl;
    cout << "价格2：" << d_price << endl;

    outfile << fixed;
    outfile.precision(2);
    outfile.setf(ios_base::showpoint);
    outfile << "名字：" << name << endl;
    outfile << "价格1：" << a_price << endl;
    outfile << "价格2：" << d_price << endl;

    outfile.close();

    return 0;
}

/*******************
 * 文件IO的套路
 * 1.引入 fstream
 * 2.fstream outfile;
 * outfile.open("test.txt");
 * outfile<<"文件名：测试"<<name<<endl;
 * outfile.close();
 */
