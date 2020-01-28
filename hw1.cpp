//----------------------------------------------------
// Author:     Susan Gauch
//----------------------------------------------------
#include <iostream>
#include <string>
#include "DB.h"
using namespace std;

//----------------------------------------------------
// Purpose: Find out what the user wants to do.
// Arguments: None.
// Returns: A number that indicates the users choice.
//----------------------------------------------------
int getChoice()
{
int Choice;
   do 
   {
      cout << "\n\nEnter '1' create the database\n"
           << "      '2' open the database\n"
           << "      '3' to display a record\n"
           << "      '4' to update a record\n"
           << "      '5' to create a report\n"
           << "      '6' to add a record\n"
           << "      '7' to delete a record\n"
           << "      '8' to quit the program\n"
           << "Selection: ";
      cin >> Choice;
   } while (Choice < 1 || Choice > 7);
   return Choice;
}

int main()
{
DB fortune500;
fortune500.create();
/*
int Choice;

   Choice = getChoice();
   cout << "You picked " << Choice << endl;
   while(Choice != 7)
   {
      switch (Choice)
      {
         case 1:   fortune500.create(); break; 
         /*
         case 2:   Universities.Open(); break;
         case 3:   Universities.DisplayRecord(); break;
         case 4:   Universities.UpdateRecord(); break;
         case 5:   Universities.CreateReport(); break;
         case 6:   Universities.AddRecord(); break;
         case 7:   Universities.DeleteRecord(); break;
         
      }



      // Ask for next choice
      Choice = getChoice();
      cout << "You picked " << Choice << endl;
   }
//   fortune500.Quit(); 
*/
   return 0;
}
