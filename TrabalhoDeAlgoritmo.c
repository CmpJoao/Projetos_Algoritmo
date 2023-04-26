#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//prototipação de funções

void menu();
void questions();
void firstQuestion();
void secondQuestion();
void thirdQuestion();
void fourthQuestion();
void fifthQuestion();
void sixthQuestion();
void seventhQuestion();
void eighthQuestion();
void ninthQuestion();
void tenthQuestion();
void ShouldRepeat();

// Início da função principal
int main()
{
    // Chama a função de menu
    menu();
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
// Início da função do menu
void menu()
{
    // Limpa a tela do console
    system("cls");
    // Declaração de variável
    int answer;

// Imprime uma mensagem solicitando a entrada do usuário
    printf("Digite 1 para abrir o menu de questoes ou 0 para sair: ");

// Lê a entrada do usuário e armazena em 'answer'
    scanf("%d", &answer);

// Verifica se o usuário digitou 1
    if(answer == 1)
    {
        // Limpa a tela do console
        system("cls");

        // Chama a função de perguntas
        questions();
    }
// Verifica se o usuário digitou 0
    else if(answer == 0)
    {
        // Sai do programa
        exit(0);
    }
// Caso contrário, chama a função do menu novamente
    else
    {
        menu();
    }

}
// Função que apresenta a lista de questões
void questions()
{
    int answer;
    // Os printf apresentarão na tela as opções para o usuário
    printf("1- Fazer a soma de dois numeros inteiros \n");
    printf("2- Calculo de area de circulo baseado me seu raio\n");
    printf("3- Saiba se um numero eh impar ou par\n");
    printf("4- Calculo de media aritimetica de 3 numeros\n");
    printf("5- Saiba o antecessor e sucessor de um numero\n");
    printf("6- Saiba a parte inteira de um numero real\n");
    printf("7- Insira uma idade e saiba se ela esta a cima da maioridade penal ou nao\n");
    printf("8- Conversao de temperatura de celcius para Fahrenheit\n");
    printf("9- Calcule a tabuada de um numero inteiro\n");
    printf("10- Receba o nome e idade de uma pessoa e retorne uma mensagem de saudacao\n");
    printf("Sua alternativa: ");
    // o scanf vai armazenar o numero digitado pelo usuario e atribuir na variavel answer
    scanf("%d", &answer);

    // mediante o numero que foi digitado será chamada uma função que apresenta o calculo necessário para aquela questão
    switch(answer)  // iniciando o switch case com base na variável answer
    {
    case 1: // caso answer seja igual a 1
        system("cls"); // limpa a tela
        firstQuestion(); // chama a função firstQuestion
        break; // sai do switch case
    case 2: // caso answer seja igual a 2
        system("cls"); // limpa a tela
        secondQuestion(); // chama a função secondQuestion
        break; // sai do switch case
    case 3: // caso answer seja igual a 3
        system("cls"); // limpa a tela
        thirdQuestion(); // chama a função thirdQuestion
        break; // sai do switch case
    case 4: // caso answer seja igual a 4
        system("cls"); // limpa a tela
        fourthQuestion(); // chama a função fourthQuestion
        break; // sai do switch case
    case 5: // caso answer seja igual a 5
        system("cls"); // limpa a tela
        fifthQuestion(); // chama a função fifthQuestion
        break; // sai do switch case
    case 6: // caso answer seja igual a 6
        system("cls"); // limpa a tela
        sixthQuestion(); // chama a função sixthQuestion
        break; // sai do switch case
    case 7: // caso answer seja igual a 7
        system("cls"); // limpa a tela
        seventhQuestion(); // chama a função seventhQuestion
        break; // sai do switch case
    case 8: // caso answer seja igual a 8
        system("cls"); // limpa a tela
        eighthQuestion(); // chama a função eighthQuestion
        break; // sai do switch case
    case 9: // caso answer seja igual a 9
        system("cls"); // limpa a tela
        ninthQuestion(); // chama a função ninthQuestion
        break; // sai do switch case
    case 10: // caso answer seja igual a 10
        system("cls"); // limpa a tela
        tenthQuestion(); // chama a função tenthQuestion
        break; // sai do switch case
    default: // caso answer não seja nenhum dos casos anteriores
        printf("numero invalido \n\n"); // exibe mensagem de número inválido
        questions(); // chama a função questions novamente
    }
}

void firstQuestion()
{
    // Declaração de um vetor com duas posições para armazenar os números digitados
    int number[2];

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe dois numeros: ");

// Lê as entradas do usuário e armazena em number[0] e number[1]
    scanf("%d%d", &number[0], &number[1]);

// Imprime a soma dos números digitados
    printf("\nA soma dos numeros digitados eh: %d", number[0] + number[1]);

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();
}
// A seguinte função solicita que o usuário insira o raio de um círculo e calcula a área desse círculo.
void secondQuestion()
{
    // Declaração de variáveis
    float raio,area,pi,raioQuadrado;
    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe o Raio (r) do circulo para saber sua area: ");

// Lê a entrada do usuário e armazena em 'raio'
    scanf("%f", &raio);

// Define o valor de pi como 3.14
    pi = 3.14;

// Calcula o raio ao quadrado
    raioQuadrado = (raio * raio);

// Calcula a área do círculo
    area = raioQuadrado * pi;

// Imprime a área do círculo com duas casas decimais
    printf("\nA area do circulo de raio %.2f eh: %.2f", raio, area);

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte função solicita que o usuário informe um número e verifica se esse número é par ou ímpar.
void thirdQuestion()
{
    int number;

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe um numero para saber se ele eh impar ou par: ");

// Lê a entrada do usuário e armazena em 'number'
    scanf("%d", &number);

// Verifica se o número é par
    if(number % 2 == 0)
    {
        // Imprime uma mensagem informando que o número é par
        printf("\nO numero informado eh par");
    }
    else
    {
        // Imprime uma mensagem informando que o número é ímpar
        printf("\nO numero informado eh impar");
    }

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}

// A seguinte função solicita que o usuário informe 3 números e calcula a média aritmética desses números.
void fourthQuestion()
{
    // Declaração de variáveis
    int number[3], i;
    float media;

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe 3 numeros para saber as suas medias aritimeticas, apos cada numero digitado, aperte a tecla enter: ");

// Loop para ler os três números informados pelo usuário
    for(i = 0; i < 3; ++i)
    {
        scanf("%d", &number[i]);
    }

// Calcula a média aritmética dos três números
    media = (number[0] + number[1] + number[2]) / 3.0;

// Imprime a média com duas casas decimais
    printf("\nA media dos 3 numeros informados eh: %.2f", media);

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte função solicita que o usuário informe um número e imprime o seu antecessor e sucessor.
void fifthQuestion()
{
    // Declaração de variável
    int number;

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe um numero para saber seu antecessor e seu sucessor: ");

// Lê a entrada do usuário e armazena em 'number'
    scanf("%d", &number);

// Imprime o antecessor e o sucessor do número informado
    printf("\nO antecessor eh: %d, e o sucessor eh: %d", number-1, number+1);

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte função solicita que o usuário informe um número real e imprime a sua parte inteira.
void sixthQuestion()
{
    // Declaração de variável
    float number;

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe um numero real e saiba sua parte inteira (utilize ponto e nao virgula): ");

// Lê a entrada do usuário e armazena em 'number'
    scanf("%f", &number);

// Imprime a parte inteira do número informado
    printf("\nA parte inteira do numero eh: %.f", number);

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte função solicita que o usuário informe uma idade e verifica se ela é maior ou igual a 18 anos.
void seventhQuestion()
{
    // Declaração de variável
    int age;

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe uma idade para saber se esta dentro da maioridade ou nao: ");

// Lê a entrada do usuário e armazena em 'age'
    scanf("%d", &age);

// Verifica se a idade informada é maior ou igual a 18 anos e imprime uma mensagem correspondente
    if(age>=18)
        printf("\nA idade informada esta acima da maioridade penal!");
    else
        printf("\nA idade informada nao esta acima da maioridade penal!");

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte função solicita que o usuário informe uma temperatura em Celsius e converte para Fahrenheit.
void eighthQuestion()
{
    // Declaração de variável
    float temperature;

    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Digite uma temperatura em celcius: ");

// Lê a entrada do usuário e armazena em 'temperature'
    scanf("%f", &temperature);

// Converte a temperatura de Celsius para Fahrenheit e imprime o resultado
    printf("A temperatura de Celcius para Fahrenheit eh: %.2f", (temperature*1.8) + 32);

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte função solicita que o usuário informe um número e imprime a sua tabuada de 0 a 10.
void ninthQuestion()
{
    // Declaração de variável
    int number, i;
    // Imprime uma mensagem solicitando a entrada do usuário
    printf("Informe um numero para saber sua tabuada: ");

// Lê a entrada do usuário e armazena em 'number'
    scanf("%d", &number);

// Imprime a tabuada do número informado pelo usuário
    for(i=0; i<=10; i++)
        printf("\n%d x %d = %d", number, i, (number*i));

// Chama a função ShouldRepeat para verificar se o usuário deseja repetir a pergunta
    ShouldRepeat();

}
void tenthQuestion()
{
    // Declaração de variáveis
    char name[200]; // Armazena o nome da pessoa
    int age; // Armazena a idade da pessoa

    // Solicita e lê o nome da pessoa
    printf("Informe seu nome: ");
    fflush(stdin); // Limpa o buffer do teclado
    gets(name); // Lê o nome da pessoa

    // Solicita e lê a idade da pessoa
    printf("\nInforme sua idade: ");
    scanf("%d", &age); // Lê a idade da pessoa

    // Imprime a mensagem de saudação e desejo de aproveitar a vida
    printf("Ola %s, eh um prazer te conhecer, espero que tenha aproveitado bem os seus %d anos de vida", name, age);

    ShouldRepeat(); // Chama a função ShouldRepeat para perguntar se o usuário deseja continuar
}
// Função que pergunta ao usuário se ele quer realiar mais alguma questão/alternativa
void ShouldRepeat()
{
    // Declaração da variável answer que receberá a resposta do usuário
    int answer;

    // Impressão de uma linha em branco
    printf("\n");

    // Impressão da pergunta sobre se o usuário deseja realizar outra operação
    printf("Deseja realizar alguma outra operacao? 1-sim 0-nao: ");

    // Leitura da resposta do usuário para a variável answer
    scanf("%d", &answer);

    // Se a resposta for 1 (sim)
    if(answer == 1)
    {
        // Limpa a tela e chama novamente a função questions()
        system("cls");
        questions();
    }
    // Se a resposta for 0 (não)
    else if(answer == 0)
    {
        // Encerra o programa
        exit(0);
    }
    // Se a resposta não for nem 0 nem 1 (resposta inválida)
    else
    {
        // Exibe uma mensagem de erro e chama novamente a função ShouldRepeat()
        printf("numero invalido \n\n");
        ShouldRepeat();
    }
}






