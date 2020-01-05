#include <iostream>

using namespace std;

int main()
{
    int a[5]={1,4,6,5,9};



    int i;


    int nw=a[0];
    int nm=a[0];


    for (i=0;i<=4;i++)
    {
        if (a[i] > nw) {nw=a[i];};
        if (a[i] < nm) {nm=a[i];};
    }
    cout << "Najwieksza jest " << nw << ", a najmniejsza " << nm;

return 0;
}
