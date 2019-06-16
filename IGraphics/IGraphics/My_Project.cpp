# include "iGraphics.h"
#include<math.h>
#include<time.h>

double o,x=500,y=360+250,sx,sy,q;
double xm=500,ym=360+220,mx,my,qm;
double xh=500,yh=360+200,hx,hy,qh,H,M,S;
int i;

double s1,s2,m1,m2,h1,h2;
double min,sec,ho,p,p1,p2,pm,pm1,pm2,ph,ph1,ph2;

double a,b,c,d,e,f,g;
int w=2,point;

int multi(int z){
	
	if(z==0){
		a=1;
		b=1;
		c=0;
		d=1;
		f=1;
		e=1;
		g=1;
	}
	else if(z==1){
		a=0;
		b=0;
		c=0;
		d=0;
		f=1;
		e=1;
		g=0;
	}
	else if(z==2){
		a=1;
		b=1;
		c=1;
		d=0;
		f=0;
		e=1;
		g=1;
	}
	else if(z==3){
		a=1;
		b=0;
		c=1;
		d=0;
		f=1;
		e=1;
		g=1;
	}
	else if(z==4){
		a=0;
		b=0;
		c=1;
		d=1;
		f=1;
		e=1;
		g=0;
	}
	else if(z==5){
		a=1;
		b=0;
		c=1;
		d=1;
		f=1;
		e=0;
		g=1;
	}
	else if(z==6){
		a=1;
		b=1;
		c=1;
		d=1;
		f=1;
		e=0;
		g=1;
	}
	else if(z==7){
		a=0;
		b=0;
		c=0;
		d=0;
		f=1;
		e=1;
		g=1;
	}
	else if(z==8){
		a=1;
		b=1;
		c=1;
		d=1;
		f=1;
		e=1;
		g=1;
	}
	else if(z==9){
		a=1;
		b=0;
		c=1;
		d=1;
		f=1;
		e=1;
		g=1;
	}
	return a,b,c,d,e,f,g;
}

