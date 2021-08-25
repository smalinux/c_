#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct patient
{
   int id;
   char name[25];
   char name1[25];
   float sugar_level;
   float weight;
   float hight;
};

int main () {
loop:
   patient s;
   int a, b, m;
   cout <<
      "\n\t1.Add patient record\n\t"
      "2.View patient record\n\t"
      "3.Delete patient record\n\t"
      "4.Edite patient record\n\t"
      "5.search by ID\n\t"
      "Choice is :";
   cin >> a;
   switch (a) {
   case 1:
   {
      cout << "Enter patient ID :";
      cin >> s.id;
      cout << "\n\t Enter patient first name :";
      cin >> s.name;
      cout << "\n\t Enter  patient Last name :";
      cin >> s.name1;

      cout << "\n\t Enter  patient sugar level :";
      cin >> s.sugar_level;
      cout << "\n\t Enter  patient weight :";
      cin >> s.weight;
      cout << "\n\t Enter  patient hight :";
      cin >> s.hight;

      ofstream sdata;
      sdata.open ("patient.txt", ios::app);
      sdata << endl;
      sdata << s.id;
      sdata << endl;
      sdata << s.name;
      sdata << endl;
      sdata << s.name1;
      sdata << endl;

      sdata << s.sugar_level;
      sdata << endl;
      sdata << s.hight;
      sdata << endl;
      sdata << s.weight;
      sdata << endl;
      sdata << endl;
      sdata << endl;

      sdata.close ();
      goto loop;
      break;

   }

   case 2:
   {
      ifstream tdata;

      tdata.open ("patient.txt", ios::app);
      tdata >> s.id;
      tdata >> s.name;
      tdata >> s.name1;

      tdata >> s.sugar_level;
      tdata >> s.hight;
      tdata >> s.weight;


      while (!tdata.eof ())
      {
         cout << "\n\t=====================\n";
         cout << "\n\t patient ID :" << s.id;
         cout << "\n\t patient first name :" << s.name;
         cout << "\n\t  patient Last name :" << s.name1;
         cout << "\n\t  patient sugar level :" << s.sugar_level;
         cout << "\n\t  patient weight :" << s.weight;
         cout << "\n\t  patient hight :" << s.hight;
         cout << "\n";

         tdata >> s.id;
         tdata >> s.name;
         tdata >> s.name1;
         tdata >> s.sugar_level;
         tdata >> s.hight;
         tdata >> s.weight;
      }
      tdata.close ();
      goto loop;
      break;
   }

   case 3:
   {
      cout << "\n\tEnter patient ID you want to delete record :";
      cin >> b;
      ifstream d;
      d.open ("patient.txt");
      ofstream e;
      e.open ("new.txt");
      d >> s.id;
      d >> s.name;
      d >> s.name1;
      d >> s.sugar_level;
      d >> s.hight;
      d >> s.weight;

      while (!d.eof ()) {
         if (s.id != b) {

            e << s.id;
            e << endl;
            e << s.name;
            e << endl;
            e << s.name1;
            e << endl;
            e << s.sugar_level;
            e << endl;
            e << s.hight;
            e << endl;
            e << s.weight;
            e << endl;

         } else {
            cout << "\n\tRecored deleted";
         }
         d >> s.id;
         d >> s.name;
         d >> s.name1;
         d >> s.sugar_level;
         d >> s.hight;
         d >> s.weight;
      }
      e.close ();
      d.close ();
      if (remove ("patient.txt") != 0) {
         cout << "\n\tfile doesn't remove";
      } else {
         cout << "\n\t ok";
      } if (rename ("new.txt", "patient.txt") != 0) {
         cout << "\n\tfile doesn't rename";
      } else {
         cout << "\n\t ok";
      }
      goto loop;
      break;
   }

   case 4:
   {
      int g;
      char h[25], j[25];
      float q;
      float w;
      float t;
      cout << "\n\tpatient ID is:";
      cin >> b;
      ifstream d;
      d.open ("patient.txt");
      ofstream e;
      e.open ("new.txt");
      d >> s.id;
      d >> s.name;
      d >> s.name1;
      d >> s.sugar_level;
      d >> s.hight;
      d >> s.weight;
      while (!d.eof ())
      {
         if (s.id != b) {
            e << endl;
            e << s.id;
            e << endl;
            e << s.name;
            e << endl;
            e << s.name1;
            e << endl;
            e << s.sugar_level;
            e << endl;
            e << s.hight;
            e << endl;
            e << s.weight;
            e << endl;
         } else {
            cout << "\n\Enter new ID :";
            cin >> g;
            cout << "\n\t Enter patient first name :";
            cin >> j;
            cout << "\n\t Enter patient Last name :";
            cin >> h;
            cout << "\n\t  Enter  patient sugar level :";
            cin >> q;
            cout << "\n\t  Enter  patient weight :";
            cin >> w;
            cout << "\n\t  Enter  patient hight :";
            cin >> t;
            e << endl;
            e << g;
            e << endl;
            e << h;
            e << endl;
            e << j;
            e << endl;
            e << w;
            e << endl;
            e << t;
            e << endl;
            e << q;
            e << endl;
         }
         d >> s.id;
         d >> s.name;
         d >> s.name1;
         d >> s.sugar_level;
         d >> s.hight;
         d >> s.weight;
      }

      e.close ();
      d.close ();
      if (remove ("patient.txt") != 0) {
         cout << "\n\tfile doesn't remove";
      } else {
         cout << "\n\t ok";
      } if (rename ("new.txt", "patient.txt") != 0) {
         cout << "\n\tfile doesn't rename";
      } else {
         cout << "\n\t ok";
      }
      goto loop;
      break;
   }
   case 5:
   {
      int m;
      bool found = 0;
      fstream k;
      k.open ("patient.txt", ios::in);
      cout << "patient ID you want :" << endl;
      cin >> m;
      while (k >> s.id >> s.name >> s.name1 >> s.sugar_level >> s.hight >> s.weight) {
         if (m == s.id) {
            found = 1;
            cout << "first name is:" << s.name << endl;
            cout << " last name is: " << s.name1 << endl;
            cout << " patient sugar level is :" << s.sugar_level << endl;
            cout << " patient weight is :" << s.weight << endl;
            cout << " patient hight is:" << s.hight << endl;
         } else {
               continue;
         }
         k.close ();
      }
      if (!found)
         cout << "\n>>>>>> there is no records for this id <<<<<<";
      goto loop;
      break;
   }
   }
}
