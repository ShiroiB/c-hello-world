#include <iostream>

using namespace std;


class teste
{
    class teste2
   {
       public:
       double h;
       double soma( double a, double b);
   };
   teste2 h;
   public:
    double y;
    double soma( double a, double b);
};


 double  teste::teste2::soma( double a, double b)
 {
     return (a*b)/2;
}

double teste::soma(double a, double b)
{
    return h.soma(a,b);

}

void ini(teste a)
{
    double i,j;
    cout <<"area do triangulo"<<endl;
    cout << "digite a base"<< endl;
    cin >> i;
    cout << "digite a altura"<< endl;
    cin >> j;
    a.y=a.soma(i,j);
    cout << "resultado da area do triangulo:"<< a.y<< endl;
}

int main()
{
    teste a;
    ini(a);
    return 0;
}