void iDraw()
{	
	iClear();

	if(w==2){
		

					
		multi(s1);
		iSetColor(51,51,255);
		iFilledRectangle(460*a,500*a,50*a,10*a);
		iSetColor(51,51,255);
		iFilledRectangle(450*b,510*b,10*b,50*b);
		iSetColor(51,51,255);
		iFilledRectangle(460*c,560*c,50*c,10*c);
		iSetColor(51,51,255);
		iFilledRectangle(450*d,570*d,10*d,50*d);
		iSetColor(51,51,255);
		iFilledRectangle(510*f,510*f,10*f,50*f);
		iSetColor(51,51,255);
		iFilledRectangle(510*e,570*e,10*e,50*e);
		iSetColor(51,51,255);
		iFilledRectangle(460*g,620*g,50*g,10*g);
			


			
		multi(s2);
		iSetColor(51,51,255);
		iFilledRectangle(535*a,500*a,50*a,10*a);
		iSetColor(51,51,255);
		iFilledRectangle(525*b,510*b,10*b,50*b);
		iSetColor(51,51,255);
		iFilledRectangle(535*c,560*c,50*c,10*c);
		iSetColor(51,51,255);
		iFilledRectangle(525*d,570*d,10*d,50*d);
		iSetColor(51,51,255);
		iFilledRectangle(585*f,510*f,10*f,50*f);
		iSetColor(51,51,255);
		iFilledRectangle(585*e,570*e,10*e,50*e);
		iSetColor(51,51,255);
		iFilledRectangle(535*g,620*g,50*g,10*g);
			

		
		multi(m1);
		iSetColor(51,51,255);
		iFilledRectangle(280*a,500*a,50*a,10*a);
		iSetColor(51,51,255);
		iFilledRectangle(270*b,510*b,10*b,50*b);
		iSetColor(51,51,255);
		iFilledRectangle(280*c,560*c,50*c,10*c);
		iSetColor(51,51,255);
		iFilledRectangle(270*d,570*d,10*d,50*d);
		iSetColor(51,51,255);
		iFilledRectangle(330*f,510*f,10*f,50*f);
		iSetColor(51,51,255);
		iFilledRectangle(330*e,570*e,10*e,50*e);
		iSetColor(51,51,255);
		iFilledRectangle(280*g,620*g,50*g,10*g);
			
		multi(m2);
		iFilledRectangle(355*a,500*a,50*a,10*a);
		iSetColor(51,51,255);
		iFilledRectangle(345*b,510*b,10*b,50*b);
		iSetColor(51,51,255);
		iFilledRectangle(355*c,560*c,50*c,10*c);
		iSetColor(51,51,255);
		iFilledRectangle(345*d,570*d,10*d,50*d);
		iSetColor(51,51,255);
		iFilledRectangle(405*f,510*f,10*f,50*f);
		iSetColor(51,51,255);
		iFilledRectangle(405*e,570*e,10*e,50*e);
		iSetColor(51,51,255);
		iFilledRectangle(355*g,620*g,50*g,10*g);

		
		multi(h1);
		iSetColor(51,51,255);
		iFilledRectangle(75*a,500*a,50*a,10*a);
		iSetColor(51,51,255);
		iFilledRectangle(65*b,510*b,10*b,50*b);
		iSetColor(51,51,255);
		iFilledRectangle(75*c,560*c,50*c,10*c);
		iSetColor(51,51,255);
		iFilledRectangle(65*d,570*d,10*d,50*d);
		iSetColor(51,51,255);
		iFilledRectangle(125*f,510*f,10*f,50*f);
		iSetColor(51,51,255);
		iFilledRectangle(125*e,570*e,10*e,50*e);
		iSetColor(51,51,255);
		iFilledRectangle(75*g,620*g,50*g,10*g);
		
		multi(h2);
		iSetColor(51,51,255);
		iFilledRectangle(165*a,500*a,50*a,10*a);
		iSetColor(51,51,255);
		iFilledRectangle(155*b,510*b,10*b,50*b);
		iSetColor(51,51,255);
		iFilledRectangle(165*c,560*c,50*c,10*c);
		iSetColor(51,51,255);
		iFilledRectangle(155*d,570*d,10*d,50*d);
		iSetColor(51,51,255);
		iFilledRectangle(215*f,510*f,10*f,50*f);
		iSetColor(51,51,255);
		iFilledRectangle(215*e,570*e,10*e,50*e);
		iSetColor(51,51,255);
		iFilledRectangle(165*g,620*g,50*g,10*g);

	

			if(ho>=12){
				iText(610,510,"PM");
			}
			else{
				iText(610,510,"AM");
			}
			iText(250,445,"Press 'P' to see the Analog Clock");
			iText(250,430,"Press 'Q' to Exit");
			iSetColor(0,51,255);
			iCircle(240,595,6);
			iCircle(240,535,6);
			iSetColor(0,51,255);
			iCircle(430,595,6);
			iCircle(430,535,6);
			if(point==1){
				iSetColor(0,51,255);
				iFilledCircle(240,595,5);
				iFilledCircle(240,535,5);
				iSetColor(0,51,255);
				iFilledCircle(430,595,5);
				iFilledCircle(430,535,5);
			}
			else{
				
			}
		}
	if(w==1){
		iClear();
			iSetColor(10,10,10);
		iFilledCircle(500,360,30);//Large
		iSetColor(51,51,0);
		   iFilledCircle(500,360,306);
		   iSetColor(0,51,0);
		   iFilledCircle(500,360,305);//out
		iSetColor(51,51,0);
		iCircle(500,360,280);//nextout
		iSetColor(255,0,0);
		for (i=1,o=(6/57.29);i<=60;i++,o+=(6/57.29))
		{   if(i%5!=0)
				iFilledCircle(500+295*cos(o),360+295*sin(o),4);
			if (i%5==0)
				iFilledCircle(255,0,0);
		}


		iSetColor(255,0,0);
		iLine(500,360,x,y);///second
		iSetColor(0,120,120);
		iLine(500,360,xm,ym);///minit
		iSetColor(20,200,40);
		iLine(500,360,xh,yh);//HR
		iSetColor(76,153,0);
		iText(500+244,360-150,"IV");//4(500+259,360-150)point
		iText(500+145,360-256,"V");//	iFilledCircle(500+150,360-260,5);//60
		iText(495,60,"VI");//iFilledCircle(500,65,5);//lower
		iText(500-155,360-257,"VII");//iFilledCircle(500-150,360-260,5);//120
		iText(200,360,"IX");//iFilledCircle(205,360,5);//left
		iText(500-255,360+145,"X");//iFilledCircle(500-260,360+150,5);//150
		iText(500+240,360+150,"II");//iFilledCircle(500+259,360+150,5);//330
		iText(500+140,360+252,"I");//	iFilledCircle(500+150,360+260,5);//300
		iText(490,650,"XII");//	iFilledCircle(500,655,5);//upper
		iText(777,360,"III");//	iFilledCircle(795,360,5);//right
		iText(500-150,360+250,"XI");//	iFilledCircle(500-150,360+260,5);//240
		iText(500-260,360-150,"VIII");//	iFilledCircle(500-260,360-150,5);//210
		iSetColor(20,50,210);
		iFilledCircle(500,360,20);//small
		iText(360,33,"Press 'R' to see the Digital Clock");

	}
}


