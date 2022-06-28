#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
float nota1, nota2, nota3, nota4, nota5, media;
printf ("Informe a nota do aluno 1: ");
scanf ("%f", &nota1);
printf ("Informe a nota do aluno 2: ");
scanf ("%f", &nota2);
printf ("Informe a nota do aluno 3: ");
scanf ("%f", &nota3);
printf ("Informe a nota do aluno 4: ");
scanf ("%f", &nota4);
printf ("Informe a nota do aluno 5: ");
scanf ("%f", &nota5);
media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
printf ("\nMedia das notas: %f", media);
printf ("\nNotas iguais ou acima da media:\n");
if (nota1 >= media) {
    printf ("\nAluno 1: %f", nota1);
}
if (nota2 >= media) {
    printf ("\nAluno 2: %f", nota2);
}
if (nota3 >= media) {
    printf ("\nAluno 3: %f", nota3);
}
if (nota4 >= media) {
    printf ("\nAluno 4: %f", nota4);
}
if (nota5 >= media) {
    printf ("\nAluno 5: %f", nota5);
}
printf ("\n");
printf ("\n");
    return 0;
}