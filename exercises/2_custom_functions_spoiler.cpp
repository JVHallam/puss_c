#include <iostream>
#include "pch.h"
using namespace std;

int area( radius ){
    decimal pi = 3.14;
    return pi * radius * radius;
}

void printArea( int area ){
    cout << "The area is : " << area << endl;
}

int main(){
    int firstRadius = 10;
    int secondRadius = 20;
    int thirdRadius = 30;

    int firstArea = area( firstRadius );
    int secondArea = area( secondRadius );
    int thirdarea = area( thirdRadius );

    int sumOfAreas = firstArea + secondArea + thirdArea;

    printArea( firstArea );
    printArea( secondArea );
    printArea( thirdArea );

    cout << "The sum of the areas is : " << sumOfAreas << endl;

    return 0;
}
