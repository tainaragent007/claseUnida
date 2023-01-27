#include "iostream"
#include "stdlib.h"
#include <unistd.h>

using namespace std;
int main()
{

    for(int i=1; i<=100; i++)
    {
        cout <<"Numero: "<<i << endl;
        sleep(5);
    }
    system("PAUSE");
    return 0;
}