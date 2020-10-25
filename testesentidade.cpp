#include "teste.h"
#include <iostream>
#include <string>
#include "entidades.h"
#include "testesentidade.h"


const string TUAplicacao::Valor_Valido_Data= "20/04/2020";

void TUAplicacao::SetUp(){
    aplicacao = new Aplicacao();
    estado = SUCESSO;
}

void TUAplicacao::TearDown(){
    delete aplicacao;
}


void TUAplicacao::TestarCenarioSucessoCodigoAplicacao(){
    CodigoAplicacao codigoAplicacao;
    codigoAplicacao.setCodigoAplicacao(Valor_Valido_CodigoAplicacao);
    aplicacao->setCodigoAplicacao(codigoAplicacao);
    if (aplicacao->getCodigoAplicacao().getCodigoAplicacao()!= Valor_Valido_CodigoAplicacao)
    {estado=FALHA;}
}

void TUAplicacao::TestarCenarioSucessoValorApl(){
    ValorApl valorApl;
    valorApl.setValorApl(Valor_Valido_ValorApl);
    aplicacao->setValorApl(valorApl);
    if (aplicacao->getValorApl().getValorApl()!= Valor_Valido_ValorApl)
    {estado=FALHA;}
}

void TUAplicacao::TestarCenarioSucessoData(){
    Data data;
    data.setData(Valor_Valido_Data);
    aplicacao->setData(data);
    if (aplicacao->getData().getData()!= Valor_Valido_Data)
    {estado=FALHA;}
}

int TUAplicacao::run(){
    SetUp();
    TestarCenarioSucessoCodigoAplicacao();
    TestarCenarioSucessoValorApl();
    TestarCenarioSucessoData();
    TearDown();
    return estado;
}

//----------------------------------------------------------------

const string TUProduto::Valor_Valido_Data= "20/04/2020";
const string TUProduto::Valor_Valido_Classe="CDB";
const string TUProduto::Valor_Valido_Emissor= "098562 T";
const string TUProduto::Valor_Valido_Horario= "15:50";

void TUProduto::SetUp(){
    produto = new Produto();
    estado = SUCESSO;
}

void TUProduto::TearDown(){
    delete produto;
}

void TUProduto::TestarCenarioSucessoCodigoProduto(){
    CodigoProduto codigoProduto;
    codigoProduto.setCodigoProduto(Valor_Valido_CodigoProduto);
    produto->setCodigoProduto(codigoProduto);
    if (produto->getCodigoProduto().getCodigoProduto()!= Valor_Valido_CodigoProduto)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoClasse(){
    Classe classe;
    classe.setClasse(Valor_Valido_Classe);
    produto->setClasse(classe);
    if (produto->getClasse().getClasse()!= Valor_Valido_Classe)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoEmissor(){
    Emissor emissor;
    emissor.setEmissor(Valor_Valido_Emissor);
    produto->setEmissor(emissor);
    if (produto->getEmissor().getEmissor()!= Valor_Valido_Emissor)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoPrazo(){
    Prazo prazo;
    prazo.setPrazo(Valor_Valido_Prazo);
    produto->setPrazo(prazo);
    if (produto->getPrazo().getPrazo()!= Valor_Valido_Prazo)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoData(){
    Data vencimento;
    vencimento.setData(Valor_Valido_Data);
    produto->setData(vencimento);
    if (produto->getData().getData()!= Valor_Valido_Data)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoTaxa(){
    Taxa taxa;
    taxa.setTaxa(Valor_Valido_Taxa);
    produto->setTaxa(taxa);
    if (produto->getTaxa().getTaxa()!= Valor_Valido_Taxa)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoHorario(){
    Horario horario;
    horario.setHorario(Valor_Valido_Horario);
    produto->setHorario(horario);
    if (produto->getHorario().getHorario()!= Valor_Valido_Horario)
    {estado=FALHA;}
}

void TUProduto::TestarCenarioSucessoValorMin(){
    ValorMin valorMin;
    valorMin.setValorMin(Valor_Valido_ValorMin);
    produto->setValorMin(valorMin);
    if (produto->getValorMin().getValorMin()!= Valor_Valido_ValorMin)
    {estado=FALHA;}
}

int TUProduto::run(){
    SetUp();
    TestarCenarioSucessoCodigoProduto();
    TestarCenarioSucessoClasse();
    TestarCenarioSucessoEmissor();
    TestarCenarioSucessoPrazo();
    TestarCenarioSucessoData();
    TestarCenarioSucessoTaxa();
    TestarCenarioSucessoHorario();
    TestarCenarioSucessoValorMin();
    TearDown();
    return estado;
}
