#include <iostream>
#include "lib.h"
using namepsace std;

int main(){
    char a;
    cin>>a;
    int ris= conversione(a);

    if(ris){
        cout << conversione(a) << endl;
    }else{
         cout << "errore";
    }
    return 0;
}
