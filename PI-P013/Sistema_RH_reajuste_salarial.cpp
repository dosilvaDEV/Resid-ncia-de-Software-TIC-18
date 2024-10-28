#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct Empregado
{
    string nome;
    string sobrenome;
    int ano_de_nascimento;
    string rg;
    int ano_de_admissao;
    double salario;
};

// Função para gerar um empregado com dados aleatórios
Empregado GerarEmpregadoAleatorio() {
    Empregado empregado;
    string nomes[] = {"Alice", "Bob", "Carol", "David", "Eva", "Frank", "Grace", "Hank", "Ivy", "Jack"};
    string sobrenomes[] = {"Smith", "Johnson", "Brown", "Davis", "Lee", "Evans", "Wilson", "Clark", "Perez", "Wang"};

    empregado.nome = nomes[rand() % 10];
    empregado.sobrenome = sobrenomes[rand() % 10];
    empregado.ano_de_nascimento = 1980 + rand() % 30; // Ano de nascimento entre 1980 e 2009
    empregado.rg = "RG" + to_string(rand() % 1000000); // RG aleatório de 6 dígitos
    empregado.ano_de_admissao = 2010 + rand() % 10; // Ano de admissão entre 2010 e 2019
    empregado.salario = 2000.0 + (rand() % 500) * 10.99; // Salário entre R$ 2000 e R$ 7000

    return empregado;
}

// Função para gerar uma lista de empregados com dados aleatórios
void GerarEmpregados(vector<Empregado> &empregados, int qtd_max) {
    for (int i = 0; i < qtd_max; i++) {
        Empregado empregado = GerarEmpregadoAleatorio();
        empregados.push_back(empregado);
    }
}

// Função para listar os empregados
void ListarEmpregados(const vector<Empregado> &empregados) {
    cout << "Lista de Empregados:" << endl;
    for (const auto &empregado : empregados) {
        cout << "Nome: " << empregado.nome << " " << empregado.sobrenome << endl;
        cout << "Ano de Nascimento: " << empregado.ano_de_nascimento << endl;
        cout << "RG: " << empregado.rg << endl;
        cout << "Ano de Admissão: " << empregado.ano_de_admissao << endl;
        cout << "Salário: R$ " << fixed << setprecision(2) << empregado.salario << endl;

        // Restaura a precisão padrão
        cout.unsetf(ios::fixed);
        cout << "-------------------------" << endl;
    }
}

// Função para aplicar um reajuste de 10% nos salários dos empregados
void ReajustaDezPorcento(vector<Empregado> &empregados) {
    for (auto &empregado : empregados) {
        empregado.salario *= 1.10; // Aumenta o salário em 10% multiplica o salario 1 vez e 0,10 vezes. que da 10% sem precisar fazer aqueles calculos de 2 passos.
    }
}

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios com o tempo atual

    vector<Empregado> empregados;

    GerarEmpregados(empregados, 3);
    ListarEmpregados(empregados);

    // Aplica um reajuste de 10% nos salários
    ReajustaDezPorcento(empregados);

    cout << "\nApós o reajuste de 10%:\n"<<endl;
    
    ListarEmpregados(empregados);

    return 0;
}