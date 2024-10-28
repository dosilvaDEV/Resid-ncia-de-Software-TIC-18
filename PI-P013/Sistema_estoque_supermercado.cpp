#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;



// Definição da estrutura para representar um produto
struct Produto
{
    string codigo;
    string nome;
    double preco;
};

// Função para inserir um novo produto
void inserirProduto(vector<Produto> &produtos);

// Função para excluir um produto pelo código
void excluirProduto(vector<Produto> &produtos);

// Função para listar todos os produtos
void listarProduto(const vector<Produto> &produtos);

// Função para consultar o preço de um produto pelo código
void consultarPreco(const vector<Produto> &produtos);

int main()
{
    int opcao;
    vector<Produto> produtos;

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Inserir Produto" << endl;
        cout << "2. Excluir Produto" << endl;
        cout << "3. Listar Produtos" << endl;
        cout << "4. Consultar Preço" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            inserirProduto(produtos);
            break;
        case 2:
            excluirProduto(produtos);
            break;
        case 3:
            listarProduto(produtos);
            break;
        case 4:
            consultarPreco(produtos);
            break;
        case 5:
            return 0; // Sair do programa
        default:
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    }

    return 0;
}

void inserirProduto(vector<Produto> &produtos)
{
    const int MAX_PRODUTOS = 300;
    
    if (produtos.size() < MAX_PRODUTOS)
    {
        Produto produto;
        cout << "Informe o código do produto (13 caracteres): ";
        cin >> produto.codigo;

        bool existe = false;
        for (const auto &p : produtos)
        {
            if (produto.codigo == p.codigo || produto.nome == p.nome)
            {
                existe = true;
                cout << "Produto com código ou nome duplicado. Cadastro não permitido." << endl;
                break;
            }
            else if (!existe)
            {

                cout << "Informe o nome do produto (máximo 20 caracteres): ";
                cin.ignore();
                getline(cin, produto.nome);
                cout << "Informe o preço do produto: ";
                cin >> produto.preco;
                produtos.push_back(produto);
                cout << "Produto cadastrado com sucesso." << endl;
            }
        }
    }
    else
    {
        cout << "Limite de produtos cadastrados atingido." << endl;
    }
}

void listarProduto(const vector<Produto> &produtos)
{
    if (produtos.empty())
    {
        cout << "Nenhum produto cadastrado." << endl;
        return;
    }

    cout << "Lista de Produtos:" << endl;
    cout << setw(15) << "Código" << setw(25) << "Nome" << setw(10) << "Preço" << endl;
    for (const auto &produto : produtos)
    {
        cout << setw(15) << produto.codigo << setw(25) << produto.nome << setw(10) << fixed << setprecision(2) << produto.preco << endl;
    }
}

void consultarPreco(const vector<Produto> &produtos)
{
    string codigo;
    cout << "Informe o código do produto para consulta de preço: ";
    cin >> codigo;

    bool encontrado = false;
    for (const auto &produto : produtos)
    {
        if (codigo == produto.codigo)
        {
            cout << "Preço do produto: R$ " << fixed << setprecision(2) << produto.preco << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        cout << "Produto não encontrado." << endl;
    }
}

void excluirProduto(vector<Produto> &produtos)
{
    string codigo;
    cout << "Informe o código do produto a ser excluído: ";
    cin >> codigo;

    auto it = produtos.begin();
    while (it != produtos.end())
    {
        if (codigo == it->codigo)
        {
            it = produtos.erase(it);
            cout << "Produto excluído com sucesso." << endl;
        }
        else
        {
            ++it;
        }
    }
}