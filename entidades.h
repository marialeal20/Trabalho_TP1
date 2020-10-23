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

    CodigoAplicacao getCodigoAplicacao() const{
        return codigoAplicacao;
    }

    ValorApl getValorApl() const {
        return valorAplicacao;
    }

    Data getData() const{
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


};











#endif // ENTIDADES_H_INCLUDED