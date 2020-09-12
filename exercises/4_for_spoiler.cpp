#include <stdio>
using namespace std;

int main( int argc, char** argv ){
    
    int myArray[5];
    for( int i = 0; i < 5; ++i ){
        myArray[i] = i;
    }

    for( int i = 0; i < 5; ++i ){
        cout << "index " << i << " : " << myArray[0] << endl;
    }

    return 0;
}
