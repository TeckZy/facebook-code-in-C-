#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>
#include<iostream.h>


 int maxx,maxy,x,y,button,prevx,prevy,temp1,temp2,key,color;
   char ch = 'a' ;
union REGS i, o;
int get_key()
{
   union REGS i,o;

   i.h.ah = 0;
   int86(22,&i,&o);

   return ( o.h.ah );
}
char change_shape(int x, int y)
{
   if ( x >600  && x < 638 && y >22 && y < 36 )
      return 'l';

}
void showmouseptr()
{
   i.x.ax = 1;
   int86(0x33,&i,&o);
}

void hidemouseptr()
{
   i.x.ax = 2;
   int86(0x33,&i,&o);
}

void restrictmouseptr( int x1, int y1, int x2, int y2)
{
   i.x.ax = 7;
   i.x.cx = x1;
   i.x.dx = x2;
   int86(0x33,&i,&o);

   i.x.ax = 8;
   i.x.cx = y1;
   i.x.dx = y2;
   int86(0x33,&i,&o);
}

void getmousepos(int *button,int *x,int *y)
{
   i.x.ax = 3;
   int86(0x33,&i,&o);

   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}

void p1();
void p2();
void pss();
int points1[8]={39,205,35,214,43,214,39,205},points2[8]={39,215,34,207,44,207,39,217};

    char ch2,ch1,user[10],pass[10];
   float j=0;

   ///////////////////////
	char *user1="asdf";
	char *quit="quit";
	char *pass1="qwer";
	char *gst="guest";
	char *name="amj1";
   //////////////////////
void main()
{  clrscr();
   int gd = DETECT,gm;

   initgraph(&gd, &gm, "C:\\Turboc3\\bgi");


   maxx = getmaxx();
   maxy = getmaxy();
    setviewport(1,1,maxx-1,maxy-1,1);

   restrictmouseptr(1,1,maxx-1,maxy-1);
   showmouseptr();
    p1();


   getch();
}

