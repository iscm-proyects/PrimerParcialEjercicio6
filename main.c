#include <stdio.h>

void calcular_fibonacci(int n, int fibonacci[]) {
    if (n >= 1) {
        fibonacci[0] = 0; // Primer término
    }
    if (n >= 2) {
        fibonacci[1] = 1; // Segundo término
    }

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2]; // Fórmula de Fibonacci
    }
}

int main() {
    int n;

    // Solicitar al usuario el número de términos
    printf("Ingrese el número de términos de Fibonacci a calcular: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número de términos debe ser mayor que 0.\n");
        return 1;
    }

    // Crear un vector para almacenar los términos
    int fibonacci[n];

    // Calcular los términos de Fibonacci
    calcular_fibonacci(n, fibonacci);

    // Imprimir los términos
    printf("Términos de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}
