#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   int disA,disB;
   
   cout<<"ingrese las posiciones del gato a , b y la posicion del raton";
   cin>>a>>b>>c;
   disA=a-c;
   disB=b-c;
   if(disA<disB){
    cout<<"gato b";}
    else if(disB<disA){
    cout<<"gato a ";}
    else{
    cout<<"raton c";
    }
    
    return 0;
}
