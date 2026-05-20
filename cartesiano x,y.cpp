/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"ingrese x,y ";
    cin>>x>>y;
    if(x>0 and y>0){
    cout<<" I cuadrante ";}
    if(x<0 and y>0){
     cout<<"II cuadrante ";}
    if(x<0 and y<0){
    cout<<"III cuadrante ";}
    if(x>0 and y<0){
    cout<<"IV cuadrante";}
    

    return 0;
}