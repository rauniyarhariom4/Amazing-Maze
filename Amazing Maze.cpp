#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
//#include<windows.h>
void displayreplay();
void displayplayagain();
void displaystartwindow()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3:\\BGI");
	
	setcolor(9);
    settextstyle(4,0,1);
	outtextxy(200,30,"AMAZING MAZE");
	outtextxy(280,50,"BY");
	setcolor(WHITE);
	line(90,150,600,150);
	    delay(300);
	line(140,150,140,185);
		delay(300);
	arc(140,210,90,270,25);
		delay(300);
	arc(140,275,30,280,40);
		delay(300);
	line(190,150,190,310);
		delay(300);
	arc(230,150,0,180,40);
		delay(300);
	arc(250,190,250,120,40);
		delay(300);
	line(235,225,290,310);
		delay(300);
	arc(330,190,270,120,40);
		delay(300);
	arc(330,270,250,90,40);
		delay(300);
	line(410,150,410,310);
		delay(300);
	line(330,230,410,230);
        delay(300);
	line(430,150,430,310);
		delay(300);
	line(380,105,430,150);
	    delay(300);
	circle(370,120,20);
	    delay(300);
	line(560,150,560,310);
	    delay(300);
	line(500,150,500,310);
	    delay(300);
	line(450,230,560,230);
		delay(300);
	line(450,230,500,310);
		delay(300);
    
    setcolor(YELLOW);
	rectangle(250,350,420,430); // Play button
    outtextxy(265,360,"Click Here");
    outtextxy(310,380,"To");
    outtextxy(265,400,"Play Game"); 

    int x,y;
    while(1) 
	{
        if(ismouseclick(WM_LBUTTONDOWN)) 
		{
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=250 && y>=350 && x<=420 && y<=430) 
			{
                break;
            }
        }
    }
