#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,i;
int x=0,y=0,z=0;
char l,m,n,name[15];
char choice;
clrscr();
printf("welcome to who wants to be millionaire?");
printf("\n\nwhat's your name?\n");
scanf("%s",&name);
clrscr();
printf("Hello %s!",name);
printf("\nA quick flash through rules:-\n1)Question will apear on your screen enter the character beside\nthe correct option\n2)In order to use a lifeline enter the number beside the lifeline or '0' to skip\n3)Rest of the rules you should know\n\npress enter");
i=getch();
clrscr();
printf("here is your first question for 1000 rupees\n");
printf("\nPress enter to begin");
i=getch();
clrscr();
printf("Which of the following metal forms amalgam with other metals?\na)silver\t\tb)merucry\nc)sodium\t\td)germanium");
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)silver\t\tb)mercury\nc)      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)mercury\n");
       z=1;
break;
case 0:
break;
}
label1:
printf("\nWhat do you  feel is correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='b')
{
printf("\ncongratulations %s you won 1000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label1;
}
clrscr();
printf("ok..Here is your next question for 5000 rupees!!");
i=getch();
clrscr();
printf("\nWho is known as the IRON MAN of India?\na)Mahatma Gandhi\t\tb)Sardar vallabhbhai Patel\nc)Robert Downey Jr.\t\td)Jawaharlal Nehru");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines remaining %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Mahatma Gandhi\t\tb)Sardar Vallabhbhai Patel\nc)      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)Sardar Patel\n");
       z=1;
break;
case 0:
break;
default:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines remaining %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Mahatma Gandhi\t\tb)Sardar Vallabhbhai Patel\nc)      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)Sardar Patel\n");
       z=1;
break;
case 0:
break;
default:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines remaining %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)Sardar Patel\n");
       z=3;
break;
case 0:
break;
default:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines remaining %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Mahatma Gandhi\t\tb)Sardar Vallabhbhai Patel\nc)      \t\td)\n");
       y=2;
break;
case 0:
break;
default:
break;
}
}

label3:
printf("\nWhat do you feel is the answer?\n");
l=getch();
printf("\n  %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='b')
{
printf("\ncongratulations %s you won 5000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else
{
printf("\nok take your time....\n");
goto label3;
}
clrscr();
printf("Good job ..Here is your is next question for 10,000 rupees");
i=getch();
clrscr();
printf("In which of the following countries will you find the\n'THE GREAT BARRIER REEF'?");
printf("\na)Australia\t\tb)India\nc)USA\t\td)Russia\n");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-80%\nb)-2%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Australia\t\tb)India\nc)      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:a)Australia\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts says the answer is:a)Australia\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Australia\t\tb)India\nc)      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-80%\nb)-2%\nc)-8%\nd)-10%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Australia\t\tb)India\nc)      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:a)Australia\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-80%\nb)-2%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 3:printf("\nExperts says the answer is:a)Australia\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-80%\nb)-2%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Australia\t\tb)India\nc)      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
label4:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='a')
{
printf("\ncongratulations %s you won 10,000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label4;
}
clrscr();
printf("Awsome work %s ... \nnow here is your next question for 50,000");
i=getch();
clrscr();
printf("In which year did the TITANIC sink?\n");
printf("a)1902\t\tb)1922\nc)1912\t\td)1892");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-8%\nb)-2%\nc)-80%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)\t\tb)1922\nc)1912      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:c)1912\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\nOh! sorry you dont have any lifelines");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts says the answer is:c)1912\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)\t\tb)1922\nc)1912      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-8%\nb)-2%\nc)-80%\nd)-10%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)\t\tb)1922\nc)1912      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:c)1912\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-8%\nb)-2%\nc)-80%\nd)-10%\n");
       x=1;
