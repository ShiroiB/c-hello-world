
#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>

using namespace std;

class TVetInt
{
    private:
        int v[100], v2[100];
        int n=0;
        

    public:
    void ler();
	void inverter();
	void listar();
};

void TVetInt::ler()
{
    cin >> n;
    for(int i=0;i<n;i++)
		{
            cin >> v[i];
          
        }
}

void TVetInt::inverter()
{
    int j=0;
    for(int i=n-1;i>=0;i--)
		{
            v2[j]=v[i];
           // cout << v2[j]<<"oi"<<i<<endl;
            j++;
        }
}

void TVetInt::listar()
{
    int i;
    for(i=0;i<n;i++)
		{
         if(i+2==n) cout<<v2[i]<<endl;

		 else cout << v2[i]<<" ";
        }
   
}


int main()
    {
    TVetInt v;
	v.ler();
	v.inverter();
	v.listar();
        return 0;
    }