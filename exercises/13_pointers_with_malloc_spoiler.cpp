#include <stdlib.h>
#include <stdio.h>

int* createArray( int size ){
    return (int*)malloc(size * sizeof(int));
}

void populateArray( int* myArray, int size ){
    for( int i = 0; i < size; ++i ){
        *(myArray + i) = i;
    }
}

void printArray( int* myArray, int size ){
    puts("The values in your array are:");
    for(int i = 0; i < size; ++i){
        printf("%d\n", *(myArray + i));
    }
}

void freeArray( int* myArray ){
    free(myArray);
}

int main(){
    int size = 6;
    
    int* myArray = createArray( size );
    
    populateArray( myArray, size );
    
    printArray( myArray, size );
    
    freeArray( myArray );
    
    return 0;
}
