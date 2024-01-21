#include <stdio.h> //biblioteca de comunacação com o usuário
#include <locale.h> //biblioteca de alocação de texto por região
#include <stdlib.h> //biblioteca de alocação de espaço de memória

// Função para converter temperatura de Celsius para Fahrenheit
double celsius_para_fahrenheit(double celsius) { //"double" representa dados do tipo real
    return celsius * 9/5 + 32;
}

// Função para converter temperatura de Fahrenheit para Celsius
double fahrenheit_para_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}


int main() { // Função principal do programa, tela de menu

    setlocale(LC_ALL, "Portuguese"); // Definindo a lingua e os caracteres especiais

    int escolha; // Variável que armazena a escolha do usuário

    do { // Inicia o loop do menu
        system("cls"); // Limpa a tela

        // Exibe as opções de conversão
        printf("Escolha uma opção:\n");
        printf("\t1 - Converter de Celsius para Fahrenheit\n");
        printf("\t2 - Converter de Fahrenheit para Celsius\n\n");
        printf("\t3 - Sair do Programa\n\n");

        // Obtém a escolha do usuário
        printf("Digite sua escolha: ");
        scanf("%d", &escolha); // Armazena a escolha do usuario do tipo inteiro

        system("cls"); // Limpa a tela

        // Executa a ação com base na escolha do usuário
        switch (escolha) {
            case 1:
                {
                    double celsius;
                    printf("Digite a temperatura em Celsius: ");
                    scanf("%lf", &celsius); // Armazena a escolha do usuario do tipo real
                    double resultado = celsius_para_fahrenheit(celsius);
                    printf("%.2f Celsius é igual a %.2f Fahrenheit\n", celsius, resultado); // Imprime o resultado do tipo real
                }
                break;

            case 2:
                {
                    double fahrenheit;
                    printf("Digite a temperatura em Fahrenheit: ");
                    scanf("%lf", &fahrenheit);
                    double resultado = fahrenheit_para_celsius(fahrenheit);
                    printf("%.2f Fahrenheit é igual a %.2f Celsius\n", fahrenheit, resultado);
                }
                break;

            case 3:
                printf("Obrigado por utilizar o conversor. Até logo!\n");
                break;

            default: //Define por padrão a escolha inválida caso algum erro do usuário
                printf("Escolha inválida. Por favor, digite 1, 2 ou 3.\n");
                break;
        }

        // Pausa após a ação para melhor compreensão do usuário
        printf("Pressione Enter para continuar...");
        getchar();  // Limpa o buffer do teclado
        getchar();  // Aguarda a tecla Enter ser pressionada

    } while (escolha != 3); // Condição do looping que continuará executando o programa enquanto a opção não for 3

    return 0; // Indica que o programa foi finalizado com sucesso
}
