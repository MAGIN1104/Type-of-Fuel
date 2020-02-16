#include <iostream>

using namespace std;

int main()
{
    int n,n1=0,n2=0,n3=0;
    cin>>n;
    while(n!=4){
        if(n>4 && n<0) cin>>n;
        else{
            if(n==1) n1=n1+1;
            else if(n==2) n2=n2+1;
            else if(n==3) n3=n3+1;
        }
        cin>>n;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<n1<<endl;
    cout<<"Gasolina: "<<n2<<endl;
    cout<<"Diesel: "<<n3<<endl;
    return 0;
}