//	getch();
	closegraph();
}
void playgame()
{
	int gd=DETECT,gm,x=0,y=0,i=15,j=28,r=4;
	char ch;
	int page=0,c=14,s=0;
	char score[1];
	initgraph(&gd,&gm,"C://TURBOC3://BGI");
	
	while(1)
	{
		
		sprintf(score,"%d",s);
		outtextxy(10,460,"Checkpoint :");
		outtextxy(95,460,score);
		
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		outtextxy(0,0,"Start");
		outtextxy(610,460,"End");
		outtextxy(270,460,"Press esc to exit");
		
		outtextxy(500,15,"AMAZING MAZE");
		outtextxy(538,30,"BY");
		outtextxy(525,45,"HARIOM");
		outtextxy(515,60,"RAUNIYAR");
		
		setbkcolor(2);
		line(0,0,0,100);
		line(0,15,31,15);
		line(31,0,31,69);
		line(31,69,100,69);
		line(0,100,69,100);
		line(69,100,69,150);
		line(100,69,100,181);
		line(20,150,69,150);
		line(51,181,100,181);
		setcolor(14);
		line(18,140,18,260);
	    line(402,59,402,191);
		line(264,279,384,279);
		line(507,312,507,410);	
		setcolor(WHITE); 
	
		circle(18,140,5);
		circle(18,260,5);  
		circle(402,59,5);  
		circle(402,191,5);  
		circle(264,279,5);  
		circle(384,279,5);
		circle(507,410,5); 
	   
		line(22,153,22,247);
		line(20,150,20,250);
		line(51,181,51,219);
		line(51,219,150,219);
		line(20,250,181,250);
		line(150,0,150,219);
		line(181,31,181,250);
		line(150,0,250,0);
		line(181,31,219,31);
		line(250,69,400,69);
		line(250,0,250,69);
		line(219,31,219,100);	
		line(219,100,369,100);
		line(400,69,400,181);
		line(398,72,398,178);
		line(369,100,369,150);
		line(212,150,369,150);
		line(243,181,400,181);
		line(212,150,212,281);
		line(243,181,243,312);
		line(125,281,212,281);
		line(150,312,243,312);
		line(125,281,125,400);
		line(150,312,150,369);
		line(150,369,274,369);
		line(125,400,305,400);
		line(274,281,274,369);
		line(305,312,305,400);
		line(274,281,374,281);
		line(277,283,371,283);
		line(305,312,343,312);
		line(374,281,374,369);	
		line(343,312,343,400);
		line(374,369,474,369);
		line(343,400,505,400);
		line(474,281,474,369);
		line(505,312,505,400);
		line(503,315,503,397);
		line(474,281,637,281);
		line(505,312,603,312);
		line(637,281,637,480);	
		line(603,312,603,480);
		line(603,460,637,460);
		line(200,8,200,31);
		line(200,8,215,12);
		line(200,20,215,12);
		line(160,289,160,312);
		line(160,289,175,293);
		line(160,301,175,293);
		line(424,377,424,400);
		line(424,377,439,381);
		line(424,389,439,381);
        
    /*    setfillstyle(HATCH_FILL,WHITE);
        floodfill(10,260,WHITE);    */
        
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(25,20,WHITE);		
		circle(i,j,r);
	//	c=rand()%16;
		setfillstyle(HATCH_FILL,c);
		floodfill(i,j,WHITE);
	    delay(10);
	if(kbhit())
	{
		ch=getch();
		if(ch=='w'||ch==72)
		{
			x=0;
			y=-1;
		}
		if(ch=='a'||ch==75)
		{
			y=0;
			x=-1;
		}
		if(ch=='d'||ch==77)
		{
			y=0;
			x=1;
		}
		if(ch=='s'||ch==80)
		{
			x=0;
			y=1;
		}
		if(ch==27)
		{
			exit(0);
		}
		
	}
	    if(j-r==15&&(i>=0&&i<=31))
	{
		printf("Game Over!!!!");
	//	exit(0);
	    displayreplay();
	}
		if(i-r==0&&(j>=0&&j<=100))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==31&&(j>=0&&j<=69))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==100&&(i>=0&&i<=69))
	{
		printf("Game Over!!!!");
	//	exit(0);
		displayreplay();
	}
		if(j-r==69&&(i>=31&&i<=100))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i-r==69&&(j>=100&&j<=150))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==100&&(j>=69&&j<=181))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==150&&(i>=20&&i<=69))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==181&&(i>=51&&i<=100))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i-r==20&&(j>=150&&j<=250))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==51&&(j>=181&&j<=219))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==219&&(i>=51&&i<=150))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==250&&(i>=20&&i<=181))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i-r==150&&(j>=0&&j<=219))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==181&&(j>=31&&j<=250))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==0&&(i>=150&&i<=250))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==31&&(i>=181&&i<=219))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i-r==219&&(j>=31&&j<=100))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==250&&(j>=0&&j<=69))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==69&&(i>=250&&i<=400))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==100&&(i>=219&&i<=369))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i-r==369&&(j>=100&&j<=150))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==400&&(j>=69&&j<=181))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==150&&(i>=212&&i<=369))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==181&&(i>=243&&i<=400))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i-r==212&&(j>=150&&j<=281))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(i+r==243&&(j>=181&&j<=312))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==281&&(i>=125&&i<=212))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==312&&(i>=150&&i<=243))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==369&&(i>=150&&i<=274))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==400&&(i>=125&&i<=305))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==281&&(i>=274&&i<=374))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==312&&(i>=305&&i<=343))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==369&&(i>=374&&i<=474))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==400&&(i>=343&&i<=505))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j-r==281&&(i>=474&&i<=637))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==312&&(i>=505&&i<=603))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
		if(j+r==460&&(i>=603&&i<=637))
	{
		printf("You Won!!!!");
	//	exit(0);
	    displayplayagain();
	}
		if(i+r==637&&(j>=281&&j<=480))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i-r==603&&(j>=312&&j<=480))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i+r==505&&(j>=312&&j<=400))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i-r==474&&(j>=281&&j<=369))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i+r==374&&(j>=281&&j<=369))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i-r==343&&(j>=312&&j<=400))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i+r==305&&(j>=312&&j<=400))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i-r==274&&(j>=281&&j<=369))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i+r==150&&(j>=312&&j<=369))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
			if(i-r==125&&(j>=281&&j<=400))
	{
		printf("Game Over!!!!");
		displayreplay();
	}
	
	if(i==200&&(j>=8&&j<=31) || i==160&&(j>=289&&j<=312) || i==424&&(j>=377&&j<=400))
	{
		
		//  Beep(1500,800);
		printf("\a");
		s=s+1;
		c=rand()%16;
		r=r+2;
	
	}  
	
	
	if(i-r==22&&(j>=153&&j<=247) || i+r==398&&(j>=72&&j<=178) || j-r==283&&(i>=277&&i<=371) || i+r==503&&(j>=315&&j<=397))
	{
		i=15;
		j=28;
		x=0;
		y=1;
		r=4;
	}
	
	i=i+x;
	j=j+y;
	page=1-page;
    }
	getch();
	delay(10);
	closegraph();
}
void displayreplay()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3:\\BGI");
	
    setcolor(YELLOW);
	rectangle(250,350,370,430); // Re-Play button
    outtextxy(275,360,"Click Here");
    outtextxy(300,380,"To");
    outtextxy(265,400,"Replay Game"); 

    setcolor(9);
    settextstyle(4,0,5);
	outtextxy(140,100,"Game Over!!!");
//	setcolor(WHITE);
	
    int x,y;
    while(1) 
	{
        if(ismouseclick(WM_LBUTTONDOWN)) 
		{
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=250 && y>=350 && x<=420 && y<=430) 
			{
               	playgame();
            }
        }
    }
//	getch();
	closegraph();
}
void displayplayagain()
{
    int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3:\\BGI");
	
    setcolor(YELLOW);
	rectangle(250,350,370,430); // Re-Play button
    outtextxy(275,360,"Click Here");
    outtextxy(300,380,"To");
    outtextxy(265,400,"Replay Game"); 

    setcolor(9);
    settextstyle(4,0,5);
	outtextxy(140,100,"You Won!!!");
//	setcolor(WHITE);
    int x,y;
    while(1) 
	{
        if(ismouseclick(WM_LBUTTONDOWN)) 
		{
            getmouseclick(WM_LBUTTONDOWN,x,y);
            if(x>=250 && y>=350 && x<=420 && y<=430) 
			{
               	playgame();
            }
        }
    }
//	getch();
	closegraph();	
}
int main()
{
	displaystartwindow();
	playgame();
	return(0);
}
