# Situation
I'm trying to DDOS google. Fuck them. Bezos is my husbando.

To do so, each time i send a request, i want to store how long it takes
for that request to return. 

Therefore, i want some code, that allows me to store a list of numbers in memory
and pass that list around. I don't know how many requests i'll send, 
so make sure i can decide that at the instantiation of the object.

**I want several functions**
* One to creates a struct
    * We return the struct from this function
    * The struct contains:
        * A pointer to an array
        * The max number of values that can be stored in that array
        * The count of the number of values in that array so far

* One that appends to that array
    * Takes a pointer to the struct
    * Appends a value to the array ( if it can )
    * Increments the count of the values in the array
    
* One to print the contents of that struct
    * Prints the length of the array
    * Prints the number of values already in the array
    * Prints how many values are in that array

* One to clean up any memory used by the struct


# Template Code

`c
//Declare the struct here

//function to create the struct

//function to add values to my struct's array

//function to print out the values in the struct

//function to clean up any memory used by the struct

int main(){
    //Here, call the function to create it, with enough space for 100 ints

    //Here, use the adding function to add the values 1 through 10 to it

    //Here, call the function to print that out

    //It should only print 10 values, not 100.
}
`

# Expected output
Your struct can hold 10 ints
Your struct currently has 10 ints
Here are the values:
1
2
3
4
5
6
7
8
9
10
