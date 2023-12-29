#include <stdio.h> 
#include <limits.h> 
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    int n = 2;
    int i;
    int* array = (int*)malloc(n * sizeof(int));

    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100;
    }

    if (array[0] > array[1]) {
        printf("Перше число: %d \n", array[0]);
    }
    else {
        printf("Перше число: %d\n", array[0]);
        printf("Друге число: %d\n", array[1]);
    }

    return 0;
}