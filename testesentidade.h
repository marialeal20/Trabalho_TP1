#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUAplicacao{

private:

    const static int Valor_Valido_CodigoAplicacao = 00001;
    constexpr static float Valor_Valido_ValorApl = 5000.00;
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


#endif //TESTE_ENTIDADE_H