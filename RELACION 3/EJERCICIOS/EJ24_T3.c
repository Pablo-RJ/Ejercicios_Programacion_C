/* EJERCICIO 24 - TEMA 3 */

/* Hacer un programa que calcule el area y el perımetro de un rectangulo dada la base y la altura del rectangulo. */

float calculo1(float base, float altura);
float calculo2(float base, float altura);

int main(){

    float base, altura;
    
    printf("Introduzca la longitud de la base del rectangulo: ");
    scanf("%f", &base);
    printf("Introduzca la longitud de la altura del rectangulo: ");
    scanf("%f", &altura);

    printf("\nEl area total del rectangulo es igual a %.2f", calculo1(base, altura));
    printf("\nEl perimetro total del rectangulo es igaul a %.2f", calculo2(base, altura));

    return(0);
}

float calculo1(float base, float altura){
    float area;
    area = base*altura;
    return(area);
}

float calculo2(float base, float altura){
    float perimetro;
    perimetro = 2*base + 2*altura;
    return(perimetro);
}
