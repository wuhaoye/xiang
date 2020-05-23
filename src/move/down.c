#include "../sheng.h"
int down()
{
    int i;
    int a;
    int j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            switch (map[i][j])
            {
            case 1:
                if (map[i + 1][j] != 8)
                {
                    if (map[i + 1][j] == 0)
                    {
                        map[i][j] = 0;
                        map[i + 1][j] = 1;
                        system("cls");
                        drawmap();
                    }
                    if (map[i + 1][j] == 2)
                    {
                        if (map[i + 2][j] == 0)
                        {
                            map[i][j] = 0;
                            map[i + 1][j] = 0;
                            map[i + 2][j] = 2;
                            map[i + 1][j] = 1;
                            system("cls");
                            drawmap();
                        }
                        if (map[i + 2][j] == 3)
                        {
                            map[i][j] = 0;
                            map[i + 1][j] = 1;
                            map[i + 2][j] = 5;
                            winw--;
                            system("cls");
                            drawmap();
                        }
                    }
                    if (map[i + 1][j] == 3)
                    {
                        map[i][j] = 0;
                        map[i + 1][j] = 4;
                        system("cls");
                        drawmap();
                    }
                    if (map[i + 1][j] == 5)
                    {
                        map[i][j] = 0;
                        map[i + 1][j] = 4;
                        map[i + 2][j] = 2;
                        winw++;
                        system("cls");
                        drawmap();
                    }
                }
                return 0;
            case 4:
                if (map[i + 1][j] == 0)
                {
                    map[i][j] = 3;
                    map[i + 1][j] = 1;
                    system("cls");
                    drawmap();
                }
                if (map[i + 1][j] == 2)
                {
                    if (map[i + 2][j] == 0)//箱子前为空格
                    {
                        map[i][j] = 0;
                        map[i + 1][j] = 0;
                        map[i + 2][j] = 2;
                        map[i + 1][j] = 1;
                        system("cls");
                        drawmap();
                    }
                    if (map[i + 2][j] == 3)//箱子前为终点
                    {
                        map[i][j] = 3;
                        map[i + 1][j] = 1;
                        map[i + 2][j] = 5;
                        winw--;
                        system("cls");
                        drawmap();
                    }
                }
                return 0;
            }
        }
    }
}