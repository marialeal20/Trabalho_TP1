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
    void setCodigoAplicacao(const CodigoAplicacao&);
    CodigoAplicacao getCodigoAplicacao() const;

    void setValorApl(const ValorApl&);
    ValorApl getValorApl() const;

    void setData(const Data&);
    Data getData() const;

};

inline void Aplicacao :: setCodigoAplicacao(const CodigoAplicacao &codigoAplicacao)
{
    this->codigoAplicacao = codigoAplicacao;
}

inline CodigoAplicacao Aplicacao::getCodigoAplicacao() const
{
    return codigoAplicacao;
}

inline void Aplicacao :: setValorApl(const ValorApl &valorAplicacao)
{
    this->valorAplicacao = valorAplicacao;
}

inline ValorApl Aplicacao::getValorApl() const
{
    return valorAplicacao;
}

inline void Aplicacao :: setData(const Data &data)
{
    this->data = data;
}

inline Data Aplicacao::getData() const
{
    return data;
}

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
    void setCodigoProduto(const CodigoProduto&);
    CodigoProduto getCodigoProduto() const;

    void setClasse(const Classe&);
    Classe getClasse() const;

    void setEmissor(const Emissor&);
    Emissor getEmissor() const;

    void setPrazo(const Prazo&);
    Prazo getPrazo() const;

    void setData(const Data&);
    Data getData() const;

    void setTaxa(const Taxa&);
    Taxa getTaxa() const;

    void setHorario(const Horario&);
    Horario getHorario() const;

    void setValorMin(const ValorMin&);
    ValorMin getValorMin() const;
};

inline void Produto :: setCodigoProduto(const CodigoProduto &codigoProduto)
{
    this->codigoProduto = codigoProduto;
}

inline CodigoProduto Produto::getCodigoProduto() const
{
    return codigoProduto;
}

inline void Produto :: setClasse(const Classe &classe)
{
    this->classe = classe;
}

inline Classe Produto::getClasse() const
{
    return classe;
}

inline void Produto :: setEmissor(const Emissor &emissor)
{
    this->emissor = emissor;
}

inline Emissor Produto::getEmissor() const
{
    return emissor;
}

inline void Produto :: setPrazo(const Prazo &prazo)
{
    this->prazo = prazo;
}

inline Prazo Produto::getPrazo() const
{
    return prazo;
}

inline void Produto :: setData(const Data &vencimento)
{
    this->vencimento = vencimento;
}

inline Data Produto::getData() const
{
    return vencimento;
}

inline void Produto :: setTaxa(const Taxa &taxa)
{
    this->taxa = taxa;
}

inline Taxa Produto::getTaxa() const
{
    return taxa;
}

inline void Produto :: setHorario(const Horario &horario)
{
    this->horario = horario;
}

inline Horario Produto::getHorario() const
{
    return horario;
}

inline void Produto :: setValorMin(const ValorMin &valorMin)
{
    this->valorMin = valorMin;
}

inline ValorMin Produto::getValorMin() const
{
    return valorMin;
}

#endif // ENTIDADES_H_INCLUDED