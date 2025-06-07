#include <iostream>
using namespace std;

int main ( ){
    int n, suma= 0, impar ;
    cout<< "ingresa un numero\n";
    cin>>n;
    for ( int i = 0; i<=n; i++){
        impar += n;
        suma = suma + impar;
      
    }
        cout<<" la suma de los impares entre el 1 y 50 es: " <<suma<<endl;

    



    return 0;
}