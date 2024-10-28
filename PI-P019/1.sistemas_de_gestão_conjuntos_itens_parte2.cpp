#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ItemSet
{
    private:
        vector<string> listaItens;
        bool itemCadastrado(string s);

    public:
        ItemSet();
        ItemSet(const ItemSet &b);
        ~ItemSet();
        vector<string> getListaItens();
        void setListaItens(vector<string> _listaItens);
        void inserir(string s);
        void excluir(string s);
        int localizarItem(string &item_a_buscar);

        ItemSet operator+(ItemSet c);
        ItemSet &operator=(const ItemSet &b);
        ItemSet operator*(ItemSet c);
        ItemSet operator-(ItemSet C);
        ItemSet operator&(ItemSet C);//vamos utilizar o operador & para sobrecarregar já que o operador <> nao é aceito
        bool operator==(ItemSet C);
};

ItemSet::ItemSet() {}

// Construtor que recebe outro ItemSet como parâmetro
ItemSet::ItemSet(const ItemSet &b)
{
    // Copiar os itens do conjunto 'other' para o novo conjunto
    for (const std::string &item : b.listaItens)
    {
        this->inserir(item);
    }
}

// Sobrecarga do operador de atribuição '='
ItemSet &ItemSet::operator=(const ItemSet &b)
{
    if (this == &b)
    {
        return *this; // Evitar auto-atribuição
    }

    // Limpar os itens do conjunto atual
    this->listaItens.clear();

    // Copiar os itens do conjunto 'other' para o conjunto atual
    for (const std::string &item : b.listaItens)
    {
        this->inserir(item);
    }

    return *this;
}

ItemSet::~ItemSet()
{
}

vector<string> ItemSet::getListaItens()
{
    return listaItens;
}

void ItemSet::setListaItens(vector<string> _listaItens)
{
    listaItens = _listaItens;
}