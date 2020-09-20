#include <stdio.h>
#include <stdlib.h>

struct Container{
  int size;
  int currentCount;
  int* array;
};

struct Container createContainer( int size ){
    struct Container container;
    container.size = size;
    container.currentCount = 0;
    container.array = (int*)malloc(size * sizeof(int));
    return container;
}

void printContainer( struct Container cont ){
    printf("Your struct can hold %d ints\n", cont.size);
    printf("Your struct currently has %d ints\n", cont.currentCount);
    puts("Here are the values:");
    for(int i = 0; i < cont.currentCount; ++i){
        printf("%d\n", *(cont.array + i));
    }
}

int addToContainer( struct Container* cont, int value ){
   if( cont->currentCount >= 10 ){
        return 0;
   }

    *(cont->array + cont->currentCount) = value;
    cont->currentCount += 1;
}

void freeContainer( struct Container cont ){
    if(cont.array){
        free(cont.array);
    }
}

int main()
{
    struct Container cont = createContainer(10);
    
    for( int i = 1; i <= 10; ++i ){
        addToContainer( &cont, i );
    }
    
    printContainer( cont );
    
    freeContainer( cont );
    return 0;
}
