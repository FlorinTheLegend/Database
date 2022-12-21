
#ifndef FUNCTII_H_
#define FUNCTII_H_


#include <iostream>
#include <fstream>
#include <conio.h>


using namespace std;

struct persoane
{
  string nume,prenume,varsta,telefon,email;

};
struct conturi
{
    string username;
    string parola;
};


void ask_for_enter();

void adauga_persoana(persoane[],int &);

void arata_persoanele(persoane[],int &);

void salvare(persoane[],int&);

void incarcarepersoane(persoane[],int &);

void cautare(persoane[],int&);

void sterge(persoane [],int&);

void logare(conturi[],int&,bool&);

void inregistrare(conturi[],int&);

#endif /* FUNCTII_H_ */