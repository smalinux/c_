#ifndef OOP_H
#define OOP_H

/*
Continue: ?
https://stackoverflow.com/a/17622474/5688267
https://stackoverflow.com/q/840501/5688267
https://stackoverflow.com/q/1350376/5688267
https://stackoverflow.com/q/9410/5688267
*/



#include <stdio.h>
#include <stdlib.h>

typedef struct Greet_ Greet_Class;

/* Class attributes */
struct Greet_attr {
   int x;
   int y;
   int z;
   /* etc ... */
};

/* Class methods */
struct Greet_Interface {
   int (*hii)(Greet_Class*);
   int (*bye)(Greet_Class*);
   int (*cheers)(Greet_Class*);
   void (*setter)(Greet_Class*);
   int (*getter)(Greet_Class*);
};

/* Class */
struct  Greet_ {
   /* external Class attributes */
   struct  Greet_attr ttable;
   /* internal Class attributes */
   int xx;
   /* Class methods */
   const struct Greet_Interface * const vtable;
};

/* implementations */
int say_hii(Greet_Class* g) {
   puts("hii");
   return 0;
}

void Greet_setter(Greet_Class* g) {
   g->xx = 2021;
   g->ttable.x = 2008;
}

int Greet_getter(Greet_Class* g) {
   //return g->xx;
   return g->ttable.x = 2008;
}

#endif
