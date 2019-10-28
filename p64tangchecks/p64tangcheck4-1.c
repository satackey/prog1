#include <stdio.h>

int main(void) {
    int a, b, c, x, y, z, s;

    // 1
    if (a == 1)
        b += a;

    //
    if (a > 3)
        b = a * 3;

    //
    switch (a)
    {
    case 1:
        b = 3;
        break;
    
    case 2:
        b = 5;
        break;
    
    case 3:
        b = 7;
    }

    //
    switch (a)
    {
    case 1:
        b = 3;
        break;
    
    case 2:
        b = 5;
        break;
    }
    return 0;


    //
    if (x >= y) {
        z = x - y;
        s += z;
    } else {
        z = y - x;
        s -= z;
    }

    //
    if (a != b) {
        if (a > b) {
            c = a - b;
        }
    } else {
        c = 0;
    }

    //
    int shashu, ryoukin;
    switch (shashu)
    {
    case 1:
        ryoukin = 300;
        break;

    case 2:
        ryoukin = 500;
        break;

    case 3:
        ryoukin = 800;
        break;
    
    default:
        ryoukin = 1000;
        break;
    }

    // int nenrei
}
