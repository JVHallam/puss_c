# General
This is JUST to get started with the concept,
It's kinda unweildly, but fuck you, deal with it.

# foreach loops with arrays
//void forEach( array, arrayLength, functionPointer )

int double( value ){
    return value * 2;
};

int main(){
    int arrayLength = 20;
    int array[arrayLength];
    for( int i = 0; i < arrayLength; ++i ){
        array[i] = i;
    }

    for( int i = 0; i < arrayLength; ++i ){
        array[i] = double( array[i] );
    }
}

# To do:
Replace the second forloop with the forEach function.

# How to do it:
So forEach needs to take:
* A pointer to an array
* the length of the array
* A function pointer, to a function, that takes a POINTER to the value

order:
* Create the forEach function
* move the second forloop into it
* instead of assigning the value ( array[i] = double( array[i] ) ), call off to the function pointer instead, with a pointer to the value
* Create a function that takes a pointer to an int, then doubles the value at it
* Create a function pointer to that
* call off to foreach with the array and that function pointer
