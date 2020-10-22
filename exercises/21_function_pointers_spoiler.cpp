#include <stdio.h>

void forEach(int* array, int arrayLength, void(*fnPointer)(int*) ){
    for(int i = 0; i < arrayLength; ++i){
        int* currentValue = (array + i);
        fnPointer( currentValue );
    }
}

void doubleValue( int* pointer ){
    *pointer = *pointer * 2;
}

void printValue( int* value ){
    printf("%d, ", *value);
}

int main()
{
    int arrayLength = 3;
    int array[arrayLength];
    
    for(int i = 0; i < arrayLength; ++i){
        array[i] = i;
    }
    
    void (*doubleFunctionPointer)() = &doubleValue;
    void (*printValuePointer)() = &printValue;
    
    forEach( array, arrayLength, doubleFunctionPointer);
    forEach( array, arrayLength, printValuePointer);
    puts("");

    return 0;
}
