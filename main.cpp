#include <iostream>
#include <string>
#include "dominios.h"
#include "teste.h"
#include "entidades.h"
#include "testesentidade.h"

using namespace std;

int main()
{

    TUEndereco endereco;


    switch(endereco.run()){
        case TUEndereco::SUCESSO:
            cout << "SUCESSO - Enderço \n";
            break;
        case TUEndereco::FALHA:
            cout << "FALHA - Endereço \n";
            break;
    }


    TUNome nome;


    switch(nome.run()){
        case TUNome::SUCESSO:
            cout << "SUCESSO - Nome \n";
            break;
        case TUNome::FALHA:
            cout << "FALHA - Nome \n";
            break;
    }

        TUHorario horario;


    switch(horario.run()){
        case TUHorario::SUCESSO:
            cout << "SUCESSO - Horario \n";
            break;
        case TUHorario::FALHA:
            cout << "FALHA - Horario \n";
            break;
    }

    TUSenha senha;

    switch(senha.run()){
        case TUSenha::SUCESSO:
            cout << "SUCESSO - Senha \n";
            break;
        case TUSenha::FALHA:
            cout << "FALHA - Senha \n";
            break;
    }

    TUPrazo prazo;

    switch(prazo.run()){
        case TUPrazo::SUCESSO: cout << "SUCESSO - Prazo \n";
                                break;
        case TUPrazo::FALHA  : cout << "FALHA - Prazo \n";
                                break;
    }

    TUValorApl valorApl;

    switch(valorApl.run()){
        case TUValorApl::SUCESSO: cout << "SUCESSO - Valor Aplicação \n";
                                break;
        case TUValorApl::FALHA  : cout << "FALHA - Valor Aplicação \n";
                                break;
    }


    TUTaxa taxa;

    switch(taxa.run()){
        case TUTaxa::SUCESSO:
            cout << "SUCESSO - Taxa \n";
            break;
        case TUTaxa::FALHA:
            cout << "FALHA - Taxa \n";
            break;
    }


    TUValorMin valorMinimo;

    switch(valorMinimo.run()){
        case TUValorMin::SUCESSO: cout << "SUCESSO - Valor Minimo \n";
                                break;
        case TUValorMin::FALHA  : cout << "FALHA - Valor Minimo \n";
                                break;
    }

    TUNumero numero;

    switch(numero.run()){
        case TUNumero::SUCESSO: cout << "SUCESSO - Numero \n";
                                break;
        case TUNumero::FALHA  : cout << "FALHA - Numero \n";
                                break;
    }


    TUCep testecep;

    switch(testecep.run()){
        case TUCep::SUCESSO: cout << "SUCESSO - Cep"<<"\n";
                                break;
        case TUCep::FALHA  : cout << "FALHA - Cep"<<"\n";
                                break;}


    TUClasse testeclasse;

    switch(testeclasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - Classe"<<"\n";
                                break;
        case TUClasse::FALHA  : cout << "FALHA - Classe"<<"\n";
                                break;}


    TUCodigoAgencia testecodigoagencia;

    switch(testecodigoagencia.run()){
        case TUCodigoAgencia::SUCESSO: cout << "SUCESSO - CodigoAgencia"<<"\n";
                                break;
        case TUCodigoAgencia::FALHA  : cout << "FALHA - CodigoAgencia"<<"\n";
                                break;
                                }

    TUCodigoAplicacao testecodigoaplicacao;

    switch(testecodigoaplicacao.run()){
        case TUCodigoAplicacao::SUCESSO: cout << "SUCESSO - CodigoAplicacao"<<"\n";
                                break;
        case TUCodigoAplicacao::FALHA  : cout << "FALHA - CodigoAplicacao"<<"\n";
                                break;
                                }

    TUCodigoBanco testecodigobanco;

    switch(testecodigobanco.run()){
        case TUCodigoBanco::SUCESSO: cout << "SUCESSO - CodigoBanco"<<"\n";
                                break;
        case TUCodigoBanco::FALHA  : cout << "FALHA - CodigoBanco"<<"\n";
                                break;
                                }

    TUCodigoProduto testecodigoproduto;

    switch(testecodigoproduto.run()){
        case TUCodigoProduto::SUCESSO: cout << "SUCESSO - CodigoProduto"<<"\n";
                                break;
        case TUCodigoProduto::FALHA  : cout << "FALHA - CodigoProduto"<<"\n";
                                break;
                                }

    TUCpf testecpf;

    switch(testecpf.run()){
        case TUCpf::SUCESSO: cout << "SUCESSO - Cpf"<<"\n";
                                break;
        case TUCpf::FALHA  : cout << "FALHA - Cpf"<<"\n";
                                break;
                                }
    TUData testedata;

    switch(testedata.run()){
        case TUData::SUCESSO: cout << "SUCESSO - Data"<<"\n";
                                break;
        case TUData::FALHA  : cout << "FALHA - Data"<<"\n";
                                break;
                                }

    TUEmissor testeemissor;
    switch(testeemissor.run()){
        case TUEmissor::SUCESSO: cout << "SUCESSO - Emissor"<<"\n";
                                break;
        case TUEmissor::FALHA  : cout << "FALHA - Emissor"<<"\n";
                                break;
                                }


    TUAplicacao testeaplicacao;
    switch(testeaplicacao.run()){
        case TUAplicacao::SUCESSO: cout << "SUCESSO - Aplicação"<<"\n";
                                break;
        case TUAplicacao::FALHA  : cout << "FALHA - Aplicação"<<"\n";
                                break;
                                }

    TUProduto testeproduto;
    switch(testeproduto.run()){
        case TUProduto::SUCESSO: cout << "SUCESSO - Produto"<<"\n";
                                break;
        case TUProduto::FALHA  : cout << "FALHA - Produto"<<"\n";
                                break;
                                }

    TUUsuario testeusuario;
    switch(testeusuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO - Usuario"<<"\n";
                                break;
        case TUUsuario::FALHA  : cout << "FALHA - Usuario"<<"\n";
                                break;
                                }

    TUConta testeconta;
    switch(testeconta.run()){
        case TUConta::SUCESSO: cout << "SUCESSO - Conta"<<"\n";
                                break;
        case TUConta::FALHA  : cout << "FALHA - Conta"<<"\n";
                                break;
                                }


    return 0;

}
