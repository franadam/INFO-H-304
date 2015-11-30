#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>


using std::cout;
using std::endl;
using std::string;
using std::ifstream;


int main(int argc, char *argv[])
{
	//terminal  g++ -o hello hello.cpp puis ./hello

	int matchScore = 0;
	int mismatchScore = 1;
  int gapOpenPenalty = 11;
  int gapExtendPenalty = 1;
	  
  string pReference= "ATGGCGGGGATCGGGACACTCGCCGGTGCGGGTACCCTA";
  string pQuery = "GGGGATCGGGACACTCGCTCTCCGGTGCGGGTA";
  int n = pReference.size();
  int m = pQuery.size();
  cout << "Nombre de colonnes : " << n << endl;
  cout << "Nombre de lignes : " << m << endl;

  int **D;
  int **P;
  int **Q;

  int **creatMatrix(string pReference, string pQuery);
  void affiche (string pReference, string pQuery, int **t);
  int CalculateGapWeight(int gapOpenPenalty, int gapExtendPenalty,int k);
  void InitMat(string pReference, string pQuery,int gapOpenPenalty, int gapExtendPenalty);
  
	InitMat(pReference, pQuery,gapOpenPenalty,gapExtendPenalty);
	affiche (pReference, pQuery, D);
	
	return 0;
}

  int **creatMatrix(string pReference, string pQuery){
	  int **t;
	  int n = pReference.size();
	  int m = pQuery.size();
	  /* Allocation dynamique */
	  t = new int* [ m];
	  for (int i=0; i < m; i++)
		t[i] = new int[ n ];
	 
	  /* Initialisation */
	  for (int i=0; i < m; i++)
		for (int j=0; j < n; j++)
		  t[i][j] = 0;
	  return t;
 }
 
  /* Affichage */
  void affiche (string pReference, string pQuery, int **t){  
	  int n = pReference.size();
	  int m = pQuery.size();
  	for (int i=0; i < m; i++) {
    	for (int j=0; j < n; j++)
      	cout << t[i][j] << " ";
    cout << endl;
  	}
  }
  
    //gap  Weight
  int CalculateGapWeight(int gapOpenPenalty, int gapExtendPenalty,int k){
  	int w_k=gapOpenPenalty + gapExtendPenalty*k;
   	return w_k;
  }
  
  //Matrice Initialisation P Q D
  void InitMat(string pReference, string pQuery,int gapOpenPenalty, int gapExtendPenalty){
  	int **D = creatMatrix(pReference, pQuery) ;
  	int **P = creatMatrix(pReference, pQuery) ;
  	int **Q = creatMatrix(pReference, pQuery) ;
  	for(int i = 0; i < pReference.size(); i++) {
    	D[i][0] = CalculateGapWeight(gapOpenPenalty, gapExtendPenalty,i);
    	Q[i][0] = 2000;
  	}
  	for(int j = 0; j < pQuery.size(); j++) {
  		D[0][j] = CalculateGapWeight(gapOpenPenalty, gapExtendPenalty,j);
  		P[0][j] = 2000;
  	}
  	
  }
