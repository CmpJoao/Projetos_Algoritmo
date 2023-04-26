#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//prototipa��o de fun��es

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

// In�cio da fun��o principal
int main()
{
    // Chama a fun��o de menu
    menu();
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
// In�cio da fun��o do menu
void menu()
{
    // Limpa a tela do console
    system("cls");
    // Declara��o de vari�vel
    int answer;

// Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Digite 1 para abrir o menu de questoes ou 0 para sair: ");

// L� a entrada do usu�rio e armazena em 'answer'
    scanf("%d", &answer);

// Verifica se o usu�rio digitou 1
    if(answer == 1)
    {
        // Limpa a tela do console
        system("cls");

        // Chama a fun��o de perguntas
        questions();
    }
// Verifica se o usu�rio digitou 0
    else if(answer == 0)
    {
        // Sai do programa
        exit(0);
    }
// Caso contr�rio, chama a fun��o do menu novamente
    else
    {
        menu();
    }

}
// Fun��o que apresenta a lista de quest�es
void questions()
{
    int answer;
    // Os printf apresentar�o na tela as op��es para o usu�rio
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

    // mediante o numero que foi digitado ser� chamada uma fun��o que apresenta o calculo necess�rio para aquela quest�o
    switch(answer)  // iniciando o switch case com base na vari�vel answer
    {
    case 1: // caso answer seja igual a 1
        system("cls"); // limpa a tela
        firstQuestion(); // chama a fun��o firstQuestion
        break; // sai do switch case
    case 2: // caso answer seja igual a 2
        system("cls"); // limpa a tela
        secondQuestion(); // chama a fun��o secondQuestion
        break; // sai do switch case
    case 3: // caso answer seja igual a 3
        system("cls"); // limpa a tela
        thirdQuestion(); // chama a fun��o thirdQuestion
        break; // sai do switch case
    case 4: // caso answer seja igual a 4
        system("cls"); // limpa a tela
        fourthQuestion(); // chama a fun��o fourthQuestion
        break; // sai do switch case
    case 5: // caso answer seja igual a 5
        system("cls"); // limpa a tela
        fifthQuestion(); // chama a fun��o fifthQuestion
        break; // sai do switch case
    case 6: // caso answer seja igual a 6
        system("cls"); // limpa a tela
        sixthQuestion(); // chama a fun��o sixthQuestion
        break; // sai do switch case
    case 7: // caso answer seja igual a 7
        system("cls"); // limpa a tela
        seventhQuestion(); // chama a fun��o seventhQuestion
        break; // sai do switch case
    case 8: // caso answer seja igual a 8
        system("cls"); // limpa a tela
        eighthQuestion(); // chama a fun��o eighthQuestion
        break; // sai do switch case
    case 9: // caso answer seja igual a 9
        system("cls"); // limpa a tela
        ninthQuestion(); // chama a fun��o ninthQuestion
        break; // sai do switch case
    case 10: // caso answer seja igual a 10
        system("cls"); // limpa a tela
        tenthQuestion(); // chama a fun��o tenthQuestion
        break; // sai do switch case
    default: // caso answer n�o seja nenhum dos casos anteriores
        printf("numero invalido \n\n"); // exibe mensagem de n�mero inv�lido
        questions(); // chama a fun��o questions novamente
    }
}

void firstQuestion()
{
    // Declara��o de um vetor com duas posi��es para armazenar os n�meros digitados
    int number[2];

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe dois numeros: ");

// L� as entradas do usu�rio e armazena em number[0] e number[1]
    scanf("%d%d", &number[0], &number[1]);

// Imprime a soma dos n�meros digitados
    printf("\nA soma dos numeros digitados eh: %d", number[0] + number[1]);

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();
}
// A seguinte fun��o solicita que o usu�rio insira o raio de um c�rculo e calcula a �rea desse c�rculo.
void secondQuestion()
{
    // Declara��o de vari�veis
    float raio,area,pi,raioQuadrado;
    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe o Raio (r) do circulo para saber sua area: ");

// L� a entrada do usu�rio e armazena em 'raio'
    scanf("%f", &raio);

// Define o valor de pi como 3.14
    pi = 3.14;

// Calcula o raio ao quadrado
    raioQuadrado = (raio * raio);

// Calcula a �rea do c�rculo
    area = raioQuadrado * pi;

// Imprime a �rea do c�rculo com duas casas decimais
    printf("\nA area do circulo de raio %.2f eh: %.2f", raio, area);

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte fun��o solicita que o usu�rio informe um n�mero e verifica se esse n�mero � par ou �mpar.
void thirdQuestion()
{
    int number;

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe um numero para saber se ele eh impar ou par: ");

// L� a entrada do usu�rio e armazena em 'number'
    scanf("%d", &number);

// Verifica se o n�mero � par
    if(number % 2 == 0)
    {
        // Imprime uma mensagem informando que o n�mero � par
        printf("\nO numero informado eh par");
    }
    else
    {
        // Imprime uma mensagem informando que o n�mero � �mpar
        printf("\nO numero informado eh impar");
    }

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}

// A seguinte fun��o solicita que o usu�rio informe 3 n�meros e calcula a m�dia aritm�tica desses n�meros.
void fourthQuestion()
{
    // Declara��o de vari�veis
    int number[3], i;
    float media;

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe 3 numeros para saber as suas medias aritimeticas, apos cada numero digitado, aperte a tecla enter: ");

// Loop para ler os tr�s n�meros informados pelo usu�rio
    for(i = 0; i < 3; ++i)
    {
        scanf("%d", &number[i]);
    }

// Calcula a m�dia aritm�tica dos tr�s n�meros
    media = (number[0] + number[1] + number[2]) / 3.0;

// Imprime a m�dia com duas casas decimais
    printf("\nA media dos 3 numeros informados eh: %.2f", media);

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte fun��o solicita que o usu�rio informe um n�mero e imprime o seu antecessor e sucessor.
void fifthQuestion()
{
    // Declara��o de vari�vel
    int number;

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe um numero para saber seu antecessor e seu sucessor: ");

// L� a entrada do usu�rio e armazena em 'number'
    scanf("%d", &number);

// Imprime o antecessor e o sucessor do n�mero informado
    printf("\nO antecessor eh: %d, e o sucessor eh: %d", number-1, number+1);

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte fun��o solicita que o usu�rio informe um n�mero real e imprime a sua parte inteira.
void sixthQuestion()
{
    // Declara��o de vari�vel
    float number;

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe um numero real e saiba sua parte inteira (utilize ponto e nao virgula): ");

// L� a entrada do usu�rio e armazena em 'number'
    scanf("%f", &number);

// Imprime a parte inteira do n�mero informado
    printf("\nA parte inteira do numero eh: %.f", number);

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte fun��o solicita que o usu�rio informe uma idade e verifica se ela � maior ou igual a 18 anos.
void seventhQuestion()
{
    // Declara��o de vari�vel
    int age;

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe uma idade para saber se esta dentro da maioridade ou nao: ");

// L� a entrada do usu�rio e armazena em 'age'
    scanf("%d", &age);

// Verifica se a idade informada � maior ou igual a 18 anos e imprime uma mensagem correspondente
    if(age>=18)
        printf("\nA idade informada esta acima da maioridade penal!");
    else
        printf("\nA idade informada nao esta acima da maioridade penal!");

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte fun��o solicita que o usu�rio informe uma temperatura em Celsius e converte para Fahrenheit.
void eighthQuestion()
{
    // Declara��o de vari�vel
    float temperature;

    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Digite uma temperatura em celcius: ");

// L� a entrada do usu�rio e armazena em 'temperature'
    scanf("%f", &temperature);

// Converte a temperatura de Celsius para Fahrenheit e imprime o resultado
    printf("A temperatura de Celcius para Fahrenheit eh: %.2f", (temperature*1.8) + 32);

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
// A seguinte fun��o solicita que o usu�rio informe um n�mero e imprime a sua tabuada de 0 a 10.
void ninthQuestion()
{
    // Declara��o de vari�vel
    int number, i;
    // Imprime uma mensagem solicitando a entrada do usu�rio
    printf("Informe um numero para saber sua tabuada: ");

// L� a entrada do usu�rio e armazena em 'number'
    scanf("%d", &number);

// Imprime a tabuada do n�mero informado pelo usu�rio
    for(i=0; i<=10; i++)
        printf("\n%d x %d = %d", number, i, (number*i));

// Chama a fun��o ShouldRepeat para verificar se o usu�rio deseja repetir a pergunta
    ShouldRepeat();

}
void tenthQuestion()
{
    // Declara��o de vari�veis
    char name[200]; // Armazena o nome da pessoa
    int age; // Armazena a idade da pessoa

    // Solicita e l� o nome da pessoa
    printf("Informe seu nome: ");
    fflush(stdin); // Limpa o buffer do teclado
    gets(name); // L� o nome da pessoa

    // Solicita e l� a idade da pessoa
    printf("\nInforme sua idade: ");
    scanf("%d", &age); // L� a idade da pessoa

    // Imprime a mensagem de sauda��o e desejo de aproveitar a vida
    printf("Ola %s, eh um prazer te conhecer, espero que tenha aproveitado bem os seus %d anos de vida", name, age);

    ShouldRepeat(); // Chama a fun��o ShouldRepeat para perguntar se o usu�rio deseja continuar
}
// Fun��o que pergunta ao usu�rio se ele quer realiar mais alguma quest�o/alternativa
void ShouldRepeat()
{
    // Declara��o da vari�vel answer que receber� a resposta do usu�rio
    int answer;

    // Impress�o de uma linha em branco
    printf("\n");

    // Impress�o da pergunta sobre se o usu�rio deseja realizar outra opera��o
    printf("Deseja realizar alguma outra operacao? 1-sim 0-nao: ");

    // Leitura da resposta do usu�rio para a vari�vel answer
    scanf("%d", &answer);

    // Se a resposta for 1 (sim)
    if(answer == 1)
    {
        // Limpa a tela e chama novamente a fun��o questions()
        system("cls");
        questions();
    }
    // Se a resposta for 0 (n�o)
    else if(answer == 0)
    {
        // Encerra o programa
        exit(0);
    }
    // Se a resposta n�o for nem 0 nem 1 (resposta inv�lida)
    else
    {
        // Exibe uma mensagem de erro e chama novamente a fun��o ShouldRepeat()
        printf("numero invalido \n\n");
        ShouldRepeat();
    }
}






