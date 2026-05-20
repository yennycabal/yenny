/******************************************************************************
francción de impropia a mixta
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<"error";}
        else {
        int entero =a/b;
        int residuo=a%b;
        cout<<entero<<" "<<residuo<<"/"<<b;
        
    }

    return 0;
}