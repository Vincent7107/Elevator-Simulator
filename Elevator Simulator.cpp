
#include <windows.h>
#include <iostream>
#include "Elevator Simulator.h"
using namespace std;

void gotoxy(int x, int y) {
    COORD pos = { x,y };
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h, pos);
}

Elevator::Elevator(int id){
    current_floor = 1;
    this->id = id;
}

int Elevator::get_id() {
    return id;
}

int Elevator::get_current() {
    return current_floor;
}

void Elevator::set_current(int x) {
    current_floor = x;
}

void Elevator::display_floor() {
    cout << get_current() << endl;
}

void Elevator::move(int current, int floor) {
    //電梯至user層
    while (get_current() != current) { //電梯每過一秒下降或上升一層
        if (get_current() > current) set_current(get_current()-1);
        else set_current(get_current()+1);
        gotoxy(10, get_id()-1);
        display_floor();
        Sleep(1000);
    }
    //user層至指定層
    while (get_current() != floor) {
        if (get_current() > floor) set_current(get_current()-1);
        else set_current(get_current()+1);
        gotoxy(10, get_id()-1);
        display_floor();
        Sleep(1000);
    }
}


