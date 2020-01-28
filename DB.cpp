//-----------------------------------------------------------
// Author: Susan Gauch
// Purpose: Stores and retrieve information about universites
//-----------------------------------------------------------
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include "DB.h"

//---------- Constructors and Destructors -------------------
//-----------------------------------------------------------
// Name:  Default Constructor
// Sets all the instance variables to default values.
//-----------------------------------------------------------
DB::DB()
{
   numrecords = 0;
   for (int i=0; i<NUM_FIELDS; i++)
      fieldnames[i] = "";
}

//-----------------------------------------------------------
// Name:  Copy Constructor
// Copy instance variables from some other instances
//-----------------------------------------------------------
DB::DB(const DB &OtherDB)
{
   numrecords = OtherDB.numrecords;
   for (int i=0; i<NUM_FIELDS; i++)
      fieldnames[i] = OtherDB.fieldnames[i];
}

//-----------------------------------------------------------
// Name:  Destructor
// This does nothing since there are no dynamically allocated variables.
//-----------------------------------------------------------
DB::~DB()
{
}

//------------------ Mutators -------------------
//-----------------------------------------------------------
// Name: Open 
// Open and use the config file; open the data file
//-----------------------------------------------------------

void DB::create()
{
fstream opr1; 
opr1.open("Fortune_500_HQ.csv", ios::in); 
if(!opr1.is_open()) std::cout << "ERROR: File Open" << '\n';


//file creation
string  filename; // the name of the file
cout << "Please enter a file name: ";
getline( cin, filename );

datafile = filename + ".data";
configfile = filename + ".config";
overflowfile = filename + ".overflow";

ofstream opr2(datafile.c_str()); 
//opr3.open(datafile.c_str(), ios::in); 

ofstream opr3(configfile.c_str()); 
//opr3.open(configfile.c_str(), ios::in); 


ofstream opr4(overflowfile.c_str()); 
//opr4.open(overflowfile.c_str(), ios::in); 
/*
while(opr1.good())
{


}
*/

opr1.close();
opr2.close();
opr3.close();
opr4.close();
}





















































/*
//-----------------------------------------------------------
// Name: UpdateRecord
//-----------------------------------------------------------
void DB::UpdateRecord()
{

}

//-----------------------------------------------------------
// Name: AddRecord
//-----------------------------------------------------------
void DB::AddRecord()
{

    
}

//-----------------------------------------------------------
// Name: DeleteRecord
//-----------------------------------------------------------
void DB::DeleteRecord()
{
}

//-----------------------------------------------------------
// Name:  Quit 
//-----------------------------------------------------------
void DB::Quit()
{
  
}


//------------------ Accessors -------------------
//-----------------------------------------------------------
// Name: DisplayRecord
//-----------------------------------------------------------
void DB::DisplayRecord()
{

}

//-----------------------------------------------------------
// Name: CreateReport
//-----------------------------------------------------------
void DB::CreateReport() 
{

}


//------------------  Other Useful Functions ----------------
//-----------------------------------------------------------
// Name:  FindRecord
//-----------------------------------------------------------
bool DB::FindRecord(const string Key, Record &Rec, int &Location) 
{
  
}

//-----------------------------------------------------------
// Name:  GetRecord
//-----------------------------------------------------------
Record DB::GetRecord(const int RecordNum) 
{

  
}

//-----------------------------------------------------------
// Name:  WriteRecord
//-----------------------------------------------------------
void DB::WriteRecord(const int RecordNum, Record &Rec) 
{
   
}

//-----------------------------------------------------------
// Name:  RewriteDB
//-----------------------------------------------------------
void DB::RewriteDB(Record &Rec) 
{

}
*/