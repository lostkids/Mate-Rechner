// created by @fingadumbledore
// Eine Mateflasche = 500 Ml
// Das Projekt ist nur zum Spaß und Sollte nicht Ernst genommen werden
// Der Konsum von zu viel Zucker und Koffein ist nicht Gesund und kann Gesundheitliche Schäden bewirken
// Version 1.3
#include <iostream>
using namespace std;
int main(){
int  mate, Koffeingehalt, marke, kmenge, ergebnis;
string input;
string markenname;

cout << "  **     **     **                   **                        \n";
cout << "  **     **     **        ++         **                        \n";
cout << " ****   ****   ****       ++        ****                       \n";
cout << " ****   ****   ****    ++++++++     ****                       \n";
cout << " ****   ****   ****       ++        ****                       \n";
cout << " ****   ****   ****       ++        ****                       \n";
cout << "Dieser Rechner weiß wie viel Mate du am Tag brauchst!\nkennst du die anzahl? J/N\ninput:";
cin >> input;
if (input == "J" || input == "j")
{
    system("clear");
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
else if (input == "N" || input == "n")
{
    system("clear");
    cout << "Bitte gebe an wie viel Koffein du heute zu dir nehmen willst (in mg).\ninput: ";
    cin >> kmenge;
    cout << "Folgende Marken stehen zu verfügung\n";
    cout << "[1] Mio Mio\n[2] Club Mate\n[3] Flora Mate\ninput: ";
    cin >> marke;
    switch (marke)
    {
    case 1:
        Koffeingehalt = 100;
        markenname = "Mio Mio";
        break;
    case 2:
        Koffeingehalt = 100;
        markenname = "Club Mate";
        break;
    case 3:
        Koffeingehalt = 90;
        markenname = "Flora Mate";
        break;

    default:
        break;
    }
    ergebnis = kmenge / Koffeingehalt;
    cout << "Für deinen Tag benötigst du " << ergebnis << " Flaschen " << markenname ;
    cout <<"\n";
    cout <<"--------------------------------[Hinweis]--------------------------------\n";
    cout <<"Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfolen\n";
    cout <<"\n";

}
else 
    cout << "Error";

}
