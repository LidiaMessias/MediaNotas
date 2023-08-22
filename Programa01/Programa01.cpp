// Programa01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main()
{
    string nomeAluno;
    float nota1, nota2, media;

    cout << "Digite o nome do Aluno:\n ";
    do {
        getline(cin, nomeAluno);
        if (nomeAluno.empty()) {
            cout << "Campo de preenchimento obrigatorio, digite o nome do Aluno: \n";
        }
    } while (nomeAluno.empty());
    
    
    cout << "Informe a nota da P1: (Valor de 0 a 10)" << endl;
    do {
        cin >> nota1;
        if (nota1 < 0 || nota1 > 10) {
            cout << "Valor invalido, digite um valor de 0 a 10: \n";
        }
    } while (nota1 < 0 || nota1 > 10);


    cout << "Informe a nota da P2: (Valor de 0 a 10)" << endl;
    do {   
        cin >> nota2;
        if (nota2 < 0 || nota2 > 10) {
            cout << "Valor invalido, digite um valor de 0 a 10: \n";
        }
    } while (nota2 < 0 || nota2 > 10);
     
    media = (nota1 + nota2) / 2;
    
    cout << "Sua media = " << media << endl;
    if (media >= 6.0) {
        cout << "APROVADO !" << endl;
    }
    else {
        cout << "REPROVADO !" << endl;
    }

    //std::cout << "Hello World!\n";
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
