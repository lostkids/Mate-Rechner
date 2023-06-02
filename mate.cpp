// created by @fingadumbledore
// Eine Mateflasche = 500 Ml
// Das Projekt ist nur zum Spaß und Sollte nicht Ernst genommen werden
// Der Konsum von zu viel Zucker und Koffein ist nicht Gesund und kann Gesundheitliche Schäden bewirken
// Version 1.3
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

enum MateSorte {
	MioMio = 1,
	Club = 2,
	Buenos = 3,
	MateMate = 4,
	Flora = 5,
	Mate1337 = 6,
	Charitea = 7,
	RobinSchulzxMyMate = 8,
};

std::tuple<string, int> get_markenname_und_koffeingehalt(MateSorte marke) {
	int Koffeingehalt;
	string markenname;
	int marke_id;
        cout << "Folgende Marken stehen zu verfügung\n";
        cout << "[1] Mio Mio\n[2] Club Mate\n[3] Flora Mate\n[4] Mate Mate\n[5] Buenos Mate\n[6] 1337 Mate\n[7] Charitea\n\n[8] Robin Schulz X My Mate\ninput: ";
        cin >> marke_id;
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
        case 4: 
            Koffeingehalt = 150;
            markenname = "Mate Mate";
            break;
        case 5: 
            Koffeingehalt = 100;
            markenname = "Buenos Mate";
            break;
        case 6: 
            Koffeingehalt = 145;
            markenname = "1337 Mate";
            break;
        case 7: 
            Koffeingehalt = 0;
            markenname = "Charitea";
            break;
        case 8: 
            Koffeingehalt = 72;
            markenname = "Robin Schulz X My Mate";
            break;

        default:
            break;
        }

	return std::make_tuple(markenname, Koffeingehalt);
}

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
        cout << "****************************************************************\n" 
             << "* [i] Bitte gib die Anzahl der Mateflaschen an die du brauchst *\n" 
             << "****************************************************************\n\n" 
             << "input: ";
        cin >> mate;
        if (mate < 2){
            cout << "Für einen erfolgreichen Tag benötigst du mehr als 1 Flasche Mate";
            return 0;
        }
	/*
        cout << "Marke [1] Mio Mio Mate [2] Club Mate [3] Buenos Mate [4] Mate Mate [5] Flora Mate [6] 1337 Mate [7] Charitea [8] Robin Schulz X My Mate \n"
        << "input: ";
        cin >> marke;
            mate = mate +1;
            switch (MateSorte(marke))
            {
                case MioMio:
                case Club:
                case Buenos:
                    Koffeingehalt = mate * 100;
                    break;
                case MateMate:
                    Koffeingehalt = mate * 150;
                    break;
                case Flora:
                    Koffeingehalt = mate * 90;
                    break;
                case Mate1337:
                    Koffeingehalt = mate * 145;
                    break;
                case Charitea:
                    Koffeingehalt = mate * 0;
                    break;
                case RobinSchulzxMyMate:
                    Koffeingehalt = mate * 72;
                    break;
                default:
                    cout << "Dies ist keine gute Sorte\n";
                    break;
            }
	    */

	std::tuple<string, int> marke = get_markenname_und_koffeingehalt(MateSorte::Club);

	Koffeingehalt = std::get<1>(marke);
	markenname = std::get<0>(marke);

        cout <<"du brauchst " <<mate <<" Flaschen Mate!!!\n"
             <<"der Koffeingehaltfür deine "<< mate<< " Flaschen liegt bei "<< Koffeingehalt << " mg.\n\n"
             <<"Ein hyperbel sagte: du brauchst immer eine Mateflasche mehr als du hast\n\n"
             <<"--------------------------------[Hinweis]--------------------------------\n"
             <<"Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfolen\n\n";
    }
    
    else if (input == "N" || input == "n")
    {
        system("clear");
        cout << "Bitte gebe an wie viel Koffein du heute zu dir nehmen willst (in mg).\ninput: ";
        cin >> kmenge;
	std::tuple<string, int> marke = get_markenname_und_koffeingehalt(MateSorte::Club);

	markenname = std::get<0>(marke);
	Koffeingehalt = std::get<1>(marke);

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

