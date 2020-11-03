#include <stdio.h>

long result;
int n;

long factorial(int n) {
    if(n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main(){
    printf("Ingrese número del que quiere obtener el factorial\n");
    scanf("%d", &n);
    if(n < 0) {
        printf("El número debe ser positivo\n");
    } else {
        result = factorial(n);
        printf("%d! = %ld\n", n, result);
    }
    return 0;
}