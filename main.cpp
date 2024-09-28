#include <iostream>
using namespace std;

int main() {
    float num1, num2, massimo;
    cout<<"Scrivi il primo numero."<<num1<<endl;
    cin>>num1;
    cout<<"Scrivi il secondo numero."<<num2<<endl;
    cin>>num2;
    if(num1>num2)
    {
        massimo=num1;
    }
    else
    {
        massimo=num2;
    }
    cout<<"il numero massimo è "<<massimo;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