void p1()
 {
   setbkcolor(15);//background fb page color
   setfillstyle(SOLID_FILL,9);
   bar(0,0,639,65);
   settextstyle(1, HORIZ_DIR,4);
   setcolor(15);
   outtextxy(63, 12,"Facebook");
   setfillstyle(SOLID_FILL,15);
   bar(362,20,475,37);
   bar(490,20,599,37);
   setfillstyle(1,7);
   bar(363,42,370,50);
   setfillstyle(1,1);
  // setcolor(0);
   bar3d(600,22,638,36,2,2);
   settextstyle(2, HORIZ_DIR,4);
   outtextxy(362,9,"Email or Phone");
   outtextxy(490,9,"Password");
   outtextxy(603,22,"Log In");
   outtextxy(490,39,"Forgot your password?");
   outtextxy(362,39,"  Keep me logged in");
   settextstyle(3, HORIZ_DIR,4);
   setcolor(1);
   outtextxy(362,72,"Sign Up");
   settextstyle(3, HORIZ_DIR,2);
   setcolor(8);
   outtextxy(362,107,"It's free and always will be");
   setcolor(8);
   rectangle(362,20,475,37);
   rectangle(490,20,599,37);
   settextstyle(1, HORIZ_DIR,1);
   setcolor(8);
   outtextxy(36, 115,"Connect with the friend and the");
   outtextxy(36, 133,"world around you with facebook.");
   settextstyle(2, HORIZ_DIR,4);
   outtextxy(55, 178,"See photos and updates");
   outtextxy(55, 209,"Share what's new");
   outtextxy(55, 240,"Find more");
   settextstyle(2, HORIZ_DIR,4);
   outtextxy(189, 178,"from friend in news feed.");
   outtextxy(150, 209,"in your life on your timeline.");
   outtextxy(111, 240,"what you're looking with graph search.");
   setfillstyle(1,8);
   rectangle(30,170,52,196);
   bar(30,175,52,179);
   bar(37,175,38,196);
   bar(30,185,38,188);
   bar(30,186,52,187);
   bar(27,194,30,196);
   bar(27,196,26,178);
   line(31,256,40,242);
   line(31,256,48,256);
   line(48,256,40,242);
   pieslice(40,242,0,360,3);
   pieslice(31,256,0,360,3);
   pieslice(48,256,0,360,3);
   rectangle(30,202,49,220);
   rectangle(31,203,48,219);
   rectangle(32,204,47,218);
   bar(37,220,42,223);
   bar(36,223,43,227);
   bar(30,227,49,229);
   drawpoly(4,points1);
   drawpoly(4,points2);
   rectangle(365,139,480,159);
   rectangle(490,139,620,159);
   rectangle(365,164,620,184);
   rectangle(365,189,620,209);
   rectangle(365,214,615,234);
   rectangle(365,251,415,270);
   rectangle(420,251,460,270);
   rectangle(465,251,510,270);
   settextstyle(2, HORIZ_DIR,5);
   setcolor(8);
   outtextxy(365,235,"Birthday");
   outtextxy(366,235,"Birthday");

   settextstyle(2, HORIZ_DIR,4);
   setcolor(1);
   outtextxy(515,252,"Why do I need to");
   outtextxy(515,262,"provide my birthday?");
   outtextxy(579,300,"terms");
   outtextxy(365,384,"Create a page");
   outtextxy(492,310,"data use policy");
   outtextxy(419,320,"cookie use.");
   setcolor(7);
   outtextxy(372,142,"First name");
   outtextxy(499,142,"Last name");
   outtextxy(372,167,"Email or mobile no.");
   outtextxy(372,192,"Re-enter email or mobile no.");
   outtextxy(372,217,"* * * * * * * *");
   outtextxy(369,253,"Month ");
   outtextxy(423,253,"Day  ");
   outtextxy(467,253,"Year  ");
   setcolor(8);
   outtextxy(369,253,"      v");
   outtextxy(370,253,"      v");
   outtextxy(423,253,"     v");
   outtextxy(424,253,"     v");
   outtextxy(467,253,"      v");
   outtextxy(468,253,"      v");
   setcolor(7);
   pieslice(370,284,0,360,4);
   pieslice(450,284,0,360,4);
   settextstyle(2, HORIZ_DIR,5);
   setcolor(8);
   outtextxy(379,276,"Female");
   outtextxy(380,276,"Female");
   outtextxy(460,276,"Male");
   outtextxy(461,276,"Male");
    settextstyle(2, HORIZ_DIR,4);
   setcolor(8);
   outtextxy(365,300,"By clicking sign up,you agree to our");
   outtextxy(365,310,"and you have read our               ,");
   outtextxy(365,320,"including        .");
   outtextxy(444,384,"for a celebrity,band or business");
   setfillstyle(SOLID_FILL,GREEN);
   bar(374,340,477,367);
   bar3d(374,340,477,367,1,2);
   settextstyle(1, HORIZ_DIR,3);
   setcolor(15);
   outtextxy(380,336,"sign up");
   setcolor(8);
   line(365,379,639,379);
   line(0,420,639,420);
   settextstyle(2, HORIZ_DIR,5);
   setcolor(8);


   for(int i=0;i<=3;i++)
   {
   ch2=getch();
  ///putch(ch);
   outtextxy(364+j,19,&ch2);
	 if((ch2=='f')||(ch2=='i')||(ch2=='j')||(ch2=='l')||(ch2=='t')||(ch2=='r'))
		 j+=5;
	 else
		 j+=8;
   user[i]=ch2;
   }

   int st=strlen(user);
   user[st]='\0';
   cout<<endl;

     j=0;


    for(i=0;i<=3;i++)
   {
   ch1=getch();
   outtextxy(494+j,19,"*");
   j+=8;
   pass[i]=ch1;

   }

   pass[4]='\0';

    setviewport(1,1,519,428,1);

     while(1)
   {
      if(kbhit())
      {
	 key = get_key();

	 if( key == 1 )
	 {
	    closegraph();
	    exit(0);
	 }
      }
   getmousepos(&button,&x,&y);

      if( button == 1 )
      {   ch=change_shape(x,y);

	 if ( ch == 'l' )
	 {
	 pss();
	 }
	showmouseptr();
      }
     }




}


void pss()
{
    if (((strcmpi(user,"anup")==0)&&(strcmpi(pass,"asdf")==0))||((strcmpi(user,name)==0)&&(strcmpi(pass,pass1)==0)))
	 {

   closegraph();
    clrscr();
    int gd = DETECT,gm;
initgraph(&gd, &gm, "C:\\Turboc3\\bgi");
 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(170,18,"LOGING IN,PLEASE WAIT");
	  setcolor(15);
 bar(0,200,634,220);
int x=0;

	int a;
   for(int i=0;i<634;++i)
 {      sound(i);
     a=i/6.29;
    delay(10);
     setcolor(2);
  line(x,200,x,220);
  setcolor(10);
  line(x-21,200,x-21,220);
  line(x-24,200,x-24,220);
   gotoxy(37,15);
       cout<<a<<" %";
 if((i==50)||(i==390))
  delay(500);
  if(i==200)
  delay(2000);
 x++;
 }
 nosound();
 p2();
 }


   else{
   graphdefaults();
   closegraph();}
}
void p2() {

   closegraph();
      int gd = DETECT,gm;

   initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
    setfillstyle(SOLID_FILL,7);
     bar(0,0,639,479);
    setfillstyle(SOLID_FILL,1);
   bar(0,0,639,29);//top bar
    setfillstyle(SOLID_FILL,15);
   if((strcmpi(name,user)!=0))
   {
   bar(6,68,26,72);
   bar(7,66,25,68);
   bar(7,64,25,66);
   bar(8,63,24,64);
   bar(9,62,23,63);
   pieslice(16,54,0,360,5);
   }
   else
   {

    settextstyle(1, HORIZ_DIR,0);
   setcolor(1);
   outtextxy(13,29,"a");
    setfillstyle(SOLID_FILL,15);
     bar(25,59,35,69);
   }

   bar(45,8,60,23);//facebook logo
   bar(71,8,300,23);
     settextstyle(1, HORIZ_DIR,3);
   setcolor(1);
   outtextxy(50,2,"f");


    setfillstyle(SOLID_FILL,15);
    bar(120,38,359,80);

    bar(120,90,359,479);
    bar(368,38,520,479);
     setcolor(8);
     line(372,75,516,75);
     ellipse(290,15,0,360,3,3);
     line(292,17,295,20);
     line(280,10,280,20);
     line(372,230,516,230);
     line(124,57,160,57);
     line(168,57,354,57);
     line(220,47,220,53);//seprate
     line(160,57,164,54);
     line(164,54,168,57);
     line(533,29,533,479);
      line(533,140,639,140);
     line(533,75,639,75);
     line(533,119,639,119);
     //top bar logo



     //logo ends here

     settextstyle(2, HORIZ_DIR,4);
     setcolor(9);
     outtextxy(138,43,"Update Status");
     outtextxy(32,55,"Edit Profile");
     outtextxy(240,43,"Add Photos/Video");
    outtextxy(554,80,"Aman dwivedi");
    outtextxy(554,90,"was tagged in");
    outtextxy(554,100,"Ravi's photo");
    outtextxy(554,35,"Punit Singh:");
    outtextxy(554,45,"happy diwali");
    outtextxy(554,125,"Mukund was...");

     setcolor(1);
     outtextxy(551,170,"Punit     *WEB");
     outtextxy(551,180,"Ravi      *WEB");
     outtextxy(551,190,"Vikash    *WEB");
     outtextxy(551,200,"Satyam    *WEB");
     outtextxy(551,210,"Shashank  *WEB");
     outtextxy(551,220,"Aditya    *WEB");
     outtextxy(551,230,"Sakshi    *WEB");
     outtextxy(551,240,"Aarti     *WEB");
     outtextxy(551,250,"Meenal    *WEB");
     outtextxy(551,260,"Jyoti     *WEB");
     outtextxy(551,270,"Saurabh   *WEB");
     outtextxy(551,280,"Shivam    *WEB");
     outtextxy(551,290,"Shubham   *WEB");
     outtextxy(551,300,"Uday      *WEB");
     outtextxy(551,310,"Abhinav   *WEB");
     outtextxy(551,329," SEE MORE     ");
     outtextxy(381,39,"5 event invitation");
     outtextxy(381,49,"Vikash,ajay and 1 other");



    outtextxy(379,97,"Singapore Airlines:22");
    outtextxy(379,107,"passengers injured after");
    outtextxy(379,117,"plane bounds for Mumbai");
    outtextxy(379,127,"hits major turbulence,");
    outtextxy(379,137,"lands safely.");

    outtextxy(379,155,"Alia Bhatt:'going home'");
    outtextxy(379,165,"short features film the");
    outtextxy(379,175,"BOLLYWOOD actress");
    outtextxy(379,185,"imagines safer streets");
    outtextxy(379,195,"for women.");





    outtextxy(379,251,">>>>ENGLISH language");
    outtextxy(379,261,"connecting people<<<");
    outtextxy(379,271,"from al...");
    outtextxy(379,285,"8,894 members");
    outtextxy(379,295,"+ JOIN");

    outtextxy(379,320,"TOuCh ThE hEaRT @@");
    outtextxy(379,330,"- By You..");
    outtextxy(379,340,"For Alll of us");
    outtextxy(379,354,"1,162 members");
    outtextxy(379,364,"+ JOIN");

    outtextxy(379,389,"Kirsten Dunst");
    outtextxy(379,399,"for all of u from all");
    outtextxy(379,409,"of us.....");
    outtextxy(379,423,"1,474 members");
    outtextxy(379,433,"+ JOIN");

      settextstyle(2, HORIZ_DIR,4);
   setcolor(8);
   outtextxy(73,9,"Search for people,places and things");
   settextstyle(2, HORIZ_DIR,4);
    outtextxy(535,146,"MORE FRIENDS(90)");
    outtextxy(16,180,"PAGES");
    outtextxy(16,290,"GROUPS");

    outtextxy(379,82,"TRENDING");

     outtextxy(379,210,"SEE MORE");
     outtextxy(374,236,"SUGGESTED GROUPS  See All");
    outtextxy(125,58,"What's on your mind?");
    setcolor(15);
     outtextxy(385,7,"admn");
     outtextxy(425,7,"Home");

    setfillstyle(SOLID_FILL,7);
    bar(120,157,359,160);
    bar(120,260,359,263);
    bar(120,399,359,402); //main bar seperator
 //  setbkcolor(7);//background fb page color

   setcolor(0);

      outtextxy(32,46,"Admin Sing..");
      outtextxy(27,78,"News Feed    v");
      outtextxy(26,78,"             v");
      outtextxy(28,78,"             v");
      outtextxy(27,98,"Messages     57");
      outtextxy(27,118,"Events       57");
      outtextxy(27,138,"Photos     2389");
      outtextxy(27,158,"Real Hacking 9M+");
      //pages
      outtextxy(27,198,"Sanskrti...  128+");
      outtextxy(27,218,"Pages Feed  23+");
      outtextxy(27,238,"Like Pages");
      outtextxy(27,258,"Create Page");
      outtextxy(27,278,"Create Advert ");
      //groups
      outtextxy(27,305,"RDS group   77+");
      outtextxy(27,325,"HCV Ranker 108+");
      outtextxy(27,345,"AwEsOmE yOut..56");
      outtextxy(27,365,"UIT gorup of..67");
      outtextxy(27,385,"Dabangg peop..52");
      outtextxy(27,405,"Curiosity   971+");

      char ntf;

       delay(1000);
      { setcolor(0);
	char line[80];
	fstream fin;
	fin.open("noti.dat", ios::in);
	for(int i=0;i<=38;i++)
       {	fin.getline(line,80);
       for(int aj=0;aj<=26;aj++)
	{ ntf=line[aj];
	outtextxy(130+aj*8,89+i*10,&ntf);
	}
       delay(35);
       }
       fin.close();


}   }
