#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    using namespace std;
    const int SIZE = 20;
    char name[SIZE];
    cout << "请输入文件名：\n";
    cin >> name;
    fstream infile;
    infile.open(name);
    if (!infile.is_open()) {
        cout << "打开文件失败\n";
        exit(EXIT_FAILURE);
    }
    double sum = 0.0;
    double value;

    infile >> value;
    while (infile.good()) {
        cout << "value:" << value << endl;
        sum += value;
        infile >> value;
    }

    if (infile.eof()) {
        cout << "读取结束\n";
        cout << sum << endl;
    } else if (infile.fail()) {
        cout << "读取错误\n";
    }

    infile.close();

    return 0;
}