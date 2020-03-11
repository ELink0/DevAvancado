#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

float valorEstoque = 800.00;
int i;
int addProdutos ();
void listarProdutos(int Produto);

/* Estrutura de Produtos */
struct produtos_t {
	char nome[50];
	int codigo, qtdestoque;
    double preco;
};

list<produtos_t> names;




/* Função Principal */
int main () 
{
    int qtProduto;
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
            listarProdutos(qtProduto);
        }
    }
    return 0;
};

/* Função para adicionar produtos */
int addProdutos () {
        char opCadastrar;
        int i = 0, produtosCadastrados = 0;
        
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

            produtosCadastrados = produtosCadastrados + i;

            i++;
            
            cout << "\nDeseja cadastrar um novo produto sim(s) ou não(n)? ";
            cin >> opCadastrar;
    
        } while (opCadastrar == 's' || opCadastrar == 'S');
            void listarProdutos (int Produto);
            return produtosCadastrados;
        while (opCadastrar == 'n' || opCadastrar == 'N');
            void listarProdutos (int Produto);
};

/* Função para listar produtos */
void listarProdutos (int Produto)
{

    int i, qtProduto;
    qtProduto = Produto;

    for (i = 0; i < qtProduto; i++) {
        printf("Produto %s \nCódigo %i \nQuantidade em estoque %i \nPreço %lf\n\n", produtos[i].nome, produtos[i].codigo, produtos[i].qtdestoque, produtos[i].preco);
    }
};
