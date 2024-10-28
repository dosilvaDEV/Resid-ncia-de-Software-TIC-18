#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    vector<vector<double>> alunos; // Matriz para armazenar os dados dos alunos

    while (true) {
        vector<double> dadosAluno;
        int matricula;
        double nota1, nota2, nota3;

        cout << "Digite o número de matrícula do aluno: ";
        cin >> matricula;

        cout << "Digite as três notas do aluno: ";
        cin >> nota1 >> nota2 >> nota3;

        dadosAluno.push_back(matricula);
        dadosAluno.push_back(nota1);
        dadosAluno.push_back(nota2);
        dadosAluno.push_back(nota3);

        alunos.push_back(dadosAluno);

        char resposta;
        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> resposta;
        if (resposta == 'N' || resposta == 'n') {
            break;
        }
    }

    // Cabeçalho da tabela de resultados
    cout << "\nMATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA\n";
    cout << "===========================================\n";

    // Calcular a média das notas para cada aluno e exibir os dados
    for (const auto& dadosAluno : alunos) {
        int matricula = static_cast<int>(dadosAluno[0]);
        double nota1 = dadosAluno[1];
        double nota2 = dadosAluno[2];
        double nota3 = dadosAluno[3];

        double media = (nota1 + nota2 + nota3) / 3.0;

        cout << matricula << "\t\t" << fixed << setprecision(2)
             << nota1 << "\t" << nota2 << "\t" << nota3 << "\t" << media << endl;
    }

    return 0;
}