break;
case 3:printf("\nExperts says the answer is:c)1912\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-8%\nb)-2%\nc)-80%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)\t\tb)1922\nc)1912      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}

label5:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='c')
{
printf("\ncongratulations %s you won 50,000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label5;
}
clrscr();
printf("Superb work %s ...now we can move on to next question",name);
i=getch();
printf("\nHere is your next question for 1,00,000 rupees");
i=getch();
clrscr();
printf("\nWhen is the world population day observed?");
printf("\na)May 1\t\tb)july 11\nc)december 1\t\td)june 23");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)\t\tb)july 11\nc)december 1      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)july 11\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\n\nOh! sorry you dont have any lifelines\n");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts says the answer is:b)july 11\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)\t\tb)july 11\nc)december 1      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)\t\tb)july 11\nc)december 1      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)july 11\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-2%\nd)-10%\n");
       x=1;
break;
case 3:printf("\nExperts says the answer is:b)july 11\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-2%\nb)-80%\nc)-8%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)\t\tb)july 11\nc)december 1      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}

label6:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='b')
{
printf("\ncongratulations %s you won 1,00,000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label6;
}
clrscr();
printf("Oh that was tough..indeed..\niguess we can move on to our next question");
i=getch();
printf("\nHere is your next question for 2,00,000 rupees");
i=getch();
clrscr();
printf("Which was the first non test cricket playing nation to beat India\n in an international match?");
printf("\na)Srilanka\t\tb)Bangladesh\nc)Canada\t\td)Pakistan\n\n");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)40-%\nc)-5%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Srilanka\t\tb)\nc)Canada     \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)Bangladesh\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\n\nOh! sorry you dont have any lifelines\n");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts says the answer is:b)Bangladesh\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Srilanka\t\tb)\nc)Canada      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)-40%\nc)-5%\nd)-10%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Srilanka\t\tb)\nc)Canada      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:b)Bangladesh\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)-40%\nc)-5%\nd)-10%\n");
       x=1;
break;
case 3:printf("\nExperts says the answer is:b)Bangladesh\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)-40%\nc)-5%\nd)-10%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Srilanka\t\tb)\nc)Canada      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}

label7:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='a')
{
printf("\ncongratulations %s you won 2,00,000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label7;
}
clrscr();
printf("Well Well Well... you have done it again good job..!");
i=getch();
printf("\n\nOhk lets move on");
printf("Here is the next question for 10,00,000");
i=getch();
clrscr();
printf("B.C roy award is given in which field");
printf("\na)Music\t\tb)Sports\nc)Physics\t\td)Medicine\n");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)10-%\nc)-5%\nd)-40%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Music\t\tb)\nc)     \t\td)Medicine\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:d)Medicine\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\n\nOh! sorry you dont have any lifelines\n");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts says the answer is:d)Medicine\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Music\t\tb)\nc)      \t\td)Medicine\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)-10%\nc)-5%\nd)-40%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)Music\t\tb)\nc)      \t\td)Medicine\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:d)Medicine\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)-10%\nc)-5%\nd)-40%\n");
       x=1;
break;
case 3:printf("\nExperts says the answer is:d)Medicine\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-45%\nb)-10%\nc)-5%\nd)-40%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)Music\t\tb)\nc)     \t\td)Medicine\n");
       y=1;
break;
case 0:
break;
}
}

label8:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='d')
{
printf("\ncongratulations %s you won 10,00,000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label8;
}
clrscr();
printf("Ohk ... now we are talking some serious money..!");
i=getch();
printf("\nNext question for 50,00,00..on your screen");
i=getch();
clrscr();
printf("What is the ratio width of INDIAN national flag to its lenght?");
printf("\na)2:3\t\tb)3:5\nc)1:2\t\td)1:3\n");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-35%\nb)33-%\nc)-7%\nd)-25%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)2:3\t\tb)\nc)     \t\td)1:3\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:a)2:3\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\n\nOh! sorry you dont have any lifelines\n");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts says the answer is:a)2:3\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)2:3\t\tb)\nc)      \t\td)1:3\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-35%\nb)-33%\nc)-7%\nd)-25%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)2:3\t\tb)\nc)      \t\td)1:3\n");
       y=1;
break;
case 3:printf("\nExperts says the answer is:a)2:3\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-35%\nb)-33%\nc)-7%\nd)-25%\n");
       x=1;
break;
case 3:printf("\nExperts says the answer is:a)2:3\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-35%\nb)-33%\nc)-7%\nd)-25%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)2:3\t\tb)\nc)      \t\td)1:3\n");
       y=1;
break;
case 0:
break;
}
}

label9:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='a')
{
printf("\ncongratulations %s you won 50,00,000 rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label9;
}
clrscr();
printf("ohhohohoh finaly we have reached to the mark of 1 CRORE rupees");
i=getch();
printf("\n\non your screen question for 1 crore is...");
i=getch();
clrscr();
printf("In which decade was the SPICE simulator introduced");
printf("\na)1950s\t\tb)1960s\nc)1970s\t\td)1980s\n");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-26%\nb)24-%\nc)-25%\nd)-25%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)1950st\tb)\nc)1970s     \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\n\nOh! sorry you dont have any lifelines\n");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)1950s\t\tb)\nc)1970s      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-26%\nb)-24%\nc)-25%\nd)-25%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)1950s\t\tb)\nc)1970s      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-26\nb)-24%\nc)-25%\nd)-25%\n");
       x=1;
break;
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-26%\nb)-24%\nc)-25%\nd)-25%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)1950s\t\tb)\nc)1970s      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}

label10:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='c')
{
printf("\ncongratulations %s you won 1 crore rupees\n",name);
i=getch();
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label10;
}
clrscr();
printf("dhan... dhan dhan...dhan dhan dhan dhaaaaaannn.....");
i=getch();
printf("\nohhhh my goshh  it was beautiful...");
printf("\nThe finale...the final question...here its is...!!! for 10 crore rupees on your screen ");
i=getch();
clrscr();
printf("When is dishith's birhtday?");
printf("\na)10th September\t\tb)10th August\nc)10th November\t\td)10th October\n");
if(x==0&&y==0&&z==0)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-25%\nb)25-%\nc)-25%\nd)-25%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)t\tb)\nc)     \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&y==1&&z==1)
{
printf("\n\nOh! sorry you dont have any lifelines\n");
}
else if(x==1&&y==1)
{
printf("\n\nYou have the following lifelines %s\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(x==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)\t\tb)\nc)      \t\td)\n");
       y=1;
break;
case 0:
break;
}
}
else if(y==1&&z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-25%\nb)-25%\nc)-25%\nd)-25%\n");
break;
case 0:
break;
}
}
else if(x==1)
{
printf("\n\nYou have the following lifelines %s\n2)50-50\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 2:printf("\nThe reduced options are\na)\t\tb)\nc)      \t\td)\n");
       y=1;
break;
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(y==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n3)Expert advice\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-25%\nb)-25%\nc)-25%\nd)-25%\n");
       x=1;
break;
case 3:printf("\nExperts is not sure about the answer\n");
       z=1;
break;
case 0:
break;
}
}
else if(z==1)
{
printf("\n\nYou have the following lifelines %s\n1)Audience poll\n2)50-50\n\n0)to skip lifelines\n",name);
scanf("%d",&a);
switch(a)
{
case 1:printf("\nAudience poll\na)-25%\nb)-25%\nc)-25%\nd)-25%\n");
       x=1;
break;
case 2:printf("\nThe reduced options are\na)\t\tb)\nc)\t\td)\n");
       y=1;
break;
case 0:
break;
}
}

label11:
printf("\nWhat do you feel is the correct answer?\n");
l=getch();
printf("   %s %c lock kiya jaye?\n    y/n",name,l);
m=getch();
if(m=='y')
{
printf("\ncomputer ji %c lock kiya jaye\n",l);
i=getch();
if(l=='a')
{
printf("\ncongratulations %s you won 10 crore rupees\n",name);
i=getch();
printf("Game Over");
}
else
{
printf("\nohh sorry you loss .... now sleep :)\n");
i=getch();
printf("bye now!!");
goto label2;
}
}
else if(m=='n')
{
printf("\n\nOk take your time....\n");
goto label11;
}

label2:
getch();
}


