#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

/************Teste da classe Endereço***************/
///
/// Teste de unidade da classe Endereço
///
class TUEndereco {

private:

    // Definições de constantes para evitar numeros mágicos.

    static const string enderecoValido;
    static const string enderecoInvalido;

    Endereco *endereco;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe Nome***************/
///
/// Teste de unidade da classe Nome
///

class TUNome {

private:

    // Definições de constantes para evitar numeros mágicos.

    static const string nomeValido;
    static const string nomeInvalido;

    // Referência para o objeto a ser testado.

    Nome *nome;


    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe Horario***************/
///
/// Teste de unidade da classe Horario
///

class TUHorario {

private:

    // Definições de constantes para evitar numeros mágicos.

    static const string horarioValida;
    static const string horarioInvalida;

    // Referência para o objeto a ser testado.

    Horario *horario;

    // Estado do teste.

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};


/************Teste da classe Senha***************/
///
/// Teste de unidade da classe Senha
///

class TUSenha {

private:

    static const string senhaValida;
    static const string senhaInvalida;

    Senha *senha;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

// ---------------------------------------------------------------------------------------
/************Teste da classe Prazo***************/
///
/// Teste de unidade da classe Prazo
///

class TUPrazo {

private:

    const static int valorValido   = 6;
    const static int valorInvalido = 2;

    Prazo *prazo;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe Valor da Aplicação***************/
///
/// Teste de unidade da classe Valor da Aplicação (Apl)
///
class TUValorApl {

private:

    constexpr static float valorValido   = 5000.00;
    constexpr static float valorInvalido = -15;

    ValorApl *valorApl;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};


/************Teste da classe Taxa***************/
///
/// Teste de unidade da classe Taxa
///
class TUTaxa {

private:

    static constexpr float taxaValida = 150;
    static constexpr float taxaInvalida = 500;

    Taxa *taxa;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe Valor Minimo***************/
///
/// Teste de unidade da classe ValorMinimo
///

class TUValorMin {

private:

    constexpr static float valorValido   = 5000.00;
    constexpr static float valorInvalido = -15;

    ValorMin *valorMin;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe Conta***************/
///
/// Teste de unidade da classe Conta
///
class TUConta {

private:

    static const string contaValido;
    static const string contaInvalido;

    Conta *conta;

    int estado = 0;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};



/************Teste da classe Cep***************/
///
/// Teste de unidade da classe Cep
///
class TUCep {
private:

    const static int VALOR_VALIDO   = 1000000;
    const static int VALOR_INVALIDO = 60000000;

    Cep *codigoCep;
    int estado;

///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();

///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};
/*************Teste da Classe Classe ****************/
///
/// Teste de unidade da classe Cep
///
class TUClasse {
private:

   static const string VALOR_VALIDO ;
   static const string VALOR_INVALIDO;

    Classe *textoClasse;

    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:


    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};



/*************Teste da Classe CODIGO AGENCIA**********/
///
/// Teste de unidade da classe Cep
///
class TUCodigoAgencia {
private:

    const static int VALOR_VALIDO   = 0001;
    const static int VALOR_INVALIDO = 0000;

    CodigoAgencia *codigoAgencia;

    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/*************Teste da Classe CODIGO APLICACAO**********/
///
/// Teste de unidade da classe Cep
///

class TUCodigoAplicacao {
private:

    const static int VALOR_VALIDO   = 00001;
    const static int VALOR_INVALIDO = 00000;

    CodigoAplicacao *codigoAplicacao;

    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe CODIGO BANCO***************/
///
/// Teste de unidade da classe Cep
///

class TUCodigoBanco {
private:

    const static int VALOR_VALIDO   = 001;
    const static int VALOR_INVALIDO = 260;

    CodigoBanco *codigoBanco;

    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe CODIGO PRODUTO***************/
///
/// Teste de unidade da classe Cep
///

class TUCodigoProduto {
private:

    const static int VALOR_VALIDO   = 321;
    const static int VALOR_INVALIDO = 000;

    CodigoProduto *codigoProduto;

    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/************Teste da classe Cpf***************/
///
/// Teste de unidade da classe Cep
///

class TUCpf {
private:

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Cpf *numCpf;

    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/*************** Teste da Classe Data **************/
///
/// Teste de unidade da classe Cep
///
class TUData {
private:

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Data *data;
    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

/*************** Teste da Classe Emissor **************/
///
/// Teste de unidade da classe Cep
///

class TUEmissor {
private:

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Emissor *emissor;
    int estado;
///
/// Seta o teste criando o objeto e a variavel de estado
///
    void setUp();
///
/// Destroi o objeto
///
    void tearDown();
///
/// Teste do cenario de sucesso
///
    void testarCenarioSucesso();
///
/// Testa o cenario de falha
///
    void testarCenarioFalha();
public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;
///
/// Metodo que irá juntar todos os anteriores no arquivo teste.cpp
///
    int run();
};

#endif //TESTE_H


