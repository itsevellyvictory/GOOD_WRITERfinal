#include<stdio.h> //função cabeçalho, intput/ output, função de entrada e saída
#include <stdlib.h> //alocação de memória, controle de processos, conversões
#include <string.h> // manipulação de cadeias de caracteres e regiões de memória
#include <locale.h> // para implementar a chamada “localização”
//CADASTRO PESSOA
char nome[30], resposta;
char genero, tipo_escritor;
int qntLivros = 0;
int id = 0;

//CADASTRO LIVRO
char titulo[30];
char generoLivro = ' ';
#define NAME_MAX 100 //

//METAS
int metas[6];
char dia[6][20];
void Metas() // void e usado como um tipo de retorno  de funcao , isso indica que a funcao nao retorna um valor.
{
    system("cls");
    printf("\n\n..............................................................................");
                    printf("\n                 ANÁLISE DE DESEMPENHO COM BASE NA QUANTIDADE DE PALAVRAS    |");
                    printf("\n..............................................................................");
	printf("\nDigite a sua meta diaria de palavras: \n");
	scanf("%d", &metas[0]);
	printf("\nDigite quantas palavras você escreveu na segunda: \n");
	scanf("%d", &metas[1]);
	printf("\nDigite quantas palavras você escreveu na terca: \n");
	scanf("%d", &metas[2]);
	printf("\nDigite quantas palavras você escreveu na quarta: \n");
	scanf("%d", &metas[3]);
	printf("\nDigite quantas palavras você escreveu na quinta: \n");
	scanf("%d", &metas[4]);
	printf("\nDigite quantas palavras você escreveu na sexta: \n");
	scanf("%d", &metas[5]);
	system("cls");
	for(int a=1; a <= 5; a++)
	{
		if(metas[a] >= metas[0])
		{
			printf("\n --> Parabens!! Meta da %s superada!\n",  dia[a]);
		}
		else
		{
			printf("\n --> Ihh...Meta da %s não superada!\n", dia[a]);
		}
	}
}

void Casos(char caso)
{


                switch(caso)
	{

	case 'C':
		printf("\nficcao\n");
		break;

	case 'F':
		printf("\nfantasia\n");
		break;

	case 'P':
		printf("\npoesia\n");
		break;

	case 'R':
		printf("\nromance\n");
		break;

	case 'T':
		printf("\nterror\n");
		break;
	}
}
void Cadastro(){

	printf("\nInforme seu nome: \n");

	fgets(nome, sizeof(nome), stdin);

    printf("\nVocê é um escritor(a) inciante ou experiente?\n");
	printf("\nTecle I para iniciante - Tecle E para experiente: ");
	scanf("%s",&tipo_escritor);
	if(tipo_escritor == 'E'){
    printf("\nDigite o genero que você mais escreve: \n");
    scanf("%s",&genero);
    printf("\nDigite a quantidade de livros que vc ja escreveu: \n");
	scanf("%d" , &qntLivros);
	printf("\nDeseja comecar uma nova historia?\n S - para sim | N - para não.\n");
	scanf("%s", &resposta);
	  if(resposta=='S'){
	      system("cls");
	printf("\n..............................................................................");
                printf("\n                        CRIAÇÃO DE UMA NOVA HISTÓRIA                         |");
                printf("\n..............................................................................");
	printf("\n                      SELECIONE O GENÊRO DA HISTORIA:                        |\n");
    printf("------------------------------------------------------------------------------\n");
	printf("C - FICCAO CIENTIFICA | F - FANTASIA | P - POESIA | R - ROMANCE | T - TERROR |\n");
	printf("------------------------------------------------------------------------------\n");
	scanf("%s", &generoLivro);


	printf("\nDigite o titulo do livro : \n");
getchar();
fgets(titulo,30,stdin);


	Casos(generoLivro);
	Metas();
}
	}
	 else if (resposta=='N'){
        printf("\n\nAté a próxima!!");
        }
     else if(tipo_escritor=='I'){

	printf("\nDeseja comecar uma nova historia?\n S - para sim | N - para não.\n");
	scanf("%s", &resposta);
	  if(resposta=='S'){
	      system("cls");
	printf("\n\n..............................................................................");
                printf("\n                        CRIAÇÃO DE UMA NOVA HISTÓRIA                         |");
                printf("\n..............................................................................");
	printf("\n                      SELECIONE O GENERO DA HISTORIA:                        |\n");

    printf("------------------------------------------------------------------------------\n");
	printf("C - FICCAO CIENTIFICA | F - FANTASIA | P - POESIA | R - ROMANCE | T - TERROR |\n");
	printf("------------------------------------------------------------------------------\n");
	scanf("%s", &generoLivro);


	printf("\nDigite o titulo do livro : \n");
	getchar();
	fgets(titulo,30,stdin);


	Casos(generoLivro);
	Metas();
}
}
   else if (resposta=='N'){
        printf("\n\nAté a próxima!!");

        }}

int main(){

    strcpy(dia[0],"  ");
    strcpy(dia[1],"segunda");
    strcpy(dia[2],"terça");
    strcpy(dia[3],"quarta");
    strcpy(dia[4],"quinta");
    strcpy(dia[5],"sexta");

  setlocale(LC_ALL, "Portuguese");//configurada adequadamente vai garantir que caracteres como “ç” e acentuação gráficas sejam exibidos normalmente em nossos programa
    system("cls");
    printf("                        ---------------------------------");
    printf("\n                        | SEJA BEM VINDO AO GOOD WRITER |");
    printf("\n                        ---------------------------------");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nAqui, você vai analisar o seu desempenho diário em relação a sua produtividade|");
    printf("\n-------------------------------------------------------------------------------");
    printf("%s",dia[20]);
    printf("\n----------------------------------------------");
    printf("\nMas antes, vamos fazer algumas perguntinhas!!|");
    printf("\n----------------------------------------------");
    Cadastro();
	   printf("\n\n");

return 0;
}
