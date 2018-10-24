//                   **HAPPY ZERO(0/111) WITH UP'S AND DOWN'S**
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
clrscr();
textbackground(0);
int i,j,k,g,o,x,t[1000],b,b2,choice,choice2,z=0,v=0;float flag=0,flag2=0;char ch,player,player1[25],player2[25],name1[25],deciding;
//////////////////////////////////////////////////////////////////////////////////////
////////////////////FOR THE TITLE IN THE OUTPUT SCREEN////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
for(i=130;i<204;i++)
{
gotoxy(0,i);
textcolor(i);
{
cprintf("*");
}
}
textcolor(10);
{
delay(1000);
cprintf("              *****");
delay(1000);
}
textcolor(1);
{
cprintf(" HAPPY");
delay(1000);
}
textcolor(2);
{
cprintf(" ZERO(0/111)");
delay(1000);
}
textcolor(3);
{
cprintf(" WITH");
delay(1000);
}
textcolor(4);
{
cprintf(" UP'S");
delay(1000);
}
textcolor(5);
{
cprintf(" AND");
delay(1000);
}
textcolor(6);
{
cprintf(" DOWN'S");
delay(1000);
}
textcolor(9);
{
cprintf("*****                            ");
delay(1000);
}
for(i=130;i<205;i++)
{
gotoxy(0,i);
textcolor(i);
{
cprintf("*");
}
textcolor(0);
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
for(i=0;;i++)
{
textcolor(2);
{
textbackground(4);
{
cprintf("\n\n   Enter the choice\n\np-Play the game\n\ni-INSTRUCTIONS\n\ne-Exit\n");
}
textbackground(0);
}
cin>>ch;
if(ch=='p'||ch=='i'||ch=='e')
break;
else
cout<<"Please enter the correct option";
}
randomize;
switch(ch)
{
case 'p':
{
cout<<"The plane in which you are going to play is this\n";
 for(j=0;j<1;j++)
 {
   for(i=100;i>0;i--)
   {
   if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
   cout<<"^ ";
   if(i==42||i==23||i==86||i==69||i==98||i==17||i==51)
   cout<<"* ";
   t[i]=i;
   if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
   cout<<"\n\n";
   if(i<10)
   cout<<t[i]<<"    ";
   else if(i==100)
   cout<<t[i]<<"  ";
   else
   cout<<t[i]<<"   ";
   }
 }
for(o=0;;o++)
{
for(x=0;;x++)
{
cout<<"\n\t\ts-SINGLE PLAYER\n\t\td=DOUBLE PLAYER\n\t\tc=AGAINST COMPUTER\n";
cin>>player;
if(player=='s'||player=='d'||player=='c')
break;
else
cout<<"Please enter the correct option";
}
switch(player)
{
case's':
{
cout<<"\nRegister your name here:";
gets(name1);
cout<<"\nThe plane in which you are going to play is this\n";
 for(j=0;j<1;j++)
 {
   for(i=100;i>0;i--)
   {
   if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
   cout<<"^ ";
   if(i==42||i==23||i==86||i==69||i==98||i==17||i==51)
   cout<<"* ";
   t[i]=i;
   if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
   cout<<"\n\n";
   if(i<10)
   cout<<t[i]<<"    ";
   else if(i==100)
   cout<<t[i]<<"  ";
   else
   cout<<t[i]<<"   ";
   }
 }
   for(k=0;;k++)
  {
   for(o=0;;o++)
   {
   cout<<"\n                          Enter the choice for player 1:";
   cin>>choice;
   if(choice>6||choice<0)
   cout<<"Please enter the correct option";
   else
   break;
   }
   randomize;
    b=random(choice);                 //2
    b+=1;
    if(flag==98)
    {
    if(b==1||b==2)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag==97)
    {
    if(b==1||b==2||b==3)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag==96)
    {
    if(b==1||b==2||b==3||b==4)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag==95)
    {
    if(b==1||b==2||b==3||b==4||b==5)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    flag+=b;
    z++;
     for(j=0;j<1;j++)
     {
       for(i=100;i>0;i--)
	{
/////////////////////////////////////////////////////////////////////////////
///////////////////////THE UP'S AND DOWN'S PART///////////////////////////////
/////////////////////////////////////////////////////////////////////////////
	if(t[i]==0)
	t[i]=i;
	t[flag]=0;
	if(flag==11)
	{
	t[21]=0;
	flag+=10;
	}
	if(flag==7)
	{
	t[47]=0;
	flag+=40;
	}
	if(flag==18)
	{
	t[20]=0;
	flag+=2;
	}
	if(flag==25)
	{
	t[43]=0;
	flag+=18;
	}
	if(flag==40)
	{
	t[80]=0;
	flag+=40;
	}
	if(flag==56)
	{
	t[78]=0;
	flag+=12;
	}
	if(flag==64)
	{
	t[96]=0;
	flag+=34;
	}
	if(flag==67)
	{
	t[84]=0;
	flag+=17;
	}
	if(flag==72)
	{
	t[81]=0;
	flag+=9;
	}
	if(flag==99)
	{
	t[45]=0;
	flag-=53;
	}
	if(flag==69)
	{
	t[55]=0;
	flag-=14;
	}
	if(flag==86)
	{
	t[46]=0;
	flag-=40;
	}
	if(flag==23)
	{
	t[15]=0;
	flag-=8;
	}
	if(flag==42)
	{
	t[36]=0;
	flag-=6;
	}
	if(flag==17)
	{
	t[14]=0;
	flag-=3;
	 }
	if(flag==51)
	{
	t[41]=0;
	flag-=10;
	}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
	if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
	cout<<"\n\n";
	if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
	cout<<"^ ";
	if(i==42||i==23||i==86||i==69||i==99||i==17||i==51)
	cout<<"* ";
	if(i<10)
	cout<<t[i]<<"    ";
	else if(i==100)
	cout<<t[i]<<"  ";
	else
	cout<<t[i]<<"   ";
	if(t[100]==0)
	{
	cout<<"\n"<<name1<<" YOU HAVE WON THE GAME";
	cout<<"\n\nTHE NO. OF STEPS IN WHICH YOU HAVE COMPLETED THE GAME IS:"<<z;
	cout<<"\nTRY TO COMPLETE MORE FASTER NAXT TIME.";
	delay(5000);
	exit(0);
	}
     }
     }
  }
case'c':
{
cout<<"REGISTER THE PLAYERS NAME:";
gets(player1);
randomize;
 for(k=0;;k++)
  {
   if(k%2==0)
   {
   cout<<"\nCOMPUTER TURN:";
    b=random(6);                 //2
    b+=1;
    cout<<b<<"\n";
    if(flag==98)
    {
    if(b==1||b==2)
    cout<<"\n";
    else
    {
    continue;
    }
    }
    if(flag==97)
    {
    if(b==1||b==2||b==3)
    cout<<"\n";
    else
    {
    continue;
    }
    }
    if(flag==96)
    {
    if(b==1||b==2||b==3||b==4)
    cout<<"\n";
    else
    {
    continue;
    }
    }
    if(flag==95)
    {
    if(b==1||b==2||b==3||b==4||b==5)
    cout<<"\n";
    else
    {
    continue;
    }
    }
    flag+=b;
     for(j=0;j<1;j++)
     {
       for(i=100;i>0;i--)
	{
/////////////////////////////////////////////////////////////////////////////
///////////////////////THE UP'S AND DOWN'S PART///////////////////////////////
/////////////////////////////////////////////////////////////////////////////
	if(t[i]==0)
	t[i]=i;
	t[flag]=0;
	if(flag==11)
	{
	t[21]=0;
	flag+=10;
	}
	if(flag==7)
	{
	t[47]=0;
	flag+=40;
	}
	if(flag==18)
	{
	t[20]=0;
	flag+=2;
	}
	if(flag==25)
	{
	t[43]=0;
	flag+=18;
	}
	if(flag==40)
	{
	t[80]=0;
	flag+=40;
	}
	if(flag==56)
	{
	t[78]=0;
	flag+=12;
	}
	if(flag==64)
	{
	t[96]=0;
	flag+=34;
	}
	if(flag==67)
	{
	t[84]=0;
	flag+=17;
	}
	if(flag==72)
	{
	t[81]=0;
	flag+=9;
	}
	if(flag==99)
	{
	t[45]=0;
	flag-=53;
	}
	if(flag==69)
	{
	t[55]=0;
	flag-=14;
	}
	if(flag==86)
	{
	t[46]=0;
	flag-=40;
	}
	if(flag==23)
	{
	t[15]=0;
	flag-=8;
	}
	if(flag==42)
	{
	t[36]=0;
	flag-=6;
	}
	if(flag==17)
	{
	t[14]=0;
	flag-=3;
	 }
	if(flag==51)
	{
	t[41]=0;
	flag-=10;
	}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
	if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
	cout<<"\n\n";
	if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
	cout<<"^ ";
	if(i==42||i==23||i==86||i==69||i==99||i==17||i==51)
	cout<<"* ";
	if(i<10)
	cout<<t[i]<<"    ";
	else if(i==100)
	cout<<t[i]<<"  ";
	else
	cout<<t[i]<<"   ";
	if(t[100]==0)
	{
	cout<<"THE COMPUTER HAVE WON THE GAME";
	delay(5000);
	exit(0);
	}
     }
     }
   }
   if(k%2==1)
  {
  for(g=0;;g++)
  {
   cout<<"\nPLAYERS TURN:";
   cin>>choice2;
   if(choice2>6||choice2<1)
   {
   cout<<"please enter the correct option";
   continue;
   }
   else
   break;
   }
   b2=random(choice2);                 //2
   b2+=1;
   if(flag2==98)
    {
    if(b2==1||b2==2)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag2==97)
    {
    if(b2==1||b2==2||b2==3)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag2==96)
    {
    if(b2==1||b2==2||b2==3||b2==4)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag2==95)
    {
    if(b2==1||b2==2||b2==3||b2==4||b2==5)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
   flag2+=b2;
    for(j=0;j<1;j++)
    {
      for(i=100;i>0;i--)
       {
/////////////////////////////////////////////////////////////////////////////
///////////////////////THE UP'S AND DOWN'S PART///////////////////////////////
/////////////////////////////////////////////////////////////////////////////
       if(t[i]==111)
       t[i]=i;
       t[flag2]=111;
       if(flag2==11)
	{
	t[21]=111;
	flag2+=10;
	}
       if(flag2==7)
	{
	t[47]=111;
	flag2+=40;
	}
       if(flag2==18)
	{
	t[20]=111;
	flag2+=2;
	}
       if(flag2==25)
	{
	t[43]=111;
	flag2+=18;
	}
       if(flag2==40)
	{
	t[80]=111;
	flag2+=40;
	}
       if(flag2==56)
	{
	t[78]=111;
	flag2+=12;
	}
       if(flag2==64)
	{
	t[96]=111;
	flag2+=34;
	}
       if(flag2==67)
	{
	t[84]=111;
	flag2+=17;
	}
       if(flag2==72)
	{
	t[81]=111;
	flag2+=9;
	}
       if(flag2==99)
	{
	t[45]=111;
	flag2-=53;
	}
       if(flag2==69)
	{
	t[55]=111;
	flag2-=14;
	}
       if(flag2==86)
	{
	t[46]=111;
	flag2-=40;
	}
       if(flag2==23)
	{
	t[15]=111;
	flag2-=8;
	}
       if(flag2==42)
	{
	t[36]=111;
	flag2-=6;
	}
       if(flag2==17)
	{
	t[14]=111;
	flag2-=3;
	}
       if(flag2==51)
	{
	t[41]=111;
	flag2-=10;
	}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
       if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
       cout<<"\n\n";
       if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
       cout<<"^ ";
       if(i==42||i==23||i==86||i==69||i==99||i==17||i==51)
       cout<<"* ";
       if(i<10)
       cout<<t[i]<<"    ";
       else if(i==100)
       cout<<t[i]<<"  ";
       else
       cout<<t[i]<<"   ";
       if(t[100]==111)
	{
	cout<<"\n "<<player1<<" HAVE WON THE GAME";
       delay(5000);
      exit(0);
     }
    }
   }
  }
 }
}
case'd':
{
cout<<"REGISTER YOUR NAME:\nPLAYER 1";
gets(player1);
cout<<"\nPLAYER 2:";
gets(player2);
cout<<"\nThe plane in which you are going to play is this\n";
 for(j=0;j<1;j++)
 {
   for(i=100;i>0;i--)
   {
   if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
   cout<<"^ ";
   if(i==42||i==23||i==86||i==69||i==98||i==17||i==51)
   cout<<"* ";
   t[i]=i;
   if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
   cout<<"\n\n";
   if(i<10)
   cout<<t[i]<<"    ";
   else if(i==100)
   cout<<t[i]<<"  ";
   else
   cout<<t[i]<<"   ";
   }
 }
  for(k=0;;k++)
  {
   if(k%2==0)
   {
   for(g=0;;g++)
   {
  cout<<"\nPLAYER 1 TURN:";
  cin>>choice;
    if(choice>6||choice<1)
    {
    cout<<"please enter the correct option";
    continue;
    }
    else
    break;
    }
    b=random(choice);                 //2
    b+=1;
    if(flag==98)
    {
    if(b==1||b==2)
    cout<<"\n";
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag==97)
    {
    if(b==1||b==2||b==3)
    cout<<"\n";
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag==96)
    {
    if(b==1||b==2||b==3||b==4)
    cout<<"\n";
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag==95)
    {
    if(b==1||b==2||b==3||b==4||b==5)
    cout<<"\n";
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    flag+=b;
     for(j=0;j<1;j++)
     {
       for(i=100;i>0;i--)
	{
/////////////////////////////////////////////////////////////////////////////
///////////////////////THE UP'S AND DOWN'S PART///////////////////////////////
/////////////////////////////////////////////////////////////////////////////
	if(t[i]==0)
	t[i]=i;
	t[flag]=0;
	if(flag==11)
	{
	t[21]=0;
	flag+=10;
	}
	if(flag==7)
	{
	t[47]=0;
	flag+=40;
	}
	if(flag==18)
	{
	t[20]=0;
	flag+=2;
	}
	if(flag==25)
	{
	t[43]=0;
	flag+=18;
	}
	if(flag==40)
	{
	t[80]=0;
	flag+=40;
	}
	if(flag==56)
	{
	t[78]=0;
	flag+=12;
	}
	if(flag==64)
	{
	t[96]=0;
	flag+=34;
	}
	if(flag==67)
	{
	t[84]=0;
	flag+=17;
	}
	if(flag==72)
	{
	t[81]=0;
	flag+=9;
	}
	if(flag==99)
	{
	t[45]=0;
	flag-=53;
	}
	if(flag==69)
	{
	t[55]=0;
	flag-=14;
	}
	if(flag==86)
	{
	t[46]=0;
	flag-=40;
	}
	if(flag==23)
	{
	t[15]=0;
	flag-=8;
	}
	if(flag==42)
	{
	t[36]=0;
	flag-=6;
	}
	if(flag==17)
	{
	t[14]=0;
	flag-=3;
	 }
	if(flag==51)
	{
	t[41]=0;
	flag-=10;
	}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
	if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
	cout<<"\n\n";
	if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
	cout<<"^ ";
	if(i==42||i==23||i==86||i==69||i==99||i==17||i==51)
	cout<<"* ";
	if(i<10)
	cout<<t[i]<<"    ";
	else if(i==100)
	cout<<t[i]<<"  ";
	else
	cout<<t[i]<<"   ";
	if(t[100]==0)
	{
	cout<<"\n "<<player1<<" HAVE WON THE GAME";
	delay(5000);
	exit(0);
	}
     }
     }
   }
   if(k%2==1)
  {
  for(g=0;;g++)
  {
   cout<<"\nPLAYER 2 TURN:";
   cin>>choice2;
   if(choice2>6||choice2<1)
   {
   cout<<"please enter the correct option";
   continue;
   }
   else
   break;
   }
   b2=random(choice2);                 //2
   b2+=1;
   if(flag2==98)
    {
    if(b2==1||b2==2)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag2==97)
    {
    if(b2==1||b2==2||b2==3)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag2==96)
    {
    if(b2==1||b2==2||b2==3||b2==4)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
    if(flag2==95)
    {
    if(b2==1||b2==2||b2==3||b2==4||b2==5)
    v++;
    else
    {
    cout<<"please enter the option again,the no. generated is invalid in the game";
    continue;
    }
    }
   flag2+=b2;
    for(j=0;j<1;j++)
    {
      for(i=100;i>0;i--)
       {
/////////////////////////////////////////////////////////////////////////////
///////////////////////THE UP'S AND DOWN'S PART///////////////////////////////
/////////////////////////////////////////////////////////////////////////////
       if(t[i]==111)
       t[i]=i;
       t[flag2]=111;
       if(flag2==11)
	{
	t[21]=111;
	flag2+=10;
	}
       if(flag2==7)
	{
	t[47]=111;
	flag2+=40;
	}
       if(flag2==18)
	{
	t[20]=111;
	flag2+=2;
	}
       if(flag2==25)
	{
	t[43]=111;
	flag2+=18;
	}
       if(flag2==40)
	{
	t[80]=111;
	flag2+=40;
	}
       if(flag2==56)
	{
	t[78]=111;
	flag2+=12;
	}
       if(flag2==64)
	{
	t[96]=111;
	flag2+=34;
	}
       if(flag2==67)
	{
	t[84]=111;
	flag2+=17;
	}
       if(flag2==72)
	{
	t[81]=111;
	flag2+=9;
	}
       if(flag2==99)
	{
	t[45]=111;
	flag2-=53;
	}
       if(flag2==69)
	{
	t[55]=111;
	flag2-=14;
	}
       if(flag2==86)
	{
	t[46]=111;
	flag2-=40;
	}
       if(flag2==23)
	{
	t[15]=111;
	flag2-=8;
	}
       if(flag2==42)
	{
	t[36]=111;
	flag2-=6;
	}
       if(flag2==17)
	{
	t[14]=111;
	flag2-=3;
	}
       if(flag2==51)
	{
	t[41]=111;
	flag2-=10;
	}
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
       if(i==10||i==20||i==30||i==40||i==50||i==60||i==70||i==80||i==90)
       cout<<"\n\n";
       if(i==7||i==11||i==18||i==25||i==40||i==56||i==64||i==72)
       cout<<"^ ";
       if(i==42||i==23||i==86||i==69||i==99||i==17||i==51)
       cout<<"* ";
       if(i<10)
       cout<<t[i]<<"    ";
       else if(i==100)
       cout<<t[i]<<"  ";
       else
       cout<<t[i]<<"   ";
       if(t[100]==111)
	{
	cout<<"\n "<<player2<<" HAVE WON THE GAME";
	delay(5000);
	exit(0);
       }
      }
     }
    }
   }
  }
 }
}
case'i':
{
textcolor(1);
{
/////////////////////////////////////////////////////////////////////////////
///////////////////////////////INSTRUCTION///////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
cprintf("\nINSTRUCTION GALAXY:                                                              ");
delay(1000);
}
textcolor(2);
{
cprintf("\n1)This is a game which is related to snake and ladder                            ");
delay(1000);
}
textcolor(3);
{
cprintf("\n2)Choose your option to play as single player or double player, or with computer");
delay(1000);
}
textcolor(4);
{
cprintf("\n3)In single player mode,the player's position will be denoted by '0'.And in double player, the position of the second player is denoted by '111'.And in computer mode the player will be denoted by '111' and the computer will be denotesd by '0'");
delay(1000);
}
textcolor(5);
{
cprintf("\n4)You must give a no. between 1-6, you may get any no. from 1-6 like when you are throwing a dice.                                                              ");
delay(1000);
}
textcolor(6);
{
cprintf("\n5)Acc. to that the position of '0' or '111' will be moving.                     ");
delay(1000);
}
textcolor(7);
{
cprintf("\n6)The symbol '^' denotes that, in that place there will be a change in position which will take you towards the victory point 100.                              ");
delay(1000);
}
textcolor(8);
{
cprintf("\n7)The symbol '*' denotes that, in that place there is a downfall which will take you away from the victory point.                                               ");
delay(1000);
}
textcolor(9);
{
cprintf("\n8)The person who reaches '100' first will be the winner.                        ");
delay(1000);
}
textcolor(10);
{
cprintf("\n9)In single player mode, its just to make you feel happy as you finish it in minimum no. of steps.                                                              ");
delay(1000);
}
textcolor(11);
{
cprintf("\n10)Enjoy the game...............");
delay(1000);
}
cout<<"\nDO YOU WANT TO PLAY THE GAME\n\ty-YES\tn-NO\n";
cin>>deciding;
if(deciding=='y')
continue;
else
{
cout<<"\n\n\t\t*****THANK YOU*****";
delay(5000);
exit(0);
}
}
}
case 'e':
  {
  cout<<"\n\t\t*****THANK YOU*****";
  delay(5000);
  exit(0);
  }
}
}
getch();
}