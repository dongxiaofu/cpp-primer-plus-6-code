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
    cin.get(name, SIZE).get();
    cout << "What's your favorite dessert:\n";
    cin.get(dessert, SIZE).get();
    cout << "I have some delicious " << dessert << " ";
    cout << "for you," << name;
    return 0;
}

//输出与执行过程：
//What's your name:
//Jim Green
//What's your favorite dessert:
//Big banala.
//I have some delicious Big banala. for you,Jim Green

//cin.get(variable,SIZE)与cin.getline(variable,SIZE)功能相似，差异是，不读取换行符，不丢弃，将其留在输入队列。
//cin.get()将读取输入队列中的下一个字符，包括换行符。
//cin.get(name, SIZE).get(); <===> cin.get(name, SIZE);cin.get();