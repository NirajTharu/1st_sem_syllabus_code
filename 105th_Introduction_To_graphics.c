//Write a program to draw a triangle.
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(200,100,10,20);
line(10,20,50,60);
line(50,60,200,100);
setcolor(WHITE);
return 0;
closegraph();
}