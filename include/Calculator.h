#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{

    int val, rezultat;
    int rez_pastrat; ///variabila care retine rezulatul in memorie; folosita la functiile MemSet, MemClear, MemPlus, MemMinus
    char operand;
    public:
        Calculator();
         Calculator(int);
         int GetRezultat();
         void Aduna(int);
         void Scadere(int);
         void Inmultire(int);
         void Impartire(int);
         void Ridicarea_la_putere(int);
         void Radical();
         int Operatie(char, int);
         void MemSet();
         void MemClear();
         void MemPlus();
         void MemMinus();
         void CurataRezultat();
         friend void Afisare_Rezultat();
         ~Calculator();


};

#endif // CALCULATOR_H
