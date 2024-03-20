#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int student_scores [] {100, 98, 90, 86, 84}; // 初始化数组
    for (auto score: student_scores) //auto 让编译器自己确定score的类型，但有时会比较耗时
        cout << score << endl;





    // 计算平均温度
    vector <double>  temps {23.1,22.9,19.3,23.2}; // 初始化vector
    double temp_average {};
    double temp_total {};

    for (auto temp: temps)
        temp_total += temp;

    if (temps.size() != 0)
        temp_average = temp_total / temps.size();
    
    /*
    fixed 和 setprecision 是 C++ 的流操作符和修饰符，而不是关键字。它们用于设置输出流中浮点数的显示格式和精度。

    fixed 是流操作符，用于设置浮点数的显示格式为固定小数点格式，即小数点后面显示固定的位数。
    setprecision 是流修饰符，用于设置浮点数的显示精度，即小数点后面显示的位数。

    这些操作符和修饰符是通过引入 <iomanip> 头文件来使用的。
    */
    // 设置精度
    cout << fixed << setprecision(3);
    cout << "平均温度：" << temp_average << endl;




    // 初始化的列表
    for (int i: {1,2,3,4,5,6,7,8,9,10})
        cout << i << endl;

    return 0;


    // 遍历string 字符串画yolov8/ultralytics/yolov8m.pt yolov8/ultralytics/yolov8n.pt
    // for (auto c: "This is a test")
    //     cout << c << "*";
    // cout << endl;
    // return 0;
}