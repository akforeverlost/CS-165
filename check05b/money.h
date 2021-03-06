/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int _dollars;
   int _cents;

public:
   Money();
   Money(int value);
   Money(int dollarValue, int centValue);
   void prompt();
   void display() const;
   int getDollars() const;
   void setDollars(int value);
   int getCents() const;
   void setCents(int value);
};

#endif
