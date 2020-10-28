#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUAplicacao{

private:

    const static int Valor_Valido_CodigoAplicacao = 00001;
    const static float Valor_Valido_ValorApl = 5000.00;
    static const string Valor_Valido_Data;

    Aplicacao *aplicacao;

    int estado;

    void SetUp();
    void TearDown();
    void TestarCenarioSucessoCodigoAplicacao();
    void TestarCenarioSucessoValorApl();
    void TestarCenarioSucessoData();

public:

    const static int SUCESSO =0;
    const static int FALHA=-1;

    int run();
};

class TUProduto{
private:

    Produto *produto;

    const static int Valor_Valido_CodigoProduto = 321;
    static const string Valor_Valido_Classe;
    static const string Valor_Valido_Emissor;
    const static int Valor_Valido_Prazo = 6;
    static const string Valor_Valido_Data;
    const static int Valor_Valido_Taxa = 150;
    static const string Valor_Valido_Horario;
    const static int Valor_Valido_ValorMin = 5000.00;

    int estado;

    void SetUp();
    void TearDown();
    void TestarCenarioSucessoCodigoProduto();
    void TestarCenarioSucessoClasse();
    void TestarCenarioSucessoEmissor();
    void TestarCenarioSucessoPrazo();
    void TestarCenarioSucessoData();
    void TestarCenarioSucessoTaxa();
    void TestarCenarioSucessoHorario();
    void TestarCenarioSucessoValorMin();

public:

    const static int SUCESSO =0;
    const static int FALHA=-1;

    int run();


};

class TUUsuario{
private:

    Usuario *usuario;
// constantes
    static const string Valor_Valido_Nome;
    static const string Valor_Valido_Endereco;
    static const string Valor_Valido_Cpf;
    static const string Valor_Valido_Senha;
    const static int Valor_Valido_Cep = 1000000;

    int estado;

    void SetUp();
    void TearDown();
    void TestarCenarioSucessoNome();
    void TestarCenarioSucessoEndereco();
    void TestarCenarioSucessoCep();
    void TestarCenarioSucessoCpf();
    void TestarCenarioSucessoSenha();
public:

    const static int SUCESSO =0;
    const static int FALHA=-1;

    int run();
};

class TUConta{
private:

    Conta *conta;
// Erro no banco
    static const int Valor_Valido_Banco = 001;
    static const int Valor_Valido_Agencia = 0001;
    static const string Valor_Valido_Conta;

    int estado;

    void SetUp();
    void TearDown();
    void TestarCenarioSucessoBanco();
    void TestarCenarioSucessoAgencia();
    void TestarCenarioSucessoConta();
public:

    const static int SUCESSO =0;
    const static int FALHA=-1;

    int run();
};



#endif //TESTE_ENTIDADE_H
