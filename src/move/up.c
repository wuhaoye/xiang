#include "../sheng.h"
int up()
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
                if (map[i - 1][j] != 8)//��Ϊǽ
                {
                    if (map[i - 1][j] == 0)//Ϊ�ո�
                    {
                        map[i][j] = 0;
                        map[i - 1][j] = 1;
                        system("cls");
                        drawmap();
                    }
                    if (map[i - 1][j] == 2)//Ϊ����
                    {
                        if (map[i - 2][j] == 0)//����ǰΪ�ո�
                        {
                            map[i][j] = 0;
                            map[i - 1][j] = 0;
                            map[i - 2][j] = 2;
                            map[i - 1][j] = 1;
                            system("cls");
                            drawmap();
                        }
                        if (map[i - 2][j] == 3)//����ǰΪ�յ�
                        {
                            map[i][j] = 0;
                            map[i - 1][j] = 1;
                            map[i - 2][j] = 5;
                            winw--;
                            system("cls");
                            drawmap();
                        }
                    }
                    if (map[i - 1][j] == 3)//Ϊ�յ�
                    {
                        map[i][j] = 0;
                        map[i - 1][j] = 4;
                        system("cls");
                        drawmap();
                    }
                    if (map[i - 1][j] == 5)//Ϊ�����յ�
                    {
                        map[i][j] = 0;
                        map[i - 1][j] = 4;
                        map[i - 2][j] = 2;
                        winw++;
                        system("cls");
                        drawmap();
                    }
                }
                return 0;
            case 4://Ϊ�յ�
                if (map[i - 1][j] == 0)//Ϊ�ո�
                {
                    map[i][j] = 3;
                    map[i - 1][j] = 1;
                    system("cls");
                    drawmap();
                }
                if (map[i - 1][j] == 2)
                {
                    if (map[i - 2][j] == 0)//����ǰΪ�ո�
                    {
                        map[i][j] = 0;
                        map[i - 1][j] = 0;
                        map[i - 2][j] = 2;
                        map[i - 1][j] = 1;
                        system("cls");
                        drawmap();
                    }
                    if (map[i - 2][j] == 3)//����ǰΪ�յ�
                    {
                        map[i][j] = 3;
                        map[i - 1][j] = 1;
                        map[i - 2][j] = 5;
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