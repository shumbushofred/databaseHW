//-----------------------------------------------------
// Author:   Susan Gauch
// Purpose:  The database of formatted records
//-----------------------------------------------------


using namespace std;

class DB
{
   public:
      // Constructors and Destructors
      DB();    // Default Constructor
      DB(const DB &OtherDB);  // Copy Constructor 
      ~DB();   // Destructor
        
      // Mutators
    void create();
     /*
      bool Open();
      void UpdateRecord();
      void AddRecord();
      void DeleteRecord();
      void Quit();
   
      // Accessors
      void DisplayRecord();
      void CreateReport();
	
   protected:
      // Other Useful Methods
      bool FindRecord(const string Key, Record &Rec, int &Location);
      Record GetRecord(const int RecordNum);
      void WriteRecord(const int RecordNum, Record &Rec);
      void RewriteDB(Record &Rec);
*/
   private:
      static const int NUM_FIELDS = 6;
      static const int RECORD_SIZE = 500;
      
      string datafile;
      string configfile;
      string overflowfile;
      int numrecords;	                 // Current number of records in file
      string fieldnames[NUM_FIELDS];   // Names of the fields in the record
      //fstream dinout;                    // read/write stream tied to file
      
};
