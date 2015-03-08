#include <stdio.h>

int fun(int* a){
    return a[0] + a[1] + a[2];
}

int main(int argc, char *argv[]) {
    int x = 5;
    int y = 6;
    int z = x + y;

    int array[3];
    array[0] = x;
    array[1] = y;
    array[2] = z;

    int result = fun(array);

    printf("%d", result);

    return 0;
}

