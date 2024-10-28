#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Venda_de_Passagens
{
    string data_e_hora;
    string nome;
    string cpf;
    int idade;
    int num_assento;
};


    // Função para calcular o total arrecadado para uma determinada viagem (dada pela data e hora)
    float CalcularTotalArrecadado(const vector<Venda_de_Passagens>& vendas, const string& dataHora) {
        float total = 0.0;
        for (const auto& venda : vendas) {
            if (venda.data_e_hora == dataHora) {
                total += 80.0;  // Supondo que o valor da passagem é sempre R$ 80.00
            }
        }
        return total;
    }

    // Função para calcular o total arrecadado em um determinado mês (data e hora no mês)
    float CalcularTotalArrecadadoNoMes(const vector<Venda_de_Passagens>& vendas, const string& mes) {
        float total = 0.0;
        for (const auto& venda : vendas) {
            // Extrair o mês da data e hora da venda
            string vendaMes = venda.data_e_hora.substr(5, 2);
            if (vendaMes == mes) {
                total += 80.0;  // Supondo que o valor da passagem é sempre R$ 80.00
            }
        }
        return total;
    }

    // Função para encontrar o nome do passageiro de uma determinada poltrona P de uma determinada viagem
    string EncontrarNomePorPoltrona(const vector<Venda_de_Passagens>& vendas, const string& dataHora, int poltrona) {
        for (const auto& venda : vendas) {
            if (venda.data_e_hora == dataHora && venda.num_assento == poltrona) {
                return venda.nome;
            }
        }
        return "Poltrona vazia ou não encontrada";
    }


    // Função para calcular a média de idade dos passageiros
    float CalcularMediaIdade(const vector<Venda_de_Passagens>& vendas) {
        int totalIdades = 0;
        int totalPassageiros = vendas.size();
        for (const auto& venda : vendas) {
            totalIdades += venda.idade;
        }
        if (totalPassageiros == 0) {
            return 0.0;
        }
        return static_cast<float>(totalIdades) / totalPassageiros;
    }

void EncontrarHorarioMaisRentavel(const vector<Venda_de_Passagens>& vendas) {
    // Usar um mapa para rastrear a receita por horário
    map<string, float> receitaPorHorario;

    // Calcular a receita para cada horário de viagem
    for (const auto& venda : vendas) {
        receitaPorHorario[venda.data_e_hora] += 80.0; // Supondo que o valor da passagem é sempre R$ 80.00
    }

    // Encontrar o horário com a receita mais alta
    string horarioMaisRentavel;
    float receitaMaisAlta = 0.0;

    for (const auto& par : receitaPorHorario) {
        if (par.second > receitaMaisAlta) {
            receitaMaisAlta = par.second;
            horarioMaisRentavel = par.first;
        }
    }

    if (!horarioMaisRentavel.empty()) {
        cout << "Horário de viagem mais rentável: " << horarioMaisRentavel << endl;
        cout << "Receita mais alta: " << receitaMaisAlta << " reais" << endl;
    } else {
        cout << "Nenhuma venda registrada." << endl;
    }
}


// Função para gerar uma data e hora aleatória em 2023
string GerarDataHoraAleatoria() {
    int ano = 2023;
    int mes = rand() % 12 + 1; // Mês de 1 a 12
    int dia = rand() % 28 + 1; // Dia de 1 a 28
    int hora = rand() % 24;    // Hora de 0 a 23
    int minuto = rand() % 60;  // Minuto de 0 a 59
    int segundo = rand() % 60; // Segundo de 0 a 59

    string dataHora = to_string(ano) + "-" + (mes < 10 ? "0" : "") + to_string(mes) + "-" +
                      (dia < 10 ? "0" : "") + to_string(dia) + " " +
                      (hora < 10 ? "0" : "") + to_string(hora) + ":" +
                      (minuto < 10 ? "0" : "") + to_string(minuto) + ":" +
                      (segundo < 10 ? "0" : "") + to_string(segundo);

    return dataHora;
}

// Função para gerar um CPF aleatório
string GerarCPFAleatorio() {
    string cpf;
    for (int i = 0; i < 11; i++) {
        cpf += to_string(rand() % 10);
    }
    return cpf;
}

// Função para gerar um nome aleatório
string GerarNomeAleatorio() {
    string nomes[] = {"João", "Maria", "Pedro", "Ana", "Luiz", "Sofia", "Lucas", "Carla", "Mariana", "Rafael"};
    return nomes[rand() % 10];
}

// Função para gerar uma idade aleatória entre 18 e 80 anos
int GerarIdadeAleatoria() {
    return rand() % 63 + 18;
}

// Função para gerar um número de assento aleatório entre 1 e 40
int GerarAssentoAleatorio() {
    return rand() % 40 + 1;
}
int main() {
    vector<Venda_de_Passagens> vendas;

    // Preencher o vetor com valores aleatórios
    for (int i = 0; i < 1000; i++) { // Preencher 1000 vendas aleatórias como exemplo
        Venda_de_Passagens venda;
        venda.data_e_hora = GerarDataHoraAleatoria();
        venda.nome = GerarNomeAleatorio();
        venda.cpf = GerarCPFAleatorio();
        venda.idade = GerarIdadeAleatoria();
        venda.num_assento = GerarAssentoAleatorio();
        vendas.push_back(venda);
    }

    // Exibir as vendas aleatórias como exemplo
        for (const auto& venda : vendas) {
            cout << "Data e Hora: " << venda.data_e_hora << ", Nome: " << venda.nome << ", CPF: " << venda.cpf
                << ", Idade: " << venda.idade << ", Assento: " << venda.num_assento << endl;
    }


    int opcao;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Calcular total arrecadado para uma viagem" << endl;
        cout << "2. Calcular total arrecadado em um mês" << endl;
        cout << "3. Encontrar nome do passageiro por poltrona e viagem" << endl;
        cout << "4. Encontrar horário de viagem mais rentável" << endl;
        cout << "5. Calcular média de idade dos passageiros" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                string dataHora;
                cout << "Informe a data e hora da viagem (exemplo: 2023-10-01 08:00): ";
                cin.ignore();
                getline(cin ,  dataHora);
                float totalArrecadado = CalcularTotalArrecadado(vendas, dataHora);
                cout << "Total arrecadado: " << totalArrecadado << " reais" << endl;
                break;
            }
            case 2: {
                string mes;
                cout << "Informe o mês (exemplo: 10 para outubro): ";
                cin >> mes;
                float totalArrecadadoNoMes = CalcularTotalArrecadadoNoMes(vendas, mes);
                cout << "Total arrecadado no mês: " << totalArrecadadoNoMes << " reais" << endl;
                break;
            }
            case 3: {
                string dataHora;
                int poltrona;
                cout << "Informe a data e hora da viagem (exemplo: 2023-10-01 08:00): ";
                cin.ignore();
                getline(cin, dataHora);
                cout << "Informe o número da poltrona: ";
                cin >> poltrona;
                string nomePassageiro = EncontrarNomePorPoltrona(vendas, dataHora, poltrona);
                cout << "Nome do passageiro: " << nomePassageiro << endl;
                break;
            }
            case 4: {
                EncontrarHorarioMaisRentavel(vendas);
                break;
            }
            case 5: {
                float mediaIdade = CalcularMediaIdade(vendas);
                cout << "Média de idade dos passageiros: " << mediaIdade << " anos" << endl;
                break;
            }
            case 0: {
                return 0; // Sair do programa
            }
            default: {
                cout << "Opção inválida. Tente novamente." << endl;
                break;
            }
        }
    }

    // cout << "Total arrecadado para 2023-10-01 08:00: " << CalcularTotalArrecadado(vendas, "2023-10-01 08:00") << " reais" << endl;
    // cout << "Total arrecadado em outubro: " << CalcularTotalArrecadadoNoMes(vendas, "10") << " reais" << endl;
    // cout << "Nome do passageiro da poltrona 10 na viagem de 2023-10-01 08:00: " << EncontrarNomePorPoltrona(vendas, "2023-10-01 08:00", 10) << endl;
    // cout << "Média de idade dos passageiros: " << CalcularMediaIdade(vendas) << " anos" << endl;
    // string horarioMaisRentavel = EncontrarHorarioMaisRentavel(vendas);
    // cout << "Horário de viagem mais rentável: " << horarioMaisRentavel << endl;

    return 0;
}