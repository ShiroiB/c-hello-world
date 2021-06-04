#include <iostream>
#include <iomanip>

using namespace std;


class o
{
    public:
      virtual  string getNome2()=0;
};

class base : public o
{
    public:
      string  getNome2() override{return "teste";}
};

class amiga :public base
{
    private:
        string nome;
        int t;
    public:
        amiga(const string& name): nome(name){}
 
       string getNome2() override {return "teste2";}
};

void print(o* obj)
{
    cout<< obj->getNome2()<<endl;
}


int main()
{
    base* c = new base();
    amiga* a = new amiga("OI");
 
    print(c);
    print(a);
    
    
    return 0;
}
