//-----------------------PROGRAM TO CELEBRATE DIWALI--------------------------
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int x=300,y=250,c=100;
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");

putpixel(x+rand()%300,y+rand()%240,c+rand()%16);
while(!kbhit())
{
setcolor(i++);
settextstyle(3,0,4);
outtextxy(100,50,"MAY THE FESTIVAL OF JOY");
outtextxy(100,85,"BECOME MORE BEAUTIFUL");
outtextxy(100,115,"FOR YOU AND YOUR FAMILY");

setcolor(i+1);
settextstyle(BOLD_FONT,0,5);
outtextxy(70,150,"HAPPY DIWALI");

setcolor(i++);
settextstyle(8,0,4);
outtextxy(250,250,"FROM");

setcolor(CYAN);
settextstyle(5,0,4);
outtextxy(150,300,"RUTUJA VAIBHAV KUPADE");
putpixel(x+rand()%300,y+rand()%240,c+rand()%16);
putpixel(x-rand()%300,y+rand()%240,c+rand()%16);
putpixel(x+rand()%300,y-rand()%240,c+rand()%16);
putpixel(x+rand()%300,y-rand()%240,c+rand()%16);

//________LAMP__________
setcolor(YELLOW);
arc(550,390,190,350,80);
ellipse(550,402,0,360,80,10);
setcolor(i+1);
ellipse(550,373,90,450,7,40);

setcolor(YELLOW);
arc(100,390,190,350,80);
ellipse(100,402,0,360,80,10);
setcolor(i+1);
ellipse(100,373,90,450,7,40);
delay(200);
}
getch();
closegraph();
}