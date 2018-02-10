#include<iostream.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
h:
clrscr();
cout<<"\t****Program to draw Lissajous figures.!****";
int a1,a2,fr,ph;
cout<<"\nEnter amplitudes of vibration ";
cin>>a1>>a2;
cout<<"\nSet frequency ratio (of y w.r.t x) ";
cin>>fr;
double t=1;
if(fr<1)
{t=fr;  }

cout<<"\nEnter initial phase difference (in degrees) ";
cin>>ph;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
float midx=getmaxx()/2;
float midy=getmaxy()/2;
moveto(midx,midy);
float x,y;
for(float i=0;i<=0.12566/t;i+=0.0001)
{
x=midx+a1*cos(50*i);
y=midy+a2*sin(50*fr*i+ph*acos(-1)/180);
putpixel(x,y,15);
delay(10);
}
getch();
closegraph();

char ch;
cout<<"Draw more??(y/n) ";
cin>>ch;
if(ch=='y' )
{goto h;}

}
