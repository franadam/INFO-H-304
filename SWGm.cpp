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
private:

  //initialization
  int matchScore = 0;
  int mismatchScore = 1;
  int gapOpenPenalty = 11;
  int gapExtendPenalty = 1;
  int t[][]=NULL;
  
  char pReference = "ATGGCGGGGATCGGGACACTCGCCGGTGCGGGTACCCTA"
  char pQuery = "GGGGATCGGGACACTCGCTCTCCGGTGCGGGTA"
  
  int n = strlen(pReference);
	int m = strlen(pQuery);
  
  //gap penalty
  int CalculateGapWeight(gapOpenPenalty, gapExtendPenalty,int k){
   int w_k=gapOpenPenalty + gapExtendPenalty*k
   return k
  }
  
  //create the matrix
  int CreateMatrix(pReference, pQuery){
    for(unsigned char i = 0; i < n; i++) {
		  for(unsigned char j = 0; j < m; j++) {
		    t[i][j]=0;
		  }
    }
    return t;
  }
  
  int InitMat
  int D = t ;
  int P = t ;
  int Q = t ;
  for(unsigned char i = 0; i < strlen(pReference); i++) {
    D[i][0] = CalculateGapWeight(gapOpenPenalty, gapExtendPenalty,int i)
    Q[i][0] = 2000
  }
	for(unsigned char j = 0; j < strlen(pQuery); j++) {
	  D[0][j] = CalculateGapWeight(gapOpenPenalty, gapExtendPenalty,int j)
	  P[0][j] = 2000
	}
}
