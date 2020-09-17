# Objective
* Take the code below
* Split it up into 3 functions
    * Int main
    * One that works out the area
    * One that prints out the area

# Template Code
`c

int main(){
    decimal pi = 3.14;

    int firstRadius = 10;
    int secondRadius = 20;
    int thirdRadius = 30;

    int firstArea = pi * firstRadius * firstRadius;
    int secondArea = pi * secondRadius * secondRadius;
    int thirdarea = pi * thirdRadius * thirdRadius;

    int sumOfAreas = firstArea + secondArea + thirdArea;

    cout << "The area is : " << firstArea << endl;
    cout << "The area is : " << secondArea << endl;
    cout << "The area is : " << thirdArea << endl;

    cout << "The sum of the areas is : " << sumOfAreas << endl;

    return 0;
}
`

# Expected output:
The area is : 314
The area is : 1256
The area is : 2826
The sum of the areas is : 4396
