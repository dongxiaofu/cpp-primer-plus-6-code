//
// Created by chugang on 2020/6/15.
//
#include <iostream>

int main() {
    using namespace std;
    const int SIZE = 20;
    char name[SIZE];
    char dessert[SIZE];

    cout << "What's your name:" << endl;
    // cin.getline读取一行，将换行符丢弃，增加\0
    cin.getline(name, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << name[i] << ",";
    }
    cout << endl;
    cout << "What's your favorite dessert:\n";
    cin.getline(dessert, SIZE);
    cout << "I have some delicious " << dessert << " ";
    cout << "for you," << name;
    return 0;
}

//输出与执行过程：
//What's your name:
//Jim Green
//What's your favorite dessert:
//Big Apple
//I have some delicious Big Apple for you,Jim Green