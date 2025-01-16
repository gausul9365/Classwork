#include <stdio.h>


struct Num_Series {
    int start;
    int end;
};


union S_Pointer {
    struct Num_Series* ptr;
};

int main() {
    struct Num_Series series = {1, 200}; 
    union S_Pointer sp;                
    sp.ptr = &series;                      

    printf("Even numbers between %d and %d:\n", sp.ptr->start, sp.ptr->end);


    for (int i = sp.ptr->start; i <= sp.ptr->end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nOdd numbers between %d and %d:\n", sp.ptr->start, sp.ptr->end);



    for (int i = sp.ptr->start; i <= sp.ptr->end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
