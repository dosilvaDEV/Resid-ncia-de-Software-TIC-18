#include <iostream>

using namespace std;

string criptografar(string palavra){
    string palavra_criptografada = "";
    int tam =palavra.size();
    for (int i = 0; i < tam ; i++)
    {
        if (palavra[i] != ' ')
        {
            if (int(palavra[i]) == 122){
            palavra_criptografada += char(97);
            }
            if (int(palavra[i]) == 90){
                palavra_criptografada += char(65);
            }
            if (int(palavra[i]) == 57){
                palavra_criptografada += char(65);
            }
            palavra_criptografada += char(int(palavra[i]) + 1);
        }else{
            palavra_criptografada += ' ';
        } 
    }
    return palavra_criptografada;
}

string descriptografar(string palavra){
    string palavra_descriptografar = "";
    int tam =palavra.size();
    for (int i = 0; i < tam; i++)
    {
        if (palavra[i] != ' ')
        {
            if (int(palavra[i]) == 97){
            palavra_descriptografar += char(122);
            }
            if (int(palavra[i]) == 65){
                palavra_descriptografar += char(90);
            }
            if (int(palavra[i]) == 65){
                palavra_descriptografar += char(57);
            }
            palavra_descriptografar += char(int(palavra[i]) -1);
        }else{
            palavra_descriptografar += ' ';
        }
    }

    return palavra_descriptografar;
}

int main(){
    string palavra = "estrutura de dados amor 65"; 

    cout << "Palavra usada: " << palavra <<endl;     
    palavra = criptografar(palavra);

    cout << "Palavra criptografada: "<< palavra <<endl;

    palavra = descriptografar(palavra);
    cout <<"Palavra descriptografada: " << palavra <<endl;

    return 0;
}