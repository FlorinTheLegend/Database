#include <iostream>
#include <fstream>
#include "..//source//functii.h"
#include "..//source//functii.cpp"
#include <unistd.h>
using namespace std;
//mainnnnnnn

int main()
{
int peopleindatabase=0;
int useridata=0;
persoane p[102];
char alegere;
conturi useri[20];
bool logat=false;

  
    do
   {  
       cout<<"     |    Welcome to the Database!! \t  | 7.logare | 8.inregistrare| \n";   
  cout<<"\t |                     p:"<<peopleindatabase<<" |   "<<endl;
  cout<<"\t |     1.adauga persoane   |\t\n";
  cout<<"\t |                         |\t\n";
  cout<<"\t |  2.arata toate persoane |\t\n";
  cout<<"\t |                         |\t\n";
  cout<<"\t |        3.salvare        |\t\n";
  cout<<"\t |                         |\t\n";
  cout<<"\t |    4.incarcare lista    |\t\n";
  cout<<"\t |                         |\t\n";
  cout<<"\t |        5.cautare        |\t\n";
  cout<<"\t |                         |\t\n";
  cout<<"\t |    6.sterge din lista   |\t\n";
  cout<<"\t _________Logat: "<<logat<<"_________\n";
    
  
    
    cout<<"alege un numar\n";
    cin>>alegere;
        

        switch (alegere)
        {
         case '1':
                 if (logat==true)
                 {
                 adauga_persoana(p,peopleindatabase);
                 break;
                 }
                 else
                 {
                    system("cls");
                    cout<<"trebuie sa te loghezi intai\n";
                    sleep(2);
                    system("cls");
                    main();
                    break;
                 }
                 
                 break;
         case '2':
                 if (logat==true)
                 {
                 arata_persoanele(p,peopleindatabase);
                 break;
                 }
                 else
                 {
                    system("cls");
                    cout<<"trebuie sa te loghezi intai\n";
                    sleep(2);
                    system("cls");
                    main();
                    break;
                 }
                 
                 break;
         case '3':
                 if (logat==true)
                 {
                 salvare(p,peopleindatabase);
                 break;
                 }
                 else
                 {
                    system("cls");
                    cout<<"trebuie sa te loghezi intai\n";
                    sleep(2);
                    system("cls");
                    main();
                    break;
                 }
                 
                 break;
         case '4':
                   if (logat==true)
                 {
                 incarcarepersoane(p,peopleindatabase);
                 break;
                 }
                 else
                 {
                    system("cls");
                    cout<<"trebuie sa te loghezi intai\n";
                    sleep(2);
                    system("cls");
                    main();
                    break;
                 }
                 
                 break;
         case '5':
                  if (logat==true)
                 {
                 cautare(p,peopleindatabase);
                 break;
                 }
                 else
                 {
                    system("cls");
                    cout<<"trebuie sa te loghezi intai\n";
                    sleep(2);
                    system("cls");
                    main();
                    break;
                 }
                 
                 break;
         case '6':
                 if (logat==true)
                 {
                 sterge(p,peopleindatabase);
                 break;
                 }
                 else
                 {
                    system("cls");
                    cout<<"trebuie sa te loghezi intai\n";
                    sleep(2);
                    system("cls");
                    main();
                    break;
                 }
                 
                 break;
        case '7':
                logare(useri,useridata,logat);
                break;
        case '8':
                inregistrare(useri,useridata);
                break;
                
        
        default: 
                 cout<<"introdu' un numar\n";
                 break;
        }
        //ask_for_enter();
        system("cls");
       

      
   

  
 }while (alegere!=27); 













}