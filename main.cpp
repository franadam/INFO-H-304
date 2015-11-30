#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[])
{
	//terminal  g++ -o hello hello.cpp puis ./hello
	int m=6;
	int n=5;
	int **t;
	
  cout << "Nombre de colonnes : " << n;
  cout << "Nombre de lignes : " << m;
 
  /* Allocation dynamique */
  t = new int* [ m];
  for (int i=0; i < m; i++)
    t[i] = new int[ n ];
 
  /* Initialisation */
  for (int i=0; i < m; i++)
    for (int j=0; j < n; j++)
      t[i][j] = i*j;
 
  /* Affichage */
  for (int i=0; i < m; i++) {
 
    for (int j=0; j < n; j++)
      cout << t[i][j] << " ";
    cout << endl;
  }

	return 0;
}
