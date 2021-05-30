#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
COORD coord={0,0};
int Batu1()
{
    gotoxy(25, 6);printf("    _______\n");
    gotoxy(25, 7);printf("---'   ____)\n");
    gotoxy(25, 8);printf("      (_____)\n");
    gotoxy(25, 9);printf("      (_____)\n");
    gotoxy(25, 10);printf("      (____)\n");
    gotoxy(25, 11);printf("---.__(___)\n");
}
int Batu2()
{
    gotoxy(45, 6);printf(" _______\n");
    gotoxy(45, 7);printf("(____   '---\n");
    gotoxy(45, 8);printf("(_____)\n");
    gotoxy(45, 9);printf("(_____)\n");
    gotoxy(45, 10);printf("(____)\n");
    gotoxy(45, 11);printf("(___)__.---\n");
}

int Gunting1()
{
    gotoxy(25, 6);printf("    _______\n");
    gotoxy(25, 7);printf("---'   ____)____\n");
    gotoxy(25, 8);printf("          ______)\n");
    gotoxy(25, 9);printf("       __________)\n");
    gotoxy(25, 10);printf("      (____)\n");
    gotoxy(25, 11);printf("---.__(___)\n");
}
int Gunting2()
{
    gotoxy(45, 6);printf("      _______\n");
    gotoxy(45, 7);printf(" ____(____   '---\n");
    gotoxy(45, 8);printf("(______\n");
    gotoxy(45, 9);printf("(__________\n");
    gotoxy(45, 10);printf("    (____)\n");
    gotoxy(45, 11);printf("      (___)__.---\n");
}

int Kertas1()
{
    gotoxy(25, 6);printf("    _______\n");
    gotoxy(25, 7);printf("---'   ____)____\n");
    gotoxy(25, 8);printf("          ______)\n");
    gotoxy(25, 9);printf("          _______)\n");
    gotoxy(25, 10);printf("         _______)\n");
    gotoxy(25, 11);printf("---.__________)\n");
}
int Kertas2()
{
    gotoxy(45, 6);printf("       _______\n");
    gotoxy(45, 7);printf("  ____(____   '---\n");
    gotoxy(45, 8);printf(" (______\n");
    gotoxy(45, 9);printf("(_______\n");
    gotoxy(45, 10);printf(" (_______\n");
    gotoxy(45, 11);printf("  (__________.---\n");
}

void warna(unsigned short color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
void delay(unsigned int yeee)
{
    clock_t yea = yeee + clock();
    while (yea>clock());
}
void gotoxy (int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    delay(100);
    int pilih, player;
    int n=1000;
    int x;
    int a;
    int cek_rand;
    warna(9);
    printf("\t _______      __       __      ___________      _____________\n");
    printf("\t|       |    |  |     |  |    |           |    |             |\n");
    printf("\t|   ____|    |  |     |  |    |___     ___|    |____     ____|\n");
    printf("\t|   |        |  |     |  |        |   |             |   |\n");
    printf("\t|   |        |  |     |  |        |   |             |   |\n");
    printf("\t|   |___     |  |     |  |        |   |             |   |\n");
    printf("\t|___    |    |  |     |  |        |   |             |   |\n");
    printf("\t    |   |    |  |     |  |        |   |             |   |\n");
    printf("\t    |   |    |  |     |  |        |   |             |   |\n");
    printf("\t ___|   |    |  |_____|  |     ___|   |___          |   |\n");
    printf("\t|       |    |           |    |           |         |   |\n");
    printf("\t|_______|    |___________|    |___________|         |___|\n");

    gotoxy(35,13);
    warna(15);
    printf("mulai (1)\n");
    gotoxy(34,15);
    warna(15);
    printf("keluar (2)\n");
    gotoxy(38,18);
    warna(10);
    scanf("%d", &a);
    if(a==1)
    {
        goto proses;
    }
    if(a==2)
    {
        gotoxy(37,20);
        warna(12);
        printf("END");
        warna(15);
        return 0;
    }
    else
    {
        gotoxy(35,20);
        warna(12);
        printf("NO!");
        warna(15);
        return 0;
    }
    proses:
    while(1)
    {
        warna(15);
        delay(100);
        system("cls");
        gotoxy(35,0);
        printf("pilih :\n");
        gotoxy(35,1);
        printf("Batu(1)\n");
        gotoxy(35,2);
        printf("Gunting(2)\n");
        gotoxy(35,3);
        printf("Kertas(3)\n");
        gotoxy(35,4);
        printf("ket: musuh warna merah\n");
        if (kbhit())
        {
        player=getch();
        if (player==49)
        {
            warna(10);
            Batu1(); goto main;
        }
        else if (player==50)
        {
            warna(10);
            Gunting1(); goto main;
        }
        else if (player==51)
        {
            warna(10);
            Kertas1(); goto main;
        }
        else
        {
            printf("Gak ADA");
        }
     /*   x=rand();
        cek_rand = x%n;
        */

        }
        cek_rand+=2;
    }
    main :
    if (cek_rand%3==1)
    {
        warna(12);
        Batu2();
    }
    else if (cek_rand%3==2)
    {
        warna(12);
        Gunting2();
    }
    else
    {
        warna(12);
        Kertas2();
    }
    warna(15);
    gotoxy(35, 16);
    printf("Ulang ? Y=1/N=2\n");
    gotoxy(35, 17);
    scanf("%d", &pilih);
    if (pilih==1)
    {
        goto proses;
    }
    else if (pilih==2)
    {
        warna(12);
        gotoxy(35, 19);
        printf("END");
        warna(15);
        return 0;
    }
    else
    {
        warna(12);
        gotoxy(35, 19);
        printf("Gak ADA");
    }
    warna(15);
    return 0;
}
