# Situation

Array manipulation is pretty damn important in c.
We want to be able to make arrays, pass them around
and use them in general.

For that, we need malloc.

# Template code

`c
//A function that creates the array
//createArray( int size )

//A function to free the memory
//freeArray( myArray )

//A function to print the values in the array
//printArray( myArray, size )

//A function to populate the array
//populateArray( myArray, size )

int main(){
    int size = 3;

    //myArray = createArray( size )
    
    //populateArray( myArray )

    //printArray( myArray )

    //freeArray( myArray )

    return 0;
}
`

# Expected output
## When the value for size is 3
The values in your array are:
0
1
2

## When the value for size is 3
The values in your array are:
0
1
2
3
4
5
