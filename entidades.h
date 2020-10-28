#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"
#include <string>

using namespace std;


// Codigo representando a Aplicacao
///
/// Classe de entidade que caracteriza as aplicações possíveis de serem feitas no investimento.  
///
///Essa classe contém todas as informações sobre as aplicações (código, valor e data da aplicação).

class Aplicacao{

private:
///@param CodigoAplicacao: Classe de domínio que contém os códigos das aplicações
    CodigoAplicacao codigoAplicacao;
///@param ValorApl: Classe de domínio que contém os valores das aplicações
    ValorApl valorAplicacao;
///@param Data: Classe de domínio que contém a data das aplicações
    Data data;

public:
///@param CodigoAplicacao: Classe de domínio que contém os códigos das aplicações
    void setCodigoAplicacao(const CodigoAplicacao&);
    CodigoAplicacao getCodigoAplicacao() const;

///@param ValorApl: Classe de domínio que contém os valores das aplicações
    void setValorApl(const ValorApl&);
    ValorApl getValorApl() const;

///@param Data: Classe de domínio que contém a data das aplicações
    void setData(const Data&);
    Data getData() const;

};

inline void Aplicacao :: setCodigoAplicacao(const CodigoAplicacao &codigoAplicacao)
{
    this->codigoAplicacao = codigoAplicacao;
}
///@return codigoAplicacao: retorna o código que foi recebido para a aplicação
inline CodigoAplicacao Aplicacao::getCodigoAplicacao() const
{
    return codigoAplicacao;
}

inline void Aplicacao :: setValorApl(const ValorApl &valorAplicacao)
{
    this->valorAplicacao = valorAplicacao;
}

///@return valorAplicacao: retorna o valor que foi recebido para a aplicação

inline ValorApl Aplicacao::getValorApl() const
{
    return valorAplicacao;
}

inline void Aplicacao :: setData(const Data &data)
{
    this->data = data;
}

///@return data: retorna a data que foi recebida para a aplicação

inline Data Aplicacao::getData() const
{
    return data;
}

//-----------------------------------------

class Produto{

///
/// Classe Produto é a classe que caracteriza qual é o produto que o usuário está adquirindo, ele contém todas as informações sobre esse produto
/// São essas informações (código do profuto, classe, emissor, prazo, data, taxa, horario e valor mínimo)
private:

///@param CodigoProduto: Classe de domínio que contém o código identificador do produto
    CodigoProduto codigoProduto;
///@param Classe: Classe de domínio que contém a classe em que o produto se encontra
    Classe classe;
///@param Emissor: Classe de domínio que contém oemissor do produto
    Emissor emissor;
///@param Prazo: Classe de domínio que contém o prazo de aplicação do produto em meses
    Prazo prazo;
///@param Data: Classe de domínio que contém a data de vencimento do produto
    Data vencimento;
///@param Taxa: Classe de domínio que contém a taxa de remuneração do produto
    Taxa taxa;
///@param Horario: Classe de domínio que contém o horário em que o produto foi adquirido
    Horario horario;
///@param ValorMin: Classe de domínio que contém o valor mínimo do produto
    ValorMin valorMin;

public:
///@param CodigoProduto: Classe de domínio que contém o código identificador do produto
    void setCodigoProduto(const CodigoProduto&);
    CodigoProduto getCodigoProduto() const;
///@param Classe: Classe de domínio que contém a classe em que o produto se encontra
    void setClasse(const Classe&);
    Classe getClasse() const;
///@param Emissor: Classe de domínio que contém oemissor do produto
    void setEmissor(const Emissor&);
    Emissor getEmissor() const;
///@param Prazo: Classe de domínio que contém o prazo de aplicação do produto
    void setPrazo(const Prazo&);
    Prazo getPrazo() const;
///@param Data: Classe de domínio que contém a data de vencimento do produto
    void setData(const Data&);
    Data getData() const;
///@param Taxa: Classe de domínio que contém a taxa de remuneração do produto
    void setTaxa(const Taxa&);
    Taxa getTaxa() const;
///@param Horario: Classe de domínio que contém o horário em que o produto foi adquirido
    void setHorario(const Horario&);
    Horario getHorario() const;
///@param ValorMin: Classe de domínio que contém o valor mínimo do produto
    void setValorMin(const ValorMin&);
    ValorMin getValorMin() const;
};

inline void Produto :: setCodigoProduto(const CodigoProduto &codigoProduto)
{
    this->codigoProduto = codigoProduto;
}
///@return codigoProduto: Retorna o código que foi inserido para o produto
inline CodigoProduto Produto::getCodigoProduto() const
{
    return codigoProduto;
}

inline void Produto :: setClasse(const Classe &classe)
{
    this->classe = classe;
}
///@return classe: Retorna a classe do produto
inline Classe Produto::getClasse() const
{
    return classe;
}

inline void Produto :: setEmissor(const Emissor &emissor)
{
    this->emissor = emissor;
}
///@return emissor: Retorna o emissor do produto
inline Emissor Produto::getEmissor() const
{
    return emissor;
}

inline void Produto :: setPrazo(const Prazo &prazo)
{
    this->prazo = prazo;
}
///@return prazo: Retorna o prazo do produto
inline Prazo Produto::getPrazo() const
{
    return prazo;
}

inline void Produto :: setData(const Data &vencimento)
{
    this->vencimento = vencimento;
}
///@return vencimento: Retorna a data de vencimento do produto
inline Data Produto::getData() const
{
    return vencimento;
}

inline void Produto :: setTaxa(const Taxa &taxa)
{
    this->taxa = taxa;
}
///@return taxa: Retorna a taxa do produto

inline Taxa Produto::getTaxa() const
{
    return taxa;
}

inline void Produto :: setHorario(const Horario &horario)
{
    this->horario = horario;
}
///@return horario: Retorna o horario em que o produto foi adquirido
inline Horario Produto::getHorario() const
{
    return horario;
}

inline void Produto :: setValorMin(const ValorMin &valorMin)
{
    this->valorMin = valorMin;
}
///@return valorMin: Retorna o valorMin que o produto pode ter
inline ValorMin Produto::getValorMin() const
{
    return valorMin;
}

// ------------------------------------------------------------------------------------

class Conta{
    private:
        CodigoBanco banco;
        CodigoAgencia agencia;
        Numero numeroConta;
    public:
        void setBanco(const CodigoBanco&);
        void setAgencia(const CodigoAgencia&);
        void setNumeroConta(const Numero&);

        Numero getNumero() const;
        CodigoAgencia getCodigoAgencia() const;
        CodigoBanco getCodigoBanco() const;
};

inline void Conta::setBanco(const CodigoBanco &banco){
    this->banco = banco;
}

inline void Conta::setAgencia(const CodigoAgencia &agencia){
    this->agencia = agencia;
}

inline void Conta::setNumeroConta(const Numero &numeroConta){
    this->numeroConta = numeroConta;
}

inline CodigoBanco Conta::getCodigoBanco() const{
    return banco;
}

inline CodigoAgencia Conta::getCodigoAgencia() const{
    return agencia;
}

inline Numero Conta::getNumero() const{
    return numeroConta;
}

//-----------------------------------------------
class Usuario{
    private:
        Nome nomeUsuario;
        Endereco endUsuario;
        Cep cepUsuario;
        Cpf cpfUsuario;
        Senha senhaUsuario;
    public:

        void setNomeUsuario(const Nome&);
        void setEnderecoUsuario(const Endereco&);
        void setCepUsuario(const Cep&);
        void setCpfUsuario(const Cpf&);
        void setSenhaUsuario(const Senha&);

        Nome getNome() const;
        Endereco getEndereco() const;
        Cep getCep() const;
        Cpf getCpf() const;
        Senha getSenha() const;

};

inline void Usuario::setNomeUsuario(const Nome &nomeUsuario){
    this->nomeUsuario = nomeUsuario;
}

inline void Usuario::setEnderecoUsuario(const Endereco &endUsuario){
    this->endUsuario = endUsuario;
}

inline void Usuario::setCepUsuario(const Cep &cepUsuario){
    this->cepUsuario = cepUsuario;
}

inline void Usuario::setCpfUsuario(const Cpf &cpfUsuario){
    this->cpfUsuario = cpfUsuario;
}

inline void Usuario::setSenhaUsuario(const Senha &senhaUsuario){
    this->senhaUsuario = senhaUsuario;
}

inline Nome Usuario::getNome() const{
    return nomeUsuario;
}

inline Endereco Usuario::getEndereco() const{
    return endUsuario;
}

inline Cep Usuario::getCep() const{
    return cepUsuario;
}

inline Cpf Usuario::getCpf() const{
    return cpfUsuario;
}

inline Senha Usuario::getSenha() const{
    return senhaUsuario;
}


#endif // ENTIDADES_H_INCLUDED
