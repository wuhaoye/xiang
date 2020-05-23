#include"sheng.h"
int winw;
int init()
{
    int i;
    int j;
    for (i = 0; i < 8; i++)
    {    
        for (j = 0; j < 8; j++)
        {
            if(map[i][j]==3)
            {
                winw++;
            }
        }
    }
    return 0;
}
int winlost()
{
    if(winw==0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}