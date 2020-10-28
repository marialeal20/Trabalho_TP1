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
//--------------------------------------------

const string TUUsuario::Valor_Valido_Senha= "0123456";
const string TUUsuario::Valor_Valido_Endereco = "QmM 09 CONJUNTO F";
const string TUUsuario::Valor_Valido_Nome = "Luana Joséd Almeida Cardoso";
const string TUUsuario::Valor_Valido_Cpf = "529.982.247-25";

void TUUsuario::SetUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::TearDown(){
    delete usuario;
}

void TUUsuario::TestarCenarioSucessoNome(){
    Nome nome;
    nome.setNome(Valor_Valido_Nome);
    usuario->setNomeUsuario(nome);
    if (usuario->getNome().getNome()!= Valor_Valido_Nome)
    {estado=FALHA;}
}

void TUUsuario::TestarCenarioSucessoEndereco(){
    Endereco endereco;
    endereco.setEndereco(Valor_Valido_Endereco);
    usuario->setEnderecoUsuario(endereco);
    if (usuario->getEndereco().getEndereco()!= Valor_Valido_Endereco)
    {estado=FALHA;}
}

void TUUsuario::TestarCenarioSucessoCep(){
    Cep cep;
    cep.setCep(Valor_Valido_Cep);
    usuario->setCepUsuario(cep);
    if (usuario->getCep().getCep()!= Valor_Valido_Cep)
    {estado=FALHA;}
}


void TUUsuario::TestarCenarioSucessoCpf(){
    Cpf cpf;
    cpf.setCpf(Valor_Valido_Cpf);
    usuario->setCpfUsuario(cpf);
    if (usuario->getCpf().getCpf()!= Valor_Valido_Cpf)
    {estado=FALHA;}
}

void TUUsuario::TestarCenarioSucessoSenha(){
    Senha senha;
    senha.setSenha(Valor_Valido_Senha);
    usuario->setSenhaUsuario(senha);
    if (usuario->getSenha().getSenha()!= Valor_Valido_Senha)
    {estado=FALHA;}
}

int TUUsuario::run(){
    SetUp();
    TestarCenarioSucessoNome();
    TestarCenarioSucessoCep();
    TestarCenarioSucessoCpf();
    TestarCenarioSucessoEndereco();
    TestarCenarioSucessoSenha();
    TearDown();
    return estado;
}

// --------------------------------------------------------------------

const string TUConta::Valor_Valido_Conta = "953856-4";

void TUConta::SetUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::TearDown(){
    delete conta;
}


void TUConta::TestarCenarioSucessoAgencia(){
    CodigoAgencia agencia;
    agencia.setCodigoAgencia(Valor_Valido_Agencia);
    conta->setAgencia(agencia);
    if (conta->getCodigoAgencia().getCodigoAgencia()!= Valor_Valido_Agencia)
    {estado=FALHA;}
}

void TUConta::TestarCenarioSucessoConta(){
    Numero numero;
    numero.setNumero(Valor_Valido_Conta);
    conta->setNumeroConta(numero);
    if (conta->getNumero().getNumero()!= Valor_Valido_Conta)
    {estado=FALHA;}
}

void TUConta::TestarCenarioSucessoBanco(){
    CodigoBanco banco;
    banco.setBanco(Valor_Valido_Banco);
    conta->setBanco(banco);
    if (conta->getCodigoBanco().getCodigoBanco()!= Valor_Valido_Banco)
    {estado=FALHA;}
}

int TUConta::run(){
    SetUp();
    TestarCenarioSucessoAgencia();
    //TestarCenarioSucessoBanco();
    TestarCenarioSucessoConta();
    TearDown();
    return estado;
}

