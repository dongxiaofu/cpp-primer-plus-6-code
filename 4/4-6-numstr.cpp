//
// Created by chugang on 2020/6/15.
//
#include <iostream>

int main() {
    using namespace std;
    int year;
    cout << "What is your house build?\n";
    cin >> year;
    char address[200];
    cout << "What is its street address?\n";
//    cin >> address;   // 没有问题
    cin.getline(address, 200);  // 会读取cin>>year留在输入队列中的换行符。
    cout << "Your house is build " << year << endl;
    cout << "Address is " << address << endl;
    return 0;
}
