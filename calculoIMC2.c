#include <stdio.h>
int main (){
    
char sex; // 'm': masculino, 'f': feminino

printf("\n\n Insira o seu sexo: M - masculino F - feminino \n\n");
    scanf("%c", &sex);
    getchar();

float peso,altura,imc;
    printf ("Digite seu peso: ");
    scanf ("%f",&peso);
    printf("Digite sua altura");
    scanf("%f",&altura);
    altura=altura*altura;
    imc=peso/altura;

if (sex == 'm' || sex == 'M')

        if (imc<=18.5){
        printf ("Abaixo do Peso ");
        }


        else if (imc>=18.6 && imc<=24.9){
        printf ("Saudável ");
        }

        else if (imc >=25.0 && imc<=29.9){
        printf ("Peso em excesso ");
        }

        else if (imc >=30 && imc<=34.9){
        printf ("Obesidade Grau I ");
        }

        else if (imc >35 && imc<=39.9){
        printf ("Obesidade Grau II (severa) ");
        }

        else {
        printf ("Obesidade Grau III");
        }

else if (sex == 'f' || sex == 'F')

  if (imc<=19){
        printf ("Abaixo do Peso ");
        }


        else if (imc>=19.1 && imc<=23.9){
        printf ("Saudável ");
        }

        else if (imc >=24 && imc<=28.9){
        printf ("Peso em excesso ");
        }

        else if (imc >=29 && imc<=38.9){
        printf ("Obesidade Grau I ");
        }

        else if (imc >39 && imc<=40){
        printf ("Obesidade Grau II (severa) ");
        }

        else {
        printf ("Obesidade Grau III");
        }

else
   {
       printf("\n ERRO! \n");
   }


return (0);
}
