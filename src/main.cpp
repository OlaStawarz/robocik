/*!
 * \file
 * \brief Zawiera wywołanie funkcji main
 *
 * Główny moduł programu wraz z wywołaniem funkcji main.
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include "lacze_do_gnuplota.hh"
#include "ObiektGraficzny.hh"
#include "Sciezka.hh"
#include "Robot.hh"
#include "Scena.hh"

using namespace std;



int main()
{
    char                  Znak;
    Scena scena;
    char wybor;
    int kat;
 cout << "Nacisnij ENTER, aby kontynuowac" << endl;
     cin >> noskipws >> Znak;
 
     //scena.ObrotRobotem(45);

    cout << "kontrol2\n";
 cout << "Nacisnij ENTER, aby kontynuowac" << endl;
     cin >> noskipws >> Znak;
 
    scena.RuchRobotem(100);
  cout << "Nacisnij ENTER, aby kontynuowac" << endl;
     cin >> noskipws >> Znak;

     scena.ObrotRobotem(60);
     cout << "Nacisnij ENTER, aby kontynuowac" << endl;
     cin >> noskipws >> Znak;

     cout << "Menu użytkownika" << endl;
     cout << "o - obrot robota" << endl;
     cout << "j - jazda na wprost" << endl;
     cout << "w - wyswietl ponownie menu" << endl << endl;
     cout << "k - zakoncz dzialanie programu" << endl;

     cout << "Twoj wybor (w - wyswietl menu)> ";
     cin >> wybor;
     
     switch(wybor)
       {
       case 'o':
	 {
	   cout << "Podaj wartosc kata obrotu robota w stopniach" << endl;
	   cout << "Kat obrotu: ";
	   cin >> kat;
	 }
       }
	 
    /* PzG::LaczeDoGNUPlota  Lacze;  // Ta zmienna jest potrzebna do wizualizacji
                                // rysunku prostokata
  ObiektGraficzny       Ob;

  Sciezka sciezka;
  Wektor2D punkt(2,3);
  Robot robot;


   //-------------------------------------------------------
   //  Wspolrzedne wierzcholkow beda zapisywane w pliku "prostokat.dat"
   //  Ponizsze metody powoduja, ze dane z pliku beda wizualizowane
   //  na dwa sposoby:
   //   1. Rysowane jako linia ciagl o grubosci 2 piksele
   //
  Lacze.DodajNazwePliku("figury/robot.dat",PzG::RR_Ciagly,2);
   //
   //  Ustawienie trybu rysowania 2D, tzn. rysowany zbiór punktów
   //  znajduje się na wspólnej płaszczyźnie. Z tego powodu powoduj
   //  jako wspolrzedne punktow podajemy tylko x,y.
   //
  Lacze.ZmienTrybRys(PzG::TR_2D);

  
  if (!robot.ZapiszDoPliku("figury/robot.dat")) return 1;
  Lacze.Rysuj(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
  cout << "Nacisnij ENTER, aby kontynuowac" << endl;
     cin >> noskipws >> Znak;
 
   //----------------------------------------------------------
   // Zmienia pozycje obiektu i zapisuje współrzędne jego wierzchołków
   //
  robot.ZmienPolozenie(200,100);
  if (!robot.ZapiszDoPliku("figury/robot.dat")) return 1;
  Lacze.Rysuj(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
  cout << "Nacisnij ENTER, aby kontynuowac" << endl;
  cin >> noskipws >> Znak;
    */
}

    
