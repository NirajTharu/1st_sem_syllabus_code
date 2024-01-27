//Write a program to draw line in C programming.
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(90,70,60,100);
line(200,100,150,300);
setcolor(WHITE);
return 0;
closegraph();
}