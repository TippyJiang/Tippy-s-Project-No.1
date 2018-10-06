#include <iostream>
#include <cstdlib>
#include "main.h"

using namespace std;

//Wall:0, air:1, food:2, head:3, body:4, tail:5
const int WIDTH = 30;
const int HEIGHT = 30;
int map[WIDTH][HEIGHT];

int main() {
    draw();
    return 0;
}

void draw() {
    system("clr");
    for (int j = 0; j < HEIGHT; ++j) {
        for (int i = 0; i < WIDTH; ++i) {
            switch (map[i][j]) {
                case 0: {
                    cout << '#';
                    break;
                }
                case 1: {
                    cout << ' ';
                    break;
                }
                case 2: {

                }
            }
        }
        cout << endl;
    }
}