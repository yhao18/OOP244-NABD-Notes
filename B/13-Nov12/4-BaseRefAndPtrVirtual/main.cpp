#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sdds;
int main() {
   Animal A("something");
   Cat p("Pepper");
   Cat* c = new Cat("Fluffy");
   Animal* ap = new Cat("Tom");
   Animal& ar = p;
   A.sound();
   cout << "------------Using Cat ref: " << endl;
   p.act();
   p.move();
   p.sound();
   cout << "------------Using cat pointer: " << endl;
   c->act();
   c->move();
   c->sound();
   cout << "------------Using Animal reference: " << endl;
   ar.act();
   ar.move();
   ar.sound();
   cout << "------------Using Animal pointer: " << endl;
   ap->act();
   ap->move();
   ap->sound();
   delete c;
   delete ap;
   cout << "------------End of main" << endl;
   return 0;
}
