//Write a program to draw a rectangle
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
rectangle(200,100,500,200);
setcolor(WHITE);
return 0;
closegraph();
}