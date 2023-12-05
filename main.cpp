#include <iostream>
#include <cstdarg>
using namespace std;

void test(int a, ...){
    va_list t;
    va_start(t, a);

    int suma = 0;
    for(int i=0; i<a;i++){

        suma +=va_arg(t, int);
    }
    cout<<"Suma: "<<suma<<endl;
    cout <<"Srednia: "<<suma/a<<endl;

}

int main() {
    test(4, 3,4,6,0);
    return 0;
}
