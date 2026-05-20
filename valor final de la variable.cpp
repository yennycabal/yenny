/***********************************************************************.
valor final de la variable
*******************************************************************************/

#include <iostream>
using namespace std;
   int main()
{
    int x,y,z;
    int sumaA,sumaB;
    cin>>x>>y>>z;
    for(int i=1;i<=x;i++){
    sumaA +=i;}
    for(int i=1;i<=y;i++){
    sumaB+=i;}
    for(;z<1000;){
      if(z%2==0){
      z+=sumaA;
        }else{
        z+=sumaB;
        
        } 
    
        cout<<z;}

    return 0;
}