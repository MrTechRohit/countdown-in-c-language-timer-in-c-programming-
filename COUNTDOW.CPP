// _________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL ___________
//________________ C++ PROGRAMMING TO CREATE COUNTDOWN ______________

#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm,i;
char a[5];
initgraph(&gd,&gm,"c:\\tc\\bgi");

setbkcolor(8);
settextjustify(1,1);
settextstyle(10,0,9);
setcolor(14);

for(i=10;i>=0;i--)
{
sprintf(a,"%d",i);
outtextxy(getmaxx()/2,getmaxy()/2,a);
delay(1000);

if(i==0)
break;
cleardevice();
}
getch();
closegraph();
return 0;
}

//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________










