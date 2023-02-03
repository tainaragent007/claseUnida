#include "iostream"
using namespace std;
int main (void) {
    int x,cont,x,i,vectorP[100];
    int j=0, vectorI[100];
    i=0;
    for(x=1;x<=100;x++)
    {
        cont=0;
        if(x%2==0)
        {
            vectorP[i]=x;
            i++;
        }else{
            vectorP[j]=x;
            j++;
        }
    }
    cout<<"Vector Par:"<<endl;
    for (x=0;x<i;x++)
    {
        cout<<'Par:'<<vectorP[x]<<endl;
    }
    cout<<"Vector Impar:"<<endl;
    for (x=0;x<j;x++)
    {
        cout<<"Impar:"<<vectorI[x]<<endl;
    }
    system("PAUSE");
    return 0;
}