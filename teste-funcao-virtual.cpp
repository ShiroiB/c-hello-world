#include <iostream>
#include <iomanip>

using namespace std;




class base
{
    public:
       virtual  string getNome() {return "nome";}//vitual=ajuda a apontar apara a função
      
};

class amiga :public base
{
    private:
        string nome;
        int t;
    public:
        amiga(const string& name): nome(name){}
        string getNome() override {return nome;}//override=ajuda a não ter bugs
};

int main()
{
   base* n = new base();
   cout<< n->getNome()<<endl;
   amiga* a = new amiga("OI");
   cout<< a->getNome()<<endl;
   base* b = a;
   cout<< b->getNome()<<endl;
    return 0;
}
