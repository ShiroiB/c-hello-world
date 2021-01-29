#include <iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream arquivo;
    string nome;
    arquivo.open("nome.txt",ios::app);
    cin >> nome;
    arquivo << nome <<"\n";
    arquivo.close();
    return 0;

}
