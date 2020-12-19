#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int i;
void border()
{


      textbackground(0);
      textcolor(15);
     gotoxy(4,2);
     cprintf("зддддддддддддддддддддддддддддддддд©");
     gotoxy(4,3);
     cprintf("Ё");
     gotoxy(38,3);
     cprintf("Ёдддддддддддддддд");
     gotoxy(4,4);
     cprintf("ю-дддддддддддддддддддддддддддддддды");
      gotoxy(5,3);
     textcolor(3);
     cprintf(" D A T A  M A N A G E M E N T");
     gotoxy(1,3);
     textcolor(15);
     cprintf("здд");
     gotoxy(1,7);
     cprintf("цдд");
     gotoxy(4,6);
      cprintf("зддддддддддд©");
     gotoxy(4,7);
     cprintf("Ё");
     gotoxy(16,7);
     cprintf("Ё");
     gotoxy(4,8);
     cprintf( "ю-дддддддддды");
     for(i=4; i<=22; i++)
     {
       textcolor(15);
      gotoxy(1,i);
      cprintf("Ё");

     }
     gotoxy(1,23);
     cprintf("юдд╢");
     textcolor(15);
       gotoxy(4,22);
     cprintf("здддддддддддддддддддддддддддддддддддддддддддддддддддд©");
     gotoxy(4,23);
     cprintf("Ё");
     gotoxy(57,23);
     cprintf("Ё");
     gotoxy(4,24);
     cprintf("ю-ддддддддддддддддддддддддддддддддддддддддддддддддддды");
      textcolor(3);
      gotoxy(5,23);
       cprintf("E N T E R  C H O I C E :");
     for(i=58; i<=78; i++)
     {
       textcolor(15);
       gotoxy(i,23);
      cprintf("д");
     }
     gotoxy(77,23);
     cprintf("дды");
      for(i=4; i<=22; i++)
     {
       textcolor(15);
      gotoxy(79,i);
      cprintf("Ё");

     }
     gotoxy(79,3);
     cprintf("©");


}
void dborder()
{


     for(i=3; i<=23; i++)
     {
       textcolor(15);
      gotoxy(1,i);
      cprintf("Ё");

       textcolor(15);
      gotoxy(79,i);
      cprintf("Ё");



     }
     textcolor(15);
     gotoxy(1,2);
     cprintf("з");


     textcolor(15);
     gotoxy(79,2);
     cprintf("©");

     textcolor(15);
     gotoxy(2,24);
     cprintf("ю");

     textcolor(15);
     gotoxy(79,24);
     cprintf("ы");
     for(i=2; i<=78; i++)
     {
       textcolor(15);
      gotoxy(i,2);
      cprintf("д");

       textcolor(15);
      gotoxy(i,24);
      cprintf("д");



     }
}
void date()
{

	struct date today;

	textcolor(15);
	 gotoxy(54,2);
     cprintf("зддддддддддддддддддддддд©");
     gotoxy(54,4);
     cprintf("ю-дддддддддддддддддддддды");
     gotoxy(54,3);
     cprintf("Ё                       Ё");
	getdate(&today);
	textcolor(3);
	gotoxy(55,3);

	cprintf(" DATE : %d - %d - %d ",today.da_day,today.da_mon,today.da_year);

}


