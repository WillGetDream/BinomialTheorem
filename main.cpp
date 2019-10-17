#include<ctime>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std;


int biasedCoin();
int factorial(int );

int main () {

    srand(static_cast<unsigned int>(time(0)));
    int count=0;

    //(1)
    double p;
    p=(factorial(4)/(factorial(1)*factorial(3)))*0.5*pow(0.5,3);
    cout<<"Calculate using the Binomial Theorem is : "<<p<<endl;

    //(2)

    int t;
    int i=0;
    while(++i<10000)
    {
        int sum=0;
        int num=0;
        for(int j=0;j<4;j++)
        {
            t = rand()%10+1;

            //tail
            if(t<6) {
                num =1;
            }else {
                num = 0;
            }
            sum=sum+num;
        }
        if(sum==1){
            count++;
        }
    }
    cout<<"Simulate by writing some computer code and taking statistics : "<<(double)count/(double)10000<<endl;

    //(3)
    double bp;
    p=(factorial(4)/(factorial(1)*factorial(3)))*0.4*pow(0.6,3);
    cout<<"Biased Coin for Calculating using the Binomial Theorem is : "<<p<<endl;

    biasedCoin();

    return 0;
}


int biasedCoin(){
    int count=0;
    int i=0,t;
    while(++i<10000)
    {
        int sum=0;
        int num=0;
        for(int j=0;j<4;j++)
        {
            t = rand()%10+1;

            //tail
            if(t<5) {
                num =1;
            }else {
                num = 0;
            }
            sum=sum+num;
        }
        if(sum==1){
            count++;
        }
    }
    cout<<"Biased Coin for Calculating Simulate by writing some computer code is : "<<(double)count/(double)10000<<endl;
}

//factorial
int factorial(int n) {
    unsigned int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}