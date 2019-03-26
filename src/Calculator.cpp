#include "Calculator.h"
#include <iostream>
#include <cmath>

Calculator::Calculator()
{

}
Calculator::Calculator(int x)
{
   val = x;
   operand = NULL;
   rezultat = val;
}
int Calculator::GetRezultat()
{
    return rezultat;
}
void Calculator::Aduna(int x)
{
    rezultat += x;
}
void Calculator::Scadere(int x)
{
    rezultat -= x;
}
void Calculator::Inmultire(int x)
{
    rezultat *= x;
}
void Calculator::Impartire(int x)
{
    rezultat /= x;
}
void Calculator::Ridicarea_la_putere(int x)
{
    for(int i = 0; i < x; i++)
        rezultat *= rezultat;
}
void Calculator::Radical()
{
    rezultat = sqrt(rezultat);
}
int Calculator::Operatie(char sign, int x)
{
    if(sign == '+') Aduna(x);
    if(sign == '-') Scadere(x);
    if(sign == '*') Inmultire(x);
    if(sign == '/') Impartire(x);
    if(sign == '^') Ridicarea_la_putere(x);
    if(sign == 'R') Radical();

}
void Calculator::MemSet()
{
    rez_pastrat = rezultat;
}
void Calculator::MemClear()
{
    rez_pastrat = 0;
}
void Calculator::MemPlus()
{
    rez_pastrat += rezultat;
}
void Calculator::MemMinus()
{
    rez_pastrat -= rezultat;
}
void  Calculator::CurataRezultat()
{
    rezultat = 0;
}
Calculator::~Calculator()
{
   rezultat = 0;
}