void main()
{
	      FILE *fp;
	      char username[40],password[10],collagename[30],cource[30],fees[10],mobno[15],ch,pw[40],name[40];
	      char c[30],co[30],mo[15],em[15],fs[10];
	      int n,i,chk1,chk2,f=0,f1=0,k,m,color1,color2,number=1;
	      char developer[9]="ajay2001";
	      label:
	      system("cls");

		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("H O M E");
	      textcolor(2);
	      gotoxy(30,10);
	      cprintf("1   :   New account");
	      gotoxy(30,12);
	      textcolor(2);
	      cprintf("2   :   Login ");

	      gotoxy(30,14);
	      textcolor(2);
	      cprintf("3   :   login as developer");

	      gotoxy(30,16);
	      textcolor(2);

	      cprintf("4   :   Exit");


	      gotoxy(30,23);
	      scanf("%d",&n);

	      if(n==1)
	      {
		clrscr();

		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("New User");

		gotoxy(35,8);
		textcolor(2);
		cprintf("Stage : 1 of 3");
		gotoxy(20,12);
		textcolor(3);
		cprintf("Enter  User name      :");

		textcolor(3);
		gotoxy(20,15);
		cprintf("Set 8 digit Password  :");

		gotoxy(45,12);
		textcolor(15);
		fflush(stdin);
		gets(username);

		gotoxy(45,15);
		textcolor(15);
		for(i=0; i<8; i++)
		{
		  ch=getch();
		  password[i]=ch;
		  ch='*';
		  printf("%c",ch);

		}
		password[i]='\0';
		clrscr();


		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("New User");

		gotoxy(35,8);
		textcolor(2);
		cprintf("Stage : 2 of 3 ");
		gotoxy(20,12);
		fflush(stdin);
		textcolor(3);
		cprintf("Enter  Collage Name :");

		gotoxy(20,15);
		textcolor(3);
		cprintf("Enter  Cource  Name :");

		gotoxy(45,12);
		fflush(stdin);
		textcolor(15);
		gets(collagename);


		gotoxy(45,15);
		fflush(stdin);

	       textcolor(15);
		gets(cource);

		clrscr();


		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("New User");
		gotoxy(35,8);
		textcolor(2);
		cprintf("Stage : 3 of 3 ");


		gotoxy(20,12);
		textcolor(3);
		cprintf("Enter  Cource Fees    :");
		gotoxy(20,15);
		textcolor(3);
		cprintf("Enter  Mobile Number  :");

		gotoxy(45,12);
		fflush(stdin);
		textcolor(15);
		gets(fees);

		gotoxy(45,15);
		fflush(stdin);
		textcolor(15);
		gets(mobno);
		clrscr();


		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("Confirm");
		gotoxy(30,12);
		textcolor(2);
		cprintf("1.    Save data\n");
		gotoxy(30,14);
		textcolor(2);
		cprintf("2.    Cancel");
		gotoxy(30,23);
		scanf("%d",&m);
		if(m==1)
		{
		if(fp==NULL)
		{
		cprintf("file null beofre");
		}
		fp=fopen("login.txt","a");
		if(fp==NULL)
		{
		cprintf("file null after");
		}

		fprintf(fp,"%s %s %s %s %s %s",username,password,collagename,cource,fees,mobno);
		fprintf(fp,"\n");
		fclose(fp);
		clrscr();

		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  _setcursortype(_NOCURSOR);
		  cprintf("Saved");
		gotoxy(30,12);
		textcolor(2);
		cprintf("Record saved Successfully");
		 getch();
		goto label;
		}
		else
		{

		clrscr();

		 border();
		  date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("Canceled");
		gotoxy(30,12);
		textcolor(2);
		cprintf("Record Canceled Successfully");
		 getch();
		goto label;

		}
	      }
	      else if(n==2)
	      {
	      label1:
		clrscr();

		 border();
		 date();

		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("L O G I N");

		gotoxy(20,12);
		textcolor(2);
		cprintf("Enter  User name       :");
		gotoxy(20,14);
		textcolor(2);
		cprintf("Enter 8 digit Password :");
		gotoxy(45,12);
		textcolor(15);
		fflush(stdin);
		scanf("%s",username);

		gotoxy(45,14);
		textcolor(15);
		for(i=0; i<8; i++)
		{
		  ch=getch();
		  password[i]=ch;
		  ch='*';
		  cprintf("%c",ch);

		}
		password[i]='\0';
		 fp=fopen("login.txt","r");
		 while(fscanf(fp,"%s %s %s %s %s %s",name,pw,co,c,fs,mo)!=EOF)
		 {

		     color1=3;
		     color2=15;
		     chk1=strcmp(username,name);
		     chk2=strcmp(password,pw);
		     if(chk1==0 && chk2==0)
		     {

		     clrscr();
		   border();
		   date();
		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("D A T A");
		     textcolor(2);
		     gotoxy(32,7);
		     _setcursortype(_NOCURSOR);
		     cprintf("Login successfully");
		     gotoxy(28,8);
		     cprintf("ддддддддддддддддддддддддддд");
		     textcolor(color1);
		     gotoxy(30,10);
		     cprintf("User name    :" );

		     textcolor(color2);
		     gotoxy(45,10);
		     cprintf("%s",name);

		     textcolor(color1);
		     gotoxy(30,12);
		     cprintf("password     :");


		     textcolor(color2);
		     gotoxy(45,12);
		     cprintf("%s",pw);

		      textcolor(color1);
		     gotoxy(30,14);
		     cprintf("Collage name :");


		     textcolor(color2);
		     gotoxy(45,14);
		     cprintf("%s",co);

		      textcolor(color1);
		     gotoxy(30,16);
		     cprintf("Cource name  :");


		     textcolor(color2);
		     gotoxy(45,16);
		     cprintf("%s",c);

		      textcolor(color1);
		     gotoxy(30,18);
		     cprintf("Cource Fees  :");


		     textcolor(color2);
		     gotoxy(45,18);
		     cprintf("%s",fs);

		      textcolor(color1);
		     gotoxy(30,20);
		     cprintf("Mobile no    :");


		     textcolor(color2);
		     gotoxy(45,20);
		     cprintf("%s",mo);

		     f=1;
		     }

		 }
		 if(f==0)
		 {





		      gotoxy(25,20);
			textcolor(4);
		      cprintf("Wrong Password or User name");
		      getch();

		      goto label;
		 }
		 fclose(fp);
		 getch();
		 goto label;

	      }
	     else if(n==3)
	      {
		  clrscr();
		  border();
		  date();

		  textcolor(3);
		  gotoxy(6,7);
		  cprintf("DEVELOPER");
		  textcolor(2);
		  gotoxy(20,12);


		  cprintf("Enter Developer password:");

		for(i=0; i<8; i++)
		{
		  ch=getch();
		  password[i]=ch;
		  ch='*';
		  printf("%c",ch);


		}
		password[i]='\0';



		  chk1=strcmp(password,developer);
		 if(chk1==0)
		 {

		 fp=fopen("login.txt","r");
		 if(fp==NULL)
		 {
		   clrscr();
		   dborder();
		    gotoxy(35,12);
		    textcolor(14+BLINK);
		    _setcursortype(_NOCURSOR);
		    cprintf("No Data Found");
		    getch();
		    main();

		 }
		 else
		 {
		 k=4;
		 clrscr();
		 dborder();
		 window(30,1,60,2);
		 textcolor(15);
		 cprintf("зддддддддддддддддддддддд©");
		 window(30,3,60,4);
		 cprintf("юддддддддддддддддддддддды");
		 window(30,2,60,3);
		 cprintf("Ё                       Ё");
		 textcolor(3);
		 window(31,2,59,3);
		 cprintf("A L L  U S E R  D A T A");
		_setcursortype(_NOCURSOR);
		 k=8;
		window(2,k-3,3,k-3);
		textcolor(2);
		cprintf("#");

		window(5,k-3,14,k-3);
		textcolor(2);
		cprintf("#Username");

		window(15,k-3,25,k-3);
		textcolor(2);
		cprintf("#Password");


		window(28,k-3,40,k-3);
		textcolor(2);
		cprintf("#Collage");


		window(43,k-3,57,k-3);
		textcolor(2);
		cprintf("#Cource");


		window(58,k-3,65,k-3);
		textcolor(2);
		cprintf("#Fees");

		window(67,k-3,80,k-3);
		textcolor(2);
		cprintf("#Contact No.");
		   for(i=2; i<=78; i++)
		   {
		     textcolor(15);
		     window(i,k-2,i+1,k-2);
		     cprintf("м");


		     textcolor(15);
		     window(i,k-4,i+1,k-4);
		     cprintf("д");


		   }
		 while(fscanf(fp,"%s %s %s %s %s %s ",name,pw,co,c,fs,mo)!=EOF)
		 {


		window(2,k,4,k+1);
		textcolor(15);
		cprintf("%d",number);


		window(5,k,14,k+1);
		textcolor(14);
		cprintf("%s",name);

		window(15,k,25,k+1);
		textcolor(15);
		cprintf("%s",pw);


		window(28,k,40,k+1);
		textcolor(15);
		cprintf("%s",co);


		window(43,k,57,k+1);
		textcolor(14);
		cprintf("%s",c);


		window(58,k,65,k+1);
		textcolor(14);
		cprintf("%s",fs);

		window(67,k,80,k+1);
		textcolor(15);
		cprintf("%s",mo);
		   k++;
		   number++;
		   f1=1;
		}
		}
		 if(f1==0)
		 {



		      gotoxy(24,20);
		      _setcursortype(_NOCURSOR);
		      textcolor(4);
		      cprintf("Wrong password or user name");
		      getch();

		      goto label;
		 }
		 fclose(fp);
		 getch();
		 exit(1);
		  }

		}

	      else if(n==4)
	      {
		exit(1);

	      }

	      else
	      {
		main();
	      }


}