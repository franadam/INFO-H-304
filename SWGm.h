#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include <getopt.h>
#include <utility>
#include <vector>
#include <stdlib.h>

using namespace std;

class SWGm{
public:
  //Constructor
    SWGm();
  //Destructor  
    SWGm(void);
    
  
    string reference;
    string query;

    int bandwidth = 0;

    int matchScore ;
    int mismatchScore ;
    int gapOpenPenalty ;
    int gapExtendPenalty;
    
private:
  //create the matrix
  void CreateMatrix(pReference, pQuery)
  ;}
