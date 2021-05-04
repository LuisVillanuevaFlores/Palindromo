#include <iostream>
using namespace std;

int tamstr( char palabra[]){
    int i=0;
    int tam=0;
    while(palabra[i]!='\0'){
        i++;
        tam++;

    }
    return tam;

}


bool palin(char cad[]){
    int x=tamstr(cad);
    int con=0;
    string y="";
    for(int i=0;i<x;i++){
        y=y+cad[x-i-1];
    }
    for(int j=0;j<x;j++){
        if(cad[j]!=y[j]){return false;}
    }
    return true;


}

int main(){
    char x[]={"pedro"};
    char y[]={"ana"};
    if(palin(y)!=0){cout<<"ES PALINDROMO"<<endl;}
    else{cout<<"NO ES PALINDROMO"<<endl;}
    return 0;

}
