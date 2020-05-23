#include "sheng.h"
void move()
{
    int m;
    m = getch();
    switch (m)
    {
    case 119: //w
        
        up();
        break;
    case 97: //a
        
        left();
        break;
    case 115: //s
        
        down();
        break;
    case 100: //d
        
        right();
        break;
    case 72: //¡ü
        
        up();
        break;
    case 80: //¡ý
        
        down();
        break;
    case 75: //¡û
        
        left();
        break;
    case 77: //¡ú
        
        right();
        break;
    
    }
}