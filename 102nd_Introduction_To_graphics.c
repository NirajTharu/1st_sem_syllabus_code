//Write a program to draw a circle
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
circle(300,200,150);
setcolor(WHITE);
retunr 0;
closegraph();
}