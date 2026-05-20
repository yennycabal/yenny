/******************************************************************************
francción de impropia a mixta
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float x=(((a+b)*c)+d)-(a-b)/(c*d);
    cout<<"respuesta : "<<x<<endl; 
    cout<<"respuesta :"<<x*a<<endl;
    

    return 0;
}