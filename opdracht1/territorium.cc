// Implementatie van klasse Territorium

#include "territorium.h"
#include "standaard.h"
#include <fstream>   // voor inlezen van bord
#include <iostream>

//*************************************************************************

Territorium::Territorium ()
{

}  // default constructor

//*************************************************************************

// Constructor met parameters.
Territorium::Territorium (int nwHoogte, int nwBreedte,
                 int kansNietBeschikbaar, int nwKeuzeAantalGeel, 
                 int nwKeuzeAantalBlauw)
{
if(nwHoogte<=MaxDimensie && nwBreedte<=MaxDimensie && nwHoogte>-1 && nwBreedte>-1){
  char A[nwHoogte][nwBreedte];
  for (int i = 0; i < nwBreedte; i++) {
    for (int j = 0; j < nwHoogte; j++) {
        A[i][j] = '.';
        cout << A[i][j] << " ";
    }
    cout << endl;
  }   // constructor met parameters
}
}
//*************************************************************************

bool Territorium::leesInBord (const char* invoernaam)
{

// TODO: implementeer deze memberfunctie

  return false;

}  // leesInBord

//*************************************************************************

bool Territorium::eindstand ()
{

// TODO: implementeer deze memberfunctie

  return false;

} // eindstand

//*************************************************************************

void Territorium::drukAf ()
{

// TODO: implementeer deze memberfunctie

}  // drukAf

//*************************************************************************

pair<int,int> Territorium::bepaalZet (int j)
{

// TODO: implementeer deze memberfunctie

  return GeenZet;

}  // bepaalZet

//*************************************************************************

bool Territorium::doeZet (int rij, int kolom)
{

// TODO: implementeer deze memberfunctie

  return false;

}  // doeZet

//*************************************************************************

bool Territorium::unDoeZet ()
{

// TODO: implementeer deze memberfunctie

  return false;

}  // unDoeZet

//*************************************************************************

int Territorium::besteScore (pair<int,int> &besteZet,
                             long long &aantalStanden)
{

// TODO: implementeer deze memberfunctie

  return 0;

}  // besteScore

//*************************************************************************

pair<int,int> Territorium::bepaalGoedeZet ()
{

// TODO: implementeer deze memberfunctie

  return GeenZet;

}  // bepaalGoedeZet

//*************************************************************************

int Territorium::bepaalGoedeScore ()
{

// TODO: implementeer deze memberfunctie

  return 0;

}  // bepaalGoedeScore

