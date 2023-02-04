#include <iostream>
#include <Windows.h>
int i = 0;

void showTime()
{
    while (1)
    {
        printf("%d ms\n", i);
        Sleep(100);
        i+=100;
    }
}
int main()
{
    printf("Please set the affinity to one core.\n");
    system("pause");
    system("color 0a");
    CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(showTime), NULL, NULL, NULL);
    Sleep(30000);
    printf("Will do something heavy compute\n");
    system("color 0c");
    while (1)
        ;
}
