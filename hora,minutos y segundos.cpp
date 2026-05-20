/*el programa de and o &&*/
#include <iostream>
using namespace std;
int main()
{
    int n=6540;
    int hora,minuto,segundo;
    hora=(6540/3600)%60;
    cout<<"la hora es : ";
    cout<<hora<<endl;
    minuto=(6540/60)%60;
    cout<<"el minuto es ";
    cout<<minuto<<endl;
    segundo=6540%60;
    cout<<"el segundo es ";
    cout<<segundo<<endl;
    

    return 0;
}