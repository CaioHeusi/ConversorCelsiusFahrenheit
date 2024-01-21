#include <stdio.h> //biblioteca de comunaca��o com o usu�rio
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria

// Fun��o para converter temperatura de Celsius para Fahrenheit
double celsius_para_fahrenheit(double celsius) { //"double" representa dados do tipo real
    return celsius * 9/5 + 32;
}

// Fun��o para converter temperatura de Fahrenheit para Celsius
double fahrenheit_para_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}


int main() { // Fun��o principal do programa, tela de menu

    setlocale(LC_ALL, "Portuguese"); // Definindo a lingua e os caracteres especiais

    int escolha; // Vari�vel que armazena a escolha do usu�rio

    do { // Inicia o loop do menu
        system("cls"); // Limpa a tela

        // Exibe as op��es de convers�o
        printf("Escolha uma op��o:\n");
        printf("\t1 - Converter de Celsius para Fahrenheit\n");
        printf("\t2 - Converter de Fahrenheit para Celsius\n\n");
        printf("\t3 - Sair do Programa\n\n");

        // Obt�m a escolha do usu�rio
        printf("Digite sua escolha: ");
        scanf("%d", &escolha); // Armazena a escolha do usuario do tipo inteiro

        system("cls"); // Limpa a tela

        // Executa a a��o com base na escolha do usu�rio
        switch (escolha) {
            case 1:
                {
                    double celsius;
                    printf("Digite a temperatura em Celsius: ");
                    scanf("%lf", &celsius); // Armazena a escolha do usuario do tipo real
                    double resultado = celsius_para_fahrenheit(celsius);
                    printf("%.2f Celsius � igual a %.2f Fahrenheit\n", celsius, resultado); // Imprime o resultado do tipo real
                }
                break;

            case 2:
                {
                    double fahrenheit;
                    printf("Digite a temperatura em Fahrenheit: ");
                    scanf("%lf", &fahrenheit);
                    double resultado = fahrenheit_para_celsius(fahrenheit);
                    printf("%.2f Fahrenheit � igual a %.2f Celsius\n", fahrenheit, resultado);
                }
                break;

            case 3:
                printf("Obrigado por utilizar o conversor. At� logo!\n");
                break;

            default: //Define por padr�o a escolha inv�lida caso algum erro do usu�rio
                printf("Escolha inv�lida. Por favor, digite 1, 2 ou 3.\n");
                break;
        }

        // Pausa ap�s a a��o para melhor compreens�o do usu�rio
        printf("Pressione Enter para continuar...");
        getchar();  // Limpa o buffer do teclado
        getchar();  // Aguarda a tecla Enter ser pressionada

    } while (escolha != 3); // Condi��o do looping que continuar� executando o programa enquanto a op��o n�o for 3

    return 0; // Indica que o programa foi finalizado com sucesso
}
