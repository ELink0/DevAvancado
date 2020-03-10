#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

float valorEstoque = 800.00;
int i;
int addProdutos ();
int listarProdutos();

/* Estrutura de Produtos */
struct produtos_t {
	char nome[50];
	int codigo, qtdestoque;
    double preco;
};
produtos_t produtos[100];


/* Função Principal */
int main () 
{
    int op = 0;
    if (op == 0) {
        int opcao = 0;

        printf("1 - Adicionar Produtos\n2 - Sair");

        cout << "\nOpção desejada: ";
        cin >> opcao;

        if (opcao == 1) {
            addProdutos();
        }

        if (opcao == 2) {
            listarProdutos();
        }
    }
    return 0;
};

/* Função para adicionar produtos */
int addProdutos () {
        char opCadastrar;
        int i = 0, qtProdutoCad = 0;
        
        do {
            cout << "\nInforme o nome do produto ";
            cin >> produtos[i].nome;

            cout << "\nInforme o código do produto: ";
            cin >> produtos[i].codigo;

            cout << "\nInforme a quantidade em estoque do produto: ";
            cin >> produtos[i].qtdestoque;

            cout << "\nInforme o preço do produto: ";
            cin >> produtos[i].preco;

            printf("\nProduto adicionado com sucesso!\n");

            qtProdutoCad = qtProdutoCad + i;

            i++;
            
            cout << "\nDeseja cadastrar um novo produto sim(s) ou não(n)? ";
            cin >> opSub;
    
        } while (opCadastrar == 's' || opCadastrar == 'S');
            return qtProdutoCad;
};

/* Função para listar produtos */
int listarProdutos ()
{
    int listar, p;
    printf("\n\nOi\n\n");
    if (listar == 1) {
			for (p=i; p>=0; p--) {
				printf("Produto %s \nCódigo %i \nQuantidade em estoque %i \nPreço %lf", produtos[i].nome, produtos[i].codigo, produtos[i].qtdestoque, produtos[i].preco);			
			}
		}
    return 0;
};
