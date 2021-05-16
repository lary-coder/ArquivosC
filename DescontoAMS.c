#include<stdio.h>
#include<stdlib.h>
int main()
{

int idade, sexo;
float salario_bruto, assistencia_medica;

printf ("Qual e o seu sexo ? , Digite 1 para Masculino ou 2 para Feminino ");
scanf("%d", & sexo);
printf ("Qual e a sua idade :");
scanf ("%d",& idade);
printf ("Qual e o seu salario Bruto :");
scanf ("%f",& salario_bruto);

printf("Salario bruto: %.2f ", salario_bruto);

if (sexo == 1){
   
       if (idade <= 20) {
        assistencia_medica = (salario_bruto / 100) * 7;
    }
    else if (idade > 20 && idade <= 40)
    {
        assistencia_medica = (salario_bruto / 100) * 10;
    }
    else // mais de 40 anos
    {
        assistencia_medica = (salario_bruto / 100) * 15;
    }
    printf("\nSexo Masculino");
    printf("\nO desconto de assistencia medica e: %.2f ", assistencia_medica);

}
else if (sexo == 2)
{

       if (idade <= 20) {
        assistencia_medica = (salario_bruto / 100) * 5;
    }
    else if (idade > 20 && idade <= 40)
    {
        assistencia_medica = (salario_bruto / 100) * 7;
    }
    else // mais de 40 anos
    {
        assistencia_medica = (salario_bruto / 100) * 10;
    }
    printf("\nSexo Feminino");
    printf("\nO desconto de assistencia medica e: %.2f ", assistencia_medica);

}
else
{
printf("\nSexo deve ser 1 ou 2...");
}

return(0);

}
