#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"
#include <string>

using namespace std;

class Aplicacao{

private:
    CodigoAplicacao codigoAplicacao;
    ValorApl valorAplicacao;
    Data data;

public:
    void setCodigoAplicacao(const CodigoAplicacao &codigoAplicacao)
    {
        this->codigoAplicacao = codigoAplicacao;}

    void setValorApl (const ValorApl &valorAplicacao){
        this->valorAplicacao=valorAplicacao;}

    void setData (const Data &data)
    {
        this->data = data;
    }

    CodigoAplicacao getCodigoAplicacao(){
        return codigoAplicacao;
    }

    ValorApl getValorApl() {
        return valorAplicacao;
    }

    Data getData(){
        return data;
    }

};

class Produto{

private:
    CodigoProduto codigoProduto;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Data vencimento;
    Taxa taxa;
    Horario horario;
    ValorMin valorMin;

public:
    void setCodigoProduto(const CodigoProduto &codigoProduto){
        this->codigoProduto=codigoProduto;
    }

    void setClasse(const Classe &classe){
        this->classe=classe;
    }

    void setEmissor(const Emissor &emissor){
        this->emissor=emissor;
    }
    
    void setPrazo(const Prazo &prazo){
        this->prazo=prazo;
    }

    void setData(const Data &vencimento)
    {
        this->vencimento=vencimento;
    }

    void setTaxa(const Taxa &taxa){
        this->taxa=taxa;
    }

    void setHorario(const Horario &horario){
        this->horario=horario;
    }

    void setValor(const ValorMin &valorMin)
    {
        this->valorMin=valorMin;
    }

    CodigoProduto getCodigoProduto(){
        return codigoProduto;
    }
    Classe getClasse() {
        return classe;
    }
    Emissor getEmissor(){
        return emissor;
    }
    Prazo getPrazo() {
        return prazo;
    }
    Data getData() {
        return vencimento;
    }
    Taxa getTaxa() {
        return taxa;
    }
    Horario getHorario() {
        return horario;
    }
    ValorMin getValorMin(){
        return valorMin;
    }


};

#endif // ENTIDADES_H_INCLUDED