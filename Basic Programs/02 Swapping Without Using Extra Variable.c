#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    int y=20;
    printf("x = %d y = %d\n",x,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("x = %d y = %d",x,y);
    getch();
    return 0;
}
