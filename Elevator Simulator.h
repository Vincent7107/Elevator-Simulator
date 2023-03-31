#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class Elevator {
private:
    int current_floor;
    int id;
public:
    Elevator(int id);
    int get_id();
    int get_current();
    void set_current(int x);
    void display_floor();
    void move(int current, int floor);
};