void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("%d %d ",mx,my);	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		printf("%d %d ",mx,my);	
	}
}


void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		exit(0);
	}
	if(key=='p')
	{
		w=1;
	}
	if(key=='r')
	{
		w=2;
	}
	
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
}

void second1()
 
{
	s1=p/10;
	s2=(int)p%10;
	p=p+1;
	if((int)p%2==0){
		point=1;
	}
	else{
		point=2;
	}
	if(p>=60)
		p=0;
	
	
	  
}
void minute1()
{
	
	m1=pm/10;
	m2=(int)pm%10;
	p1=p1+1;
	if(p1>=60){
		p1=0;
		pm=pm+1;
		if(pm>=60){
			pm=0;
		}
	}
	
}
void hour1()
{
	h1=ph/10;
	h2=(int)ph%10;
	
	p2=p2+1;
	
	if(p2>=60){
		p2=0;
		pm1=pm1+1;
		if(pm1>=60){
			pm1=0;
			ph=ph+1;
			if(ph>=24){
				ph=0;
			}
		}
	}
}

void second()
 
{
	  sx=250*cos(q/57.29);
	  sy=250*sin(q/57.29);
	  x=500+sx;
	  y=360+sy;
      q=q-6;
}
void minute()
{
      mx=220*cos(qm/57.29);
	  my=220*sin(qm/57.29);
	  xm=500+mx;
	  ym=360+my;
	  qm=qm-.1;
}
void hour()
{
	hx=200*cos(qh/57.29);
	hy=200*sin(qh/57.29);
	xh=500+hx;
	yh=360+hy;
	qh=qh-1/600;
}
int main()
{
	time_t rawtime;
    tm * ptm;

    time ( &rawtime );

    ptm = gmtime ( &rawtime );   //getting time from bios


    
	ho=(ptm->tm_hour+6)%24;
	min=ptm->tm_min;
	sec=(ptm->tm_sec)+1;

	H=ho;
	M=min;
	S=sec+1;
	
	p=sec;
	p1=sec;
	p2=sec;
	pm=min;
	pm1=min;
	pm2=min;
	ph1=(int)(ho+11)%12+1;
	ph=ph1;


    second1();
    minute1();
    hour1();

	qh =(3-H)*30.0-30*M/60.0-30*S/3600.0+.1/600+270+90;
    qm= (15-M)*6.0-S/60.0+.1+270+90;
	q = (15-S)*6.0+6+270+90;

    second();
    minute();
    hour();

   
	
    iSetTimer(1000,second);
	iSetTimer(1000,minute);
	iSetTimer(1000,hour);


   
	
    iSetTimer(1000,second1);
	iSetTimer(1000,minute1);
	iSetTimer(1000,hour1);

	
	iInitialize(1000,720, "Digital & Analog Clock");
	
	return 0;
}