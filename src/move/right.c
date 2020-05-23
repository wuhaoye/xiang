#include"../sheng.h"
int right()
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
                if (map[i][j + 1] != 7)
                {
                    if (map[i][j + 1] == 0)
                    {
                        map[i][j] = 0;
                        map[i][j + 1] = 1;
                        system("cls");
                        drawmap();
                    }
                    if (map[i][j + 1] == 2)
                    {
                        if (map[i][j + 2] == 0)
                        {
                            map[i][j] = 0;
                            map[i][j + 1] = 0;
                            map[i][j + 2] = 2;
                            map[i][j + 1] = 1;
                            system("cls");
                            drawmap();
                        }
                        if(map[i][j+2]==3)
                        {
                            map[i][j]=0;
                            map[i][j+1]=1;
                            map[i][j+2]=5;
                            winw--;
                            system("cls");
                            drawmap();
                        }
                    }
                    if(map[i][j+1]==3)
                    {
                        map[i][j]=0;
                        map[i][j+1]=4;
                        system("cls");
                        drawmap();
                    }
                    if(map[i][j+1]==5)
                    {
                        map[i][j]=0;
                        map[i][j+1]=4;
                        map[i][j+2]=2;
                        winw++;
                        system("cls");
                        drawmap();
                    }
                }
                return 0;
            case 4:
                if(map[i][j+1]==0)
                {
                    map[i][j]=3;
                    map[i][j+1]=1;
                    system("cls");
                    drawmap();
                }
                if (map[i][j+1] == 2)
                {
                    if (map[i][j + 2] == 0)//箱子前为空格
                    {
                        map[i][j] = 0;
                        map[i][j+ 1] = 0;
                        map[i][j + 2] = 2;
                        map[i][j + 1] = 1;
                        system("cls");
                        drawmap();
                    }
                    if (map[i][j + 2] == 3)//箱子前为终点
                    {
                        map[i][j] = 3;
                        map[i][j + 1] = 1;
                        map[i][j + 2] = 5;
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