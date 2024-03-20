// #include <iostream>
// using namespace std;

// int main()
// {
//     int input_num {0};
//     const int target_num {50};

//     cout << "请输入一个整数，我将与" << target_num << "比较：";
//     cin >> input_num;

//     if (input_num <= target_num){
//         cout << "================条件1================" << endl;
//         cout << input_num << "小于等于" << target_num << endl;
//         cout << input_num << "比" << target_num << "小" << (target_num - input_num) << endl;
//     }else{
//         cout << "================条件2================" << endl;
//         cout << input_num << "大于" << target_num << endl;
//         cout << input_num << "比" << target_num << "大" << (input_num - target_num) << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;


int main(){

    int temp_num{0};
    const int max_num{100};
    const int min_num{10};

    cout << "Please inpur her socres in your heart,the full scores is 100!" << endl;

    cin >> temp_num;

    if (temp_num > min_num && temp_num < max_num)
    {
        cout << "ok at least ! ITS OK!!!" << endl;
    }

    if (temp_num < min_num)
    {
        cout << "emm Really? FUCK it Out!" << endl;

    }

    if (temp_num > max_num)
    {
        cout << temp_num << "?" << " " << "Are you Crazy?" << endl;
    }


    return 0;


}

