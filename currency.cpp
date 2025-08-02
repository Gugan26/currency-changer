#include<iostream>
#include <iomanip>
using namespace std;
void inr_to_usd(){
    float inr;float result;
    cout<<"Enter the amount in INR: ";
    cin>>inr;
    result = inr / 87;
    cout<<"Currency value in USD: $"<<fixed<<setprecision(2)<<result<<endl;
}
void usd_to_inr(){
    int usd,result;
    cout<<"Enter the amount in USD: ";
    cin>>usd;
    result = usd * 87;
    cout<<"Currency value in INR: "<<result<<endl;
}
int main(){
    int currency;
    cout<<"\t\t\t***CURRENCY CALCULATOR***"<<endl<<endl;
    cout<<"Press 1 to convert currency from INR to USD."<<endl;
    cout<<"Press 2 to convert currency from USD to INR."<<endl;
    cin>>currency;
    switch(currency){
        case 1:{
            inr_to_usd();
            break;
        }
        case 2:{
            usd_to_inr();
        }
    }
}