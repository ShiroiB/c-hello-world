#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int k,i;
    float j;
    while(scanf("%d",&k)==1)
    {
      
        if(k<=0)
        {
            i=0;
            cout << i <<"\n";
        }
      if(k>0)
        {
        j=(k/100)+1;    
        round(j);
        i=j;   
        if(k%100==0)cout<< k/100<<"\n";
        else cout<< i <<"\n";
        
        }
    }
    return 0;
}

