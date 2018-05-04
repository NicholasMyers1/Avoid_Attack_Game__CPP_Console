#include <math.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <fstream>
#include <GL/glew.h>
#include <gl\gl.h>
#include <gl\glext.h>
#include <gl\glu.h>
#include <gl\glut.h>
#include <assert.h>
#include <sstream>
#include <iomanip>
#include <ctime>
//#include <glm/glm.hpp>
//#include <GL/glfw.h>
//#include "SDL/SDL.h"
#include <cmath>
#include <fstream>
#include <time.h>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <vector>
//#include <wbemidl.h>
#define PI 3.1415926535897932384626433832795
using namespace std;
static int wi=500,le=500,winx=100,winy=100;
static bool start=false;
static int lives=11;
static int counta=-1;
static int countb=0;
//dist:
static double move;
static double movea;
static double moveb;
//time:
static int seconds;
static int minutes;
static int hours; 
static int times=0;
//controls:
static int controlforcounta=0;
static int controla=0;
///////////////////////////////////////////////////////////////////////////////
//http://www.opengl-tutorial.org/
//C:\Users\Nick\Desktop\files on desktop\Coding programs\Dev-Cpp\include
bool* keyStates = new bool[256];
double a,b,c;
double x[99],y[99],z[99];
void mousemove(int x, int y){  //using bool start to toggle true; if not true in begin mode;
if (start==true){
if (x>le/2&&y<wi/2){a=a-.025;b=b-.025;}//origs: --.05;
if (x<le/2&&y<wi/2){a=a+.025;b=b-.025;}//+-.05;
if (x>le/2&&y>wi/2){a=a-.025;b=b+.025;}//-+.05;
if (x<le/2&&y>wi/2){a=a+.025;b=b+.025;}//++.05;
;}
//cout<<"x: "<<x<<" y: "<<y<<"\n";
;}
void keyPressed (unsigned char key, int x, int y){  
switch (key){
case 'e'://toggle pause:
if (start==true){
start=false;break;}
if (start==false){
start=true;break;}
;}//end switch:
glutKeyboardFunc(keyPressed);
;}

//end struct;
void ball(){glTranslatef(a,b,c);
typedef struct tree {
  float root;
  float trunk;
  float branches;
  float fruit;
  float leaves;
;};
tree root;
tree fall;fall.root=1;


glColor4f(.25,0,1,.5);glBegin(GL_QUADS);glVertex3f(.1,.1,0);glVertex3f(-.1,.1,0);glVertex3f(-.1,-.1,0);glVertex3f(.1,-.1,0);glEnd();
/*paramaters:*/if (a>=3.4){a=3.4;}if (a<=-3.4){a=-3.4;}if (b>=3.4){b=3.4;}if (b<=-3.4){b=-3.4;}
;}

