//
// Created by chugang on 2020/6/15.
//
#include <iostream>

int main() {
    using namespace std;
    const int SIZE = 20;
    char name[SIZE];
    char dessert[SIZE];

//    name = name + 1;    // invalid

//    int *a = new int[7];
//    a = a + 1;       // valid

    cout << "What's your name:" << endl;
    cin >> name;
    cout << "What's your favorite dessert:\n";
    cin >> dessert;    // todo 为什么不会读取上一个cin留在输入队列中的换行符？
//    cin.getline(dessert, SIZE); // 与cin配合使用，会读取cin留在输入队列中的换行符.
    cout << "I have some delicious " << dessert << " ";
    cout << "for you," << name;
    return 0;
}

//输出与执行过程：
//What's your name:
//Jim Green
//What's your favorite dessert:
//I have some delicious Green for you,Jim

//把Green赋值给了dessert，这不符合我的意图。
//cin读取到空格字符后，结束读取。下一个cin发现输入设备中还有数据，立即读取了。当输入设备中无数据时，cin会等待输入。