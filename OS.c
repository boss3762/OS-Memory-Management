#include <stdio.h>
#include <stdlib.h>

int global_a;
int global_b;
int global_c;

int recursive(int n){
    if(n == 0){
        return 0;
    }
    int local_a;
    printf("local_a: %p\n", &local_a);
    return n + recursive(n-1);
}

int main(){
    int *heap1 = malloc(sizeof(int));
    int *heap2 = malloc(sizeof(int));
    int *heap3 = malloc(sizeof(int));
    recursive(3);
    printf("global_a: %p\n", &global_a);
    printf("global_b: %p\n", &global_b);
    printf("global_c: %p\n", &global_c);
    printf("heap1: %p\n", heap1);
    printf("heap2: %p\n", heap2);
    printf("heap3: %p\n", heap3);

}