void goal(){glColor4f(1,.5,0,.25);glTranslatef(x[1],y[1],z[1]);
glBegin(GL_QUADS);glVertex3f(.1,.5,0);glVertex3f(-.1,.5,0);glVertex3f(-.1,-.5,0);glVertex3f(.1,-.5,0);glVertex3f(.5,.1,0);glVertex3f(-.5,.1,0);glVertex3f(-.5,-.1,0);glVertex3f(.5,-.1,0);glEnd();
movea=((x[3]-x[1])*(x[3]-x[1]))+((y[3]-y[1])*(y[3]-y[1]));//acting weird:
if (movea<1&&movea>.01&&start==true)
{times=times+1;}
if (times>1){times=times+0;}
if (counta==5){countb=1;}if (counta==10){countb=2;}if (counta>=14){countb=3;}if (counta<=1){countb=0;}
{;cout<<"countb: "<<countb<<" times: "<<times<<" ";}
/*int for controlforcounta;*/if (times>=751){times=0;counta=counta+0;controlforcounta=1;lives=lives-1;}
//end time:
if (a>=x[1]-.1&&a<=x[1]+.1&&b>=y[1]-.1&&b<=y[1]+.1/*||times>=750*/||controlforcounta==1){
//for x:
x[1] = rand() % 7+-3;double f1;f1 = rand() % 10+1;if (f1==1){f1=.1;}if (f1==2){f1=.2;}if (f1==3){f1=.3;}if (f1==4){f1=.4;}if (f1==5){f1=.5;}if (f1==6){f1=.6;}if (f1==7){f1=.7;}if (f1==8){f1=.8;}if (f1==9){f1=.9;}if (f1==10){f1=.0;}double f2;f2 = rand() % 2+1;if (f2==1){x[1]=x[1]-f1;}if (f2==2){x[1]=x[1]+f1;}
y[1] = rand() % 7+-3;double f3;f3 = rand() % 10+1;if (f3==1){f3=.1;}if (f3==2){f3=.2;}if (f3==3){f3=.3;}if (f3==4){f3=.4;}if (f3==5){f3=.5;}if (f3==6){f3=.6;}if (f3==7){f3=.7;}if (f3==8){f3=.8;}if (f3==9){f3=.9;}if (f3==10){f3=.0;}double f4;f4 = rand() % 2+1;if (f4==1){y[1]=y[1]-f3;}if (f4==2){y[1]=y[1]+f3;}
//////////////////parameters:
if (x[1]>=3){x[1]=3;}if (x[1]<=-3){x[1]=-3;}if (y[1]>=3){y[1]=3;}if (y[1]<=-3){y[1]=-3;}
//
if (controlforcounta!=1){counta=counta+1;controlforcounta=0;}
if (controlforcounta==1){counta=counta+0;controlforcounta=0;}
//cout<<"f1: "<<f1<<" f3: "<<f3<<" x[1]: "<<x[1]<<" y[1]: "<<y[1]<<"\n";    
;} //end that
//{;cout<<"A: "<<a<<" B: "<<b<<"\n"<<"x[1]: "<<x[1]<<" y[1]: "<<y[1];system("CLS");}
;}//end void

void guide(){glColor4f(0,1,0,.5);
glBegin(GL_QUADS);glVertex3f(10,.01,0);glVertex3f(10,-.01,0);glVertex3f(-10,-.01,0);glVertex3f(-10,.01,0);glEnd();glBegin(GL_QUADS);glVertex3f(.01,10,0);glVertex3f(.01,-10,0);glVertex3f(-.01,-10,0);glVertex3f(-.01,10,0);glEnd();
;}

void enemy(){glTranslatef(x[3],y[3],0);//move towards a,b,c;//starts opposite of x[1],y[2];//speed 0.0005f has to get to other obj: 0.25
moveb=((x[3]-x[4])*(x[3]-x[4]))+((y[3]-y[4])*(y[3]-y[4]));
if (start==false){
/*left*/if (a<=x[3]){glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(0,.1,0);glColor4f(1,0,.2,.9);glVertex3f(-.175,0,0);glColor4f(1,1,1,.5);glVertex3f(0,-.1,0);glEnd();}
/*right*/if (a>=x[3]){glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(0,.1,0);glColor4f(1,0,.2,.9);glVertex3f(.175,0,0);glColor4f(1,1,1,.5);glVertex3f(0,-.1,0);glEnd();}
/*up*/if (b<=y[3]){glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(.1,0,0);glColor4f(1,0,.2,.9);glVertex3f(0,-.175,0);glColor4f(1,1,1,.5);glVertex3f(-.1,0,0);glEnd();}
/*down*/if (b>=y[3]){glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(.1,0,0);glColor4f(1,0,.2,.9);glVertex3f(0,.175,0);glColor4f(1,1,1,.5);glVertex3f(-.1,0,0);glEnd();}
;}//end false:
if (start==true&&controla!=2){
/*left*/if (a<=x[3]){x[3]-=0.001f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(0,.1,0);glColor4f(1,0,.2,.9);glVertex3f(-.175,0,0);glColor4f(1,1,1,.5);glVertex3f(0,-.1,0);glEnd();;}
/*right*/if (a>=x[3]){x[3]+=0.001f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(0,.1,0);glColor4f(1,0,.2,.9);glVertex3f(.175,0,0);glColor4f(1,1,1,.5);glVertex3f(0,-.1,0);glEnd();;}
/*up*/if (b<=y[3]){y[3]-=0.001f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(.1,0,0);glColor4f(1,0,.2,.9);glVertex3f(0,-.175,0);glColor4f(1,1,1,.5);glVertex3f(-.1,0,0);glEnd();;}
/*down*/if (b>=y[3]){y[3]+=0.001f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(.1,0,0);glColor4f(1,0,.2,.9);glVertex3f(0,.175,0);glColor4f(1,1,1,.5);glVertex3f(-.1,0,0);glEnd();;}
;}//end enemy movements:
move=((x[3]-a)*(x[3]-a)+(y[3]-b)*(y[3]-b));//acting weird:
/*lives:::*/if (move<=0.05){lives=lives-1;a=0;b=0;x[3]=-x[1];y[3]=-y[1];}//cout<<"dist: "<<move<<" lives: "<<lives<<"\n";//<<" time:"<<time1
if (moveb<=4&&start==true&&controla==2){
if (x[4]<=x[3]){x[3]-=0.005f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(0,.1,0);glColor4f(1,0,.2,.9);glVertex3f(-.175,0,0);glColor4f(1,1,1,.5);glVertex3f(0,-.1,0);glEnd();;}
if (x[4]>=x[3]){x[3]+=0.005f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(0,.1,0);glColor4f(1,0,.2,.9);glVertex3f(.175,0,0);glColor4f(1,1,1,.5);glVertex3f(0,-.1,0);glEnd();;}
if (y[4]<=y[3]){y[3]-=0.005f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(.1,0,0);glColor4f(1,0,.2,.9);glVertex3f(0,-.175,0);glColor4f(1,1,1,.5);glVertex3f(-.1,0,0);glEnd();;}
if (y[4]>=y[3]){y[3]+=0.005f;glBegin(GL_TRIANGLES);glColor4f(1,1,1,.5);glVertex3f(.1,0,0);glColor4f(1,0,.2,.9);glVertex3f(0,.175,0);glColor4f(1,1,1,.5);glVertex3f(-.1,0,0);glEnd();;}
;}
;}//end void;

void addonbonus(){//points++;
if (lives==0){exit(0);}
if (counta==15){counta=0;lives=lives+1;}
cout<<"count: "<<counta<<" lives: "<<lives<<"\n";
if (countb==3){controla=1;}
//cout<<"dist: "<<move<<" speedx[3],y[3]: "<<x[3]<<", "<<x[3]<<"\n";
//using x[4],y[4];translate;

if (controla==1){//countb=0;
x[4]= rand() % 7+-3;double a1;a1 = rand() % 10+1;if (a1==1){a1=.1;}if (a1==2){a1=.2;}if (a1==3){a1=.3;}if (a1==4){a1=.4;}if (a1==5){a1=.5;}if (a1==6){a1=.6;}if (a1==7){a1=.7;}if (a1==8){a1=.8;}if (a1==9){a1=.9;}if (a1==10){a1=.0;}double a2;a2= rand() % 2+1;if (a2==1){x[4]=x[4]-a1;}if (a2==2){x[4]=x[4]+a1;}
y[4]= rand() % 7+-3;double a3;a3 = rand() % 10+1;if (a3==1){a3=.1;}if (a3==2){a3=.2;}if (a3==3){a3=.3;}if (a3==4){a3=.4;}if (a3==5){a3=.5;}if (a3==6){a3=.6;}if (a3==7){a3=.7;}if (a3==8){a3=.8;}if (a3==9){a3=.9;}if (a3==10){a3=.0;}double a4;a4= rand() % 2+1;if (a4==1){x[4]=x[4]-a3;}if (a4==2){x[4]=x[4]+a3;}
/*parameters:*/if (x[4]>=3){x[4]=3;}if (x[4]<=-3){x[4]=-3;}if (y[4]>=3){y[4]=3;}if (y[4]<=-3){y[4]=-3;}
//glTranslatef(x[4],y[4],0);glBegin(GL_POLYGON);glColor4f(1,1,1,1);glVertex2f(0,.05);glVertex2f(.025,.075);glVertex2f(.05,.05);glVertex2f(.075,.025);glVertex2f(.05,0);glVertex2f(.075,-.025);glVertex2f(.05,-.05);glVertex2f(.025,-.075);glVertex2f(0,-.05);glVertex2f(-.025,-.075);glVertex2f(-.05,-.05);glVertex2f(-.075,-.025);glVertex2f(-.05,0);glVertex2f(-.075,.025);glVertex2f(-.05,.05);glVertex2f(-.025,.075);glEnd();//make this random each time it displays and make it show up only under circumstances:
controla=2;
;}//end start;
if (controla==2&&countb==0){
glTranslatef(x[4],y[4],0);glBegin(GL_POLYGON);glColor4f(1,1,1,1);glVertex2f(0,.05);glVertex2f(.025,.075);glVertex2f(.05,.05);glVertex2f(.075,.025);glVertex2f(.05,0);glVertex2f(.075,-.025);glVertex2f(.05,-.05);glVertex2f(.025,-.075);glVertex2f(0,-.05);glVertex2f(-.025,-.075);glVertex2f(-.05,-.05);glVertex2f(-.075,-.025);glVertex2f(-.05,0);glVertex2f(-.075,.025);glVertex2f(-.05,.05);glVertex2f(-.025,.075);glEnd();//make this random each time it displays and make it show up only under circumstances:
/*cases to take this away:*/
if(seconds==30||seconds==0||a>=x[4]-.1&&a<=x[4]+.1&&b>=y[4]-.1&&b<=y[4]+.1)
{controla=0;countb=0;}
if(x[3]>=x[4]-.1&&x[3]<=x[4]+.1&&y[3]>=y[4]-.1&&y[3]<=y[4]+.1)
{controla=0;countb=0;lives=lives-1;}
;}/////////////////////////////////////////////////////////////////////////////////////////////////////////


;}//end void;

void display (void) {
time_t timea;
struct tm * timeinfo;
time ( &timea );
timeinfo = localtime ( &timea );
seconds=timeinfo->tm_sec;//-seconds;
minutes=timeinfo->tm_min;
hours=timeinfo->tm_hour;
    glClearColor (0.0,0.0,0.0,1.0);
    glClear (GL_COLOR_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 
    glLoadIdentity();  
    gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glPushMatrix(); guide(); glPopMatrix();
    glPushMatrix(); goal(); glPopMatrix();
    glPushMatrix(); ball(); glPopMatrix();
    glPushMatrix(); enemy(); glPopMatrix();
    glPushMatrix(); addonbonus(); glPopMatrix();
    glutSwapBuffers();
;}
void reshape (int w,int h) {
    glViewport (0, 0, (GLsizei)w, (GLsizei)h);le=w;wi=h;
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (70, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
    glMatrixMode (GL_MODELVIEW);
}
int main (int argc, char **argv) {//wi=500;le=500;
    srand(time(0));
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA); //set the alpha buffer
    glutInitWindowSize (wi,le);
    glutInitWindowPosition (winx,winy);
    glutCreateWindow ("...");
    glutDisplayFunc (display);
    glutIdleFunc (display);
    glutReshapeFunc (reshape);
    glutKeyboardFunc(keyPressed);
    glutPassiveMotionFunc(mousemove);
    //glutPassiveMotionFunc
    glutMainLoop ();
    return 0;
}


