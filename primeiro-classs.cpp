#include<iostream>
using namespace std;


class prime
{
    public:
        int n1,n2;
        double soma, multi;    
        prime();
           void ler();
           void nome();
           void exibir();

};

prime::prime()
{
    int n1,n2;
    double soma, multi;  
    
}

void prime::ler()
{
    cout << "digite um valor" << "\n";
    cin >> n1;
    cout << "digite outro valor" << "\n";
    cin >> n2;
    
}



void prime::nome()
{
    soma = n1 + n2;
    multi= n1 * n2;

}


void prime::exibir()
{
    cout <<"resultado de soma:"<< soma << endl;
    cout <<"resultado de multiplicacao:"<< multi << endl;
}

void chama( prime a)
{
    a.ler();
    a.nome();
    a.exibir();

}


int main()
{
    prime a;
    chama(a);
    return 0;
}
