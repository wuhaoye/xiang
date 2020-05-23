#include "sheng.h"
int main()
{
    char t[]="temp";
    system("cls");
    drawmap();
    init();
    
    do
    {
        move();
    }while (winlost()!=0);
    if(winlost()==0)
    {
        printf("You are win!!!\n");
    }
    system("pause");
    unlink(t);
    return 0;
}