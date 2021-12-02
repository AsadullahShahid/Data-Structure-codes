//This program is in many ways like an OS (operating system) this is Version 1 this only features 1 game: Cyberwarfare and one calculator
// Please do not copy  the source of this program and claim it as yours atleast give me a bit of credit sorry for poor spelling and very less commenting  . 
#include<stdio.h>   //preproccer
#include<conio.h>   
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
char newuser[50];
char newpasswd[50];
char signup[]="Sign";
char wishes[50];        //Intisillisation
char commands[]="Game"; 
char username[50];
char calc[]="Calc";
char user[]="Cyberspace";
char pass[]="asdfjkl";
char server[]="Show";
char smd[]="trojan";
float addnumi;
float addnumii;
int  flob;
char password[50];
time_t now;
time(&now);
epic:
printf("%s", ctime(&now));
cout<<"__________________________________\n";
cout<<"    Cyberscape beta OS v.1.0\n      \n";
cout<<"__________________________________\n";
cout<<"Created and developed by Cyberspace.This program may have some minor bugs.\n";
cout<<"Please report any bugs found to Cyberspace.";
cout<<"\n\n\n";
cout<<"_______________\n";
cout<<"Authentication\n";
cout<<"________________\n";
cout<<"Username: \n";
cin>>username ;
cin.ignore();
cout<<"Password: \n";
cin>>password;
cin.ignore();
if(strcmp(username,user)==0&&strcmp(password,pass)==0)
{ back:
cout<<"Loged in as superuser\n";
cout<<"Welcome to Cyberspace OS\nCommand: ";
cin>>wishes;
if(strcmp(wishes,calc)==0)
{
cout<<"Welcome to simple calculator\n";
cout<<"1.Addition\n";
cout<<"2.Substraction\n";
cout<<"3.Multiplication\n";
cout<<"4.Division\n";
cout<<"5.About calculator\n";
cin>>flob;
switch(flob)
{
             case 1 : 
                  cout<<"Enter 1st number : "; 
                  cin>>addnumi;
                  cout<<"Enter 2nd Number:";
                  cin>>addnumii;
                  cout<<"You're answer is "<<addnumi+addnumii<<endl;    
                  cin.get();
                  goto back;
                  break;
             case 2 : 
                  cout<<"Enter 1st number: ";
                  cin>>addnumi;
                  cout<<"Enter 2nd number: ";
                  cin>>addnumii;
             cout<<"You're answer is: "<<addnumi-addnumii<<endl;
             cin.get();
             goto back;
             break;
             case 3 :
                  cout<<"Enter 1st number: \n";
                  cin>>addnumi;
                  cout<<"Enter 2nd number: \n";
                  cin>>addnumii;
                  cout<<"You're answer is "<<addnumi*addnumii<<endl;
                  cin.get();
                  goto back;
                  break;
                  case 4 :  cout<<"Enter 1st number: \n";
                  cin>>addnumi;
                  cout<<"Enter 2nd number: \n";
                  cin>>addnumii;
                  cout<<"You're answer is "<<addnumi/addnumii<<endl;
                  cin.get();
                  goto back;
                  break;
                  case 5 : cout<<"The creator and developer of this calculator is Cyberspace.\nCyberspace is an";
                  cout<<" enthusiat but an intermediate C/C++ Programmer."<<endl;
                  cout<<"Cyberspace was the developer of the Simple OS\n\n\n";
                  cout<<"The program may be redistrubuted and used \nin other programs no copyright acts will be violanted\n\n";
                  cout<<"\n\n\n\n\n";
                  }   
                  cin.get();
                  goto epic;
                  }                  
if(strcmp(wishes,commands)==0)
{
{
int menu;
char epic[100];
int  start;
char command[50];
char deface[]="Quit";
char closing[]="index";
char server[]="Show";
char twocommand[50];
leg:
cout<<"_______________________________________________\n";        
cout<<"       ***Welcome to Cyberwarfare***           \n";
cout<<"      ~(By Cyberspace)~                        \n";     
cout<<"_______________________________________________\n";
cout<<"\nPlease enter you're name:  " ;
cin>>epic;
cin.ignore();
cout<<"Welcome  "<<epic<<"\n";
cout<<"Please select enter the number: \n";
cout<<"1.Start\n";
cout<<"2.Credits\n";
cin>>menu;
switch(menu)
{
case 1:
monster:
cout<<"         Cyberwar vista OS    \n";
time_t now;
time(&now);
printf("%s", ctime(&now));
cout<<"If you want an hint press cheat \n";                     
cout<<"  Enter password: ";
cin>>start;
cin.ignore ();
switch(start)
{
case 1: cout<<" The password is conecutive number from 1 to 3.  ";
cin.get();
goto monster;
break;
case 123: cout<<"You succsecfully loged on as Superuser\n";
cout<<"\n";
server:
cout<<"Enter Command: \n";
cin>>command;
if(strcmp(command,smd)==0)
{
cout<<"Sterling trojan released intel disrupeted servers partially damaged\n";
cin.get();
goto server;
if(strcmp(command,server)==0)
{
cout<<"Ip addresses:125.937.368 ; 98.678.156 ; 101.65.481 ;125.937.358 ; 99.678.156 ;\n121.65.481 ...\n";
cin.get();
goto server;
}
}        
if(strcmp(command,deface)==0)
{
cout<<"Network connection closed\n";
cout<<"Servers Offline\n";
cout<<"Next comand: \n";
cin>>twocommand;
if(strcmp(twocommand,closing)==0)
{
                                                      cout<<"Deface page uploaded\n";
                        cout<<"Welcome to the new homepage: \n";
                        cout<<"___________________________________________________________________________\n";
                        cout<<"Mozilla firefox-Cyberwar operating system.                                 \n";
                        cout<<"___________________________________________________________________________\n";
                        cout<<"www.cyberwarvistaos.net/index.php \n";           
                        cout<<"___________________________________________________________________________\n";
                        cout<<"#\n";
                        cout<<"#\n";
                        cout<<"#\n";
                        cout<<"#####\n";
                        cout<<"#   #  acked BY Cyberspace Please improve you're security\n";
                        cout<<"       This website is no longer safe all the information is gathered\n";
                        cout<<"      Notice to the public the admin information: Username:Cyberjunkie\n";
                        cout<<"                                                  password:1234567\n";
                        cout<<" The website network servers are offline(You cannot log in)\n........."; 
                        cout<<"_____________________________________________________________________________\n";                    
                     cin.get();
                     
                        
                     }
                     
                     }
cin.get();
break;
default: cout<<"System alert Ip taken: 127.0.0.1 System lockout for 101 hours ERROR.";
cin.get();
}
cin.get();
break;      
case 2: cout<<"Credits\n";
cout<<"Developer: Cybernet\n";
cout<<"beta tester:Cyberenet\n";
cout<<"ASCII artist :Cybernet\n";
cout<<"Bug reporter:Cybernet\n";
cout<<"_________________________________________________________________________\n";
cout<<"This game is under developement please report any bug to the creator";
cout<< "             \nCyberspace games present : Cyberwar\n             \n";
cout<< "              ______________________________________                    \n"; 
goto leg;
cin.get();
break;
default: cout<<"Fatal System error Cyberspace servers renconnecting....\nConnection failure System Virus detected swiping hard drive ";
cin.get();
break;
}
 
     
cin.get();
}

                             cin.get();
                             goto back;
                             }

cin.get();
}
}

