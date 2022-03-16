#include "ElCh1.cpp"
#include "ElCh2.cpp"
#include "file.cpp"
#include "arbre.cpp"

using namespace std;

int main(void){

    File<double> file1;

    file1.Enfiler(4.6);

    file1.Enfiler(8);

    file1.afficherFile();

    file1.Defiler();

    file1.Defiler();

    file1.afficherFile();

    return 0;
}