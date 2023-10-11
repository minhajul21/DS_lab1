#include<iostream>

using namespace std;

class bankaccount
{
private:

    string AccountHoldername="Karim";
    int AccountNumber =1334657467;
    float balance =10000;
    float dep =5000;
    float witd =1000;


    public:

        bankacount(string a,int b,float c,float d,float e)
        {
            AccountHoldername=a;
            AccountNumber=b;
            balance=c;
            dep=d;
            witd=e;

            cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;


        }
        ~bankacount()
        {
            cout<<"Destroyed"<<endl;
        }


};


int main()
{
    string f;
    int g;
    float h,i,j;
    cout<<"Enter first AccountHoldername: ";
    cin>>f;
    cout<<"Enter AccountNumber: ";
    cin>>g;
    cout<<"Enter balance: ";
    cin>>h;
    cout<<"Enter deposit: ";
    cin>>i;
    cout<<"Enter withdraw: ";
    cin>>j;
    bankacount b(f,g,h,i,j);
    return 0;
}
