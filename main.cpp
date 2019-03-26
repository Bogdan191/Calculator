#include <iostream>
#include <Calculator.h>

using namespace std;

void Afisare_Rezultat(Calculator C) ///Functie friend cu clasa Calculator ce afiseaza rezultatul calculului
{
    cout << "Rezultatul este " << C.GetRezultat() << "\n";
}
int main()
{ int x, y;
    char op = ' ';;
    cout << "Calculator:\n";
    cout << "Introduceti primul numar: "; cin >> x;
    Calculator C(x);
    while(op != '.') ///. - simbolul care determina incheierea programului
    {
        cout << "Introduceti semnul operatiei(R - radical) sau . pt incheiere: "; cin >> op;
        if(op == 'R') /// R - simbol pentru radical
            C.Operatie(op, 0);
        else if(op == 'S') /// S - reprezinta simbolul pentru functia MemSet()
        {
            C.MemSet();
            cout << "Rezultatul curent este pastrat in memorie!\n";
        }
        else if(op == 'C') ///C - simbolul pentru MemClear()
        {
            C.MemClear();
            cout << "Rezultatul din memorie a fost ster!\n";
        }
        else if(op == 'P')  ///p - simbolul pentru MemPlus()
        {
            C.MemPlus();
            cout << "Rezultatul din memorie a fost adunat cu rezultatul curent (" << C.GetRezultat() << ")!\n";
        }
        else if(op == 'M')  ///M - simbolul pentru MemMinus()
        {
            C.MemMinus();
            cout << "Rezulatul din memorie a fost scazut cu rezultatul curent (" << C.GetRezultat() << ")!\n";
        }
        else if(op != '.') /// . - simbolul pentru incheiere program
        {
            cout << "Introduceti al doilea numar: "; cin >> y;
            C.Operatie(op, y);
        }
    }

    Afisare_Rezultat(C);


    return 0;
}
