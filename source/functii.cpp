#include <iostream>
#include <fstream>
#include "..//source//functii.h"
#include <conio.h>
using namespace std;



void adauga_persoana(persoane p[],int &peopleindatabase)
{
      cout<<"scrie numele\n";
   cin>>p[peopleindatabase].nume;
      cout<<"scrie prenumele\n";
   cin>>p[peopleindatabase].prenume;
     cout<<"scrie varsta\n";
   cin>>p[peopleindatabase].varsta;
     cout<<"scrie telefon\n";
   cin>>p[peopleindatabase].telefon; 
      cout<<"scrie email\n";
   cin>>p[peopleindatabase].email;
   peopleindatabase++;
}

void ask_for_enter()
{
    do
    {
        cout<<"apasa enter\n";
    } while (getch()!=13);
    
}

void arata_persoanele(persoane p[],int &peopleindatabase)
{
if (peopleindatabase>0)
{
  for (int i = 0; i < peopleindatabase; i++)
  { 
    cout<<"numar persoana : "<<i+1<<endl;
    cout<<"numele de familie : "<<p[i].nume<<endl;
    cout<<"prenume : "<<p[i].prenume<<endl;
    cout<<"varsta : "<<p[i].varsta<<endl;
    cout<<"telefon : "<<p[i].telefon<<endl;
    cout<<"email : "<<p[i].email<<endl;
    cout<<endl<<endl;
  }
  




}
else
{
  cout<<"nu sunt persoane in lista\n";
}


 
  


}

void salvare(persoane p[],int &peopleindatabase)
{
  ofstream file;
  file.open("database.txt");

  if (file.is_open())
  {  file<<peopleindatabase<<endl;
    for (int i = 0; i < peopleindatabase; i++)
    {
   file<<p[i].nume<<endl;
   file<<p[i].prenume<<endl;
   file<<p[i].varsta<<endl;
   file<<p[i].telefon<<endl;
   file<<p[i].email<<endl;
    }
  }
  else
  {
  cout<<"nu exista fisier\n";
  }
file.close();


}

void incarcarepersoane(persoane p[],int &peopleindatabase)
{
  int i=0;
  ifstream file;
  file.open("database.txt");
  if (file.is_open())
  {
    file>>peopleindatabase;
    do
    {
   file>>p[i].nume;
   file>>p[i].prenume;
   file>>p[i].varsta;
   file>>p[i].telefon;
   file>>p[i].email;
    i++;
    } while (!file.eof());
    
  }
  else
  {
    cout<<"fisierul nu exista\n";
  }
  file.close();
}

void cautare(persoane p[],int&peopleindatabase)
{
  string nume;
  cout<<"scrie prenumele sau numele de familie pe care-l cauti\n";
  cin>>nume;
  if (!peopleindatabase<=0)
  {
   for (int i = 0; i < peopleindatabase; i++)
   { 
    if (nume==p[i].nume||nume==p[i].prenume)
    {
       cout<<"numar persoana : "<<i+1<<endl;
       cout<<"numele de familie : "<<p[i].nume<<endl;
       cout<<"prenume : "<<p[i].prenume<<endl;
       cout<<"varsta : "<<p[i].varsta<<endl;
       cout<<"telefon : "<<p[i].telefon<<endl;
       cout<<"email : "<<p[i].email<<endl;
       cout<<endl<<endl;
    }
    




   }
   
    




  }
  else
  {
    cout<<"nu ai persoane in lista\n";
  }
  
  



}

void sterge(persoane p[],int&peopleindatabase)
{
  int index;
  cout<<"care numarul persoanei pe care vrei s-o stergi?\n";
  cin>>index;
if (!peopleindatabase<=0)
{
  for (int i = index; i < peopleindatabase; i++)
  {
    p[i-1].nume=p[i].nume;
    p[i-1].prenume=p[i].prenume;
    p[i-1].varsta=p[i].varsta;
    p[i-1].telefon=p[i].telefon;
    p[i-1].email=p[i].email;
  }
  peopleindatabase--;
  



}
else
  {
    cout<<"nu ai persoane in lista\n";
  }
  

   salvare(p,peopleindatabase);
}

void inregistrare(conturi useri[],int&useridata)
{
ofstream file;
file.open("conturi.txt");
if (file.is_open())
{
  file<<useridata<<endl;
  for (int i = 0; i < useridata; i++)
  { 
    
    cout<<"scrie username\n";
    cin>>useri[i].username;
   
   cout<<"scrie parola\n";
   cin>>useri[i].parola;
   




   file<<useri[i].username<<endl;
   file<<useri[i].parola<<endl;
   cout<<"inregistrare reusita\n";
  }
  useridata++;
  



}
else
{
  cout<<"fisierul nu exista\n";
}



}

void logare(conturi useri[],int&useridata,bool &logat)
{
  ifstream file;
file.open("conturi.txt");
 string username;
 string parola;
cout<<"scrie username\n";
cin>>username;
cout<<"scrie parola\n";
cin>>parola;
int index=0;


if (file.is_open())
{
      file>>useridata;
   do
  {  file>>useri[index].username;
     file>>useri[index].parola;
     
      
     
     
   for (int i = 0; i < useridata; i++)
   {

    if (username==useri[i].username&&parola==useri[i].parola)
    {
      cout<<"succes\n";
       logat=true;
    }
    
   }
   index++;
   } while (file.eof());
}
    else
   {
  cout<<"nu exista un astfel de utilizator\n";
   logat=false;
   }
}