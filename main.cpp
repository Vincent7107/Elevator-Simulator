#include "Elevator Simulator.h"
#include <windows.h>
#include <iostream>

void call_which_elevator(Elevator& elevator1, Elevator& elevator2, int current, int specified) { //靠近user的電梯行動
    if (abs(elevator1.get_current() - current) < abs(elevator2.get_current() - current)) {
        elevator1.move(current, specified);
    }
    else elevator2.move(current, specified);
    return;
}

int main()
{
    Elevator elevator1(1), elevator2(2); //創建題目指定兩台電梯
    int current, specified;
    while (cin) {
        cout << "elevator1:";
        elevator1.display_floor();
        cout << "elevator2:";
        elevator2.display_floor();
        cout << "input your current floor and the desired floor: ";
        cin >> current >> specified;
        call_which_elevator(elevator1, elevator2, current, specified);
        system("cls"); //更新
    }

}