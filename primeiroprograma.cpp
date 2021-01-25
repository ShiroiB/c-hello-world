#include <iostream>


using namespace std;
int main()
{
    int x,y,z,i;
    cout <<"hello world"<<"\n";
    cout << "digite um numero"<<"\n";
    cin >> x;
    cout << "digite um numero"<<"\n";
    cin >> y;
    z=x+y;
    cout <<"A soma deu "<< z <<"\n";
    if(z>10)
    {
        cout << "maior q 10" << "\n";
    }
    else cout << "menor q 20"<< "\n";
    return 0;
}
