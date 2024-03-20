// #include <iostream>
// using namespace std;

// int main()
// {
//     enum Traffic_light {red, yellow, green}; // 枚举类型
//     Traffic_light light_color {yellow};

//     switch (light_color){
//         case red:
//             cout << "红灯" << endl;
//             break;
//         case yellow:
//             cout << "黄灯" << endl;
//             break;
//         default: // 必须加上default，否则编译器会警告
//             cout << "ok" << endl;
//     }

// }




#include <iostream>
using namespace std;

int main(){

    enum box_cls {Person,HardHat,Vest,Head};

    box_cls temp_box_cls_predict{HardHat};

    switch (temp_box_cls_predict)
    {
    case Person:
        cout << "Person Detect!" << endl;
        break;
    case HardHat:
        cout << "HarHat Detect!" << endl;
        break;

    case Vest:
        cout << "Vest  Detect!" << endl;
        break;

    case Head:
        cout << "Head Detect!" << endl;
        break;
    
    default:
        cout << "Noting Detect!" << endl;
        break;
    }


    return 0;
}


//todo: 使用 vector