// created by @fingadumbledore
// Eine Mateflasche = 500 Ml
// Das Projekt ist nur zum Spaß und Sollte nicht Ernst genommen werden
// Der Konsum von zu viel Zucker und Koffein ist nicht Gesund und kann Gesundheitliche Schäden bewirken
// Version 1.2
#include <iostream>
using namespace std;
int main(){
int  mate, Koffeingehalt, marke ;
 
cout << "  **     **     **                   **                        \n";
cout << "  **     **     **        ++         **                        \n";
cout << " ****   ****   ****       ++        ****                       \n";
cout << " ****   ****   ****    ++++++++     ****                       \n";
cout << " ****   ****   ****       ++        ****                       \n";
cout << " ****   ****   ****       ++        ****                       \n";
cout << "Hallo ich bin dein Persönlicher Mate Rechner.\n";
cout << "****************************************************************\n";
cout << "* [i] Bitte gib die Anzahl der Mateflaschen an die du brauchst *\n";
cout << "****************************************************************\n";
cout <<"\n";
cout <<"input: ";
cin >> mate;
cout << "Marke [1]Mio Mio Mate [2]Club Mate [3]Flora Mate\n";
cout << "input: ";
cin >> marke;
if (mate < 2){
   cout <<"Für einen erfolgreichen Tag benötigst du mehr als 1 Flasche Mate";
   }
else if (mate > 1){
    mate = mate +1;
    switch (marke)
    {
    case 1:
        Koffeingehalt = mate * 100;
        break;
    case 2:
        Koffeingehalt = mate * 100;
        break;
    case 3:
        Koffeingehalt = mate * 90;
        break;
    
    default:
        cout << "Dies ist keine gute Sorte\n";
        break;
    }
    
cout <<"du brauchst " <<mate <<" Flaschen Mate!!!\n";
cout <<"der Koffeingehaltfür deine "<< mate<< " Flaschen liegt bei "<< Koffeingehalt << " mg\n";
cout <<"\n";
cout <<"Ein Enym sagte: du brauchst immer eine Mateflasche mehr als du hast\n";
}
cout <<"\n";
cout <<"--------------------------------[Hinweis]--------------------------------\n";
cout <<"Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfolen\n";
cout <<"\n";


}
