//
// Created by chugang on 2020/6/15.
//
#include <iostream>
#include <vector>
#include <array>

int main() {
    using namespace std;
    double a1[4] = {1.0, 2.0, 3.0, 4.00};
    double a11[4];
//    a11 = a1;//不能使用。
    // vector 可以使用a2[0] = 5.4这种形式赋值。我怎么记得有次我这样使用不行啊。
    vector<double> a2(4);
    a2[0] = 4.5;
    a2[1] = 4.3;
    a2[2] = 5.6;
    a2[3] = 7.8;
    for (double v:a2) {
        cout << v << " ";
    }
    cout << endl;
    vector<double> a22(4);
    a22 = a2;   // 可以使用
    for (double v:a22) {
        cout << v << " ";
    }
    cout << endl;
    array<double, 3> a3 = {3.5, 4.9, 9.3};
    array<double, 3> a4;
    a4 = a3;
    cout << &a3 << endl;
    return 0;
}

/******************************************************
 * 1.vector对象存储在自由存储区或堆。这意味着，函数的返回值可以
 * 是vector类型。
 * 2.array对象存储在栈。这意味着，函数的返回值不能是array类型。
 * 3.vector、array都能使用熟悉的数组形式来访问，例如arr[0]。
 * 但是，使用不存在的索引来访问，c++也不报错，但是会访问未知值。
 * 4.要避免3中的索引越界，可使用arr.at(0)，但是更慢。
 ******************************************************/
