//Ayush Shambharkar
//23070123034
//Aim - Verifying Data Types in CPP

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int d;
    cout<<"Enter the value of int d: ";
    cin>>d;
    cout<<"D = "<<d<<endl;

    float c;
    cout<<"Enter the value of float c: ";
    cin>>c;
    cout<<"C = "<<c<<endl;

    char z;
    cout<<"Enter the character z: ";
    cin>>z;
    cout<<"Z = "<<z<<endl;

    string g;
    cout<<"Enter your name: ";
    cin>>g;
    cout<<"Name: "<<g<<endl;

    cout<<"Size of name: "<<sizeof(g)<<endl;
}

/*
OUTPUT:
Enter the value of int d: 5786
D = 5786
Enter the vlue of float c: 56.435
C = 56.435
Enter the character z: a
Z = a
Enter your name: Ayush Shambharkar
Name: AyushShambharkar
Size of name: 24
*/
