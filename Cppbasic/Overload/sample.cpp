//#inlcude <iostream>
#include <bits/stdc++.h>
using namespace std;


class Base{
    public:
        void f (int x ){
            std::cout<<"\nf int base called "<<x<<std::endl;
        }
};

class Der: public Base{
    public:
        void f (float x ){
            std::cout<<"\nf float Der called "<<x<<std::endl;
        }
};

int main(){
    Der o;
    o.Base::f(3); // this is invoking the base f() by using scope resoltion;
    o.f(7);
    o.f(4.4);

    std::cout<<"\nMain"<<std::endl;
}