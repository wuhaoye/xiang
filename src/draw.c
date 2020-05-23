#include "sheng.h"
int map[8][8] = {
    {91, 8, 8, 8, 8, 8, 8, 92},
    {7, 0, 0, 0, 0, 0, 0, 7},
    {7, 0, 0, 0, 0, 0, 0, 7},
    {7, 0, 2, 0, 3, 0, 0, 7},
    {7, 0, 3, 0, 2, 0, 0, 7},
    {7, 0, 0, 0, 3, 2, 0, 7},
    {7, 0, 0, 1, 0, 0, 0, 7},
    {93, 8, 8, 8, 8, 8, 8, 94},
};
void drawmap()
{
    int i;
    int j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            switch (map[i][j])
            {
            case 0:
                printf("  ");
                break;
            case 1:
                printf("��");
                break;
            case 2:
                printf("��");
                break;
            case 3:
                printf("��");
                break;
            case 4:
                printf("��");
                break;
            case 5:
                printf("��");
                break;
            case 8:
                printf("��");
                break;
            case 7:
                printf("��");
                break;
            case 91:
                printf("��");
                break;
            case 92:
                printf("��");
                break;
            case 93:
                printf("��");
                break;
            case 94:
                printf("��");
                break;
            }
        }
        printf("\n");
    }
}