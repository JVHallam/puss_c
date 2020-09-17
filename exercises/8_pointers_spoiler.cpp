#include <iostream>
#include "pch.h"
using namespace std;

void doubleThis( int* a ){
    *a = *a * 2;
}

int main(){
    int a = 10;

    doubleThis( &a );

    cout << "A value : " << a << endl;

    return 0;
}
