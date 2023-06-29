#include <bits/stdc++.h>

using namespace std;
class Base{
    public:
    Base(int v){ val = v;}

    int val;
};

void fun(Base& o){
    cout<<"\nlval fun()  "<<o.val<<std::endl;
}
void fun(Base&& o){
    cout<<"\nrval fun()  "<<o.val<<std::endl;
}

template<typename T>
void wrapFun(T &&t){
    // this forward is deciding the correct value category
    // and proceeding the corrcet overload.
    // Without forward it will always call the lvalue overload.
    fun(std::forward<T>(t));
}


int main(){
    std::cout<<"\nMain"<<std::endl;
    Base obj(33);
    // lval eval
    wrapFun(obj);

    // rval eval
    wrapFun(Base(44));
}