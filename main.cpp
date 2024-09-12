#include <iostream>
#include "Pessoa.cpp"
#include "MinhasExcecoes.cpp"
using namespace std;

int main(){
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p("Nome", "Sobrenome",123456789, 9, 11, 2024, e);

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de nascimento: " << p.getNascimento() << endl;
    cout << "Endereco: " << p.getEndereco() << endl;

    int dia, mes, ano;

    while (true){
    try{
        cout << "Informe o dia: " << endl;
        cin >> dia;
        cout << "Informe o mes: " << endl;
        cin >> mes;
        cout << "Informe o ano: " << endl;
        cin >> ano;

        if(dia<1 || dia>31){
            throw MinhasExcecoes("Dia Invalido!");
        } //lancar manualmente uma excessao

        if(mes<1 || mes>12){
            throw MinhasExcecoes("Mes Invalido!");
        } 

        if(ano<1999 || ano>2024){
            throw MinhasExcecoes("Ano Invalido!");
        } 

        Data d(dia, mes, ano);
        cout << d.getData() << endl;    
        break;

    }catch (MinhasExcecoes e){
        cout << e.mensagem << endl;
    }
    }
}