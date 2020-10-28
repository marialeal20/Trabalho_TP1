#include "teste.h"
#include <iostream>
#include <string>
#include "entidades.h"
// Definições de métodos.

const string TUEndereco::enderecoValido = "QmM 09 CONJUNTO F";
const string TUEndereco::enderecoInvalido = "aaaaasa2 02";

void TUEndereco::setUp(){
    endereco = new Endereco();;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(enderecoValido);
        if (endereco->getEndereco() != enderecoValido)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(enderecoInvalido);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEndereco::run(){

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();


    return estado;
}

// ---------------------------------------------------------------------------------------------


const string TUNome::nomeValido = "Luana Joséd Almeida Cardoso";
const string TUNome::nomeInvalido = "Luan  Jo Coisado";

void TUNome::setUp(){
    nome = new Nome();;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(nomeValido);
        if (nome->getNome() != nomeValido)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(nomeInvalido);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();


    return estado;
}


// -------------------------------------------------------


const string TUHorario::horarioValida = "15:50";
const string TUHorario::horarioInvalida = "54:90";

void TUHorario::setUp(){
    horario = new Horario();;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(horarioValida);
        if (horario->getHorario() != horarioValida)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setHorario(horarioInvalida);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUHorario::run(){

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();


    return estado;
}

// ----------------------------------------------------


const string TUSenha::senhaValida = "0123456";
const string TUSenha::senhaInvalida = "0120456";

void TUSenha::setUp(){
    senha = new Senha();;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(senhaValida);
        if (senha->getSenha() != senhaValida)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(senhaInvalida);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//-----------------------------------------------------

void TUPrazo::setUp(){
    prazo = new Prazo();;
}

void TUPrazo::tearDown(){
    delete prazo;
}

void TUPrazo::testarCenarioSucesso(){
    try{
        prazo->setPrazo(valorValido);
        if (prazo->getPrazo() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUPrazo::testarCenarioFalha(){
    try{
        prazo->setPrazo(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUPrazo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ---------------------------------------------------------------

void TUValorApl::setUp(){
    valorApl = new ValorApl();;
}

void TUValorApl::tearDown(){
    delete valorApl;
}

void TUValorApl::testarCenarioSucesso(){
    try{
        valorApl->setValorApl(valorValido);
        if (valorApl->getValorApl() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUValorApl::testarCenarioFalha(){
    try{
        valorApl->setValorApl(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUValorApl::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ---------------------------------------------------

void TUTaxa::setUp(){
    taxa = new Taxa();;
}

void TUTaxa::tearDown(){
    delete taxa;
}

void TUTaxa::testarCenarioSucesso(){
    try{
        taxa->setTaxa(taxaValida);
        if (taxa->getTaxa() != taxaValida)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTaxa::testarCenarioFalha(){
    try{
        taxa->setTaxa(taxaInvalida);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTaxa::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ------------------------------------------------------

void TUValorMin::setUp(){
    valorMin = new ValorMin();;
}

void TUValorMin::tearDown(){
    delete valorMin;
}

void TUValorMin::testarCenarioSucesso(){
    try{
        valorMin->setValorMin(valorValido);
        if (valorMin->getValorMin() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUValorMin::testarCenarioFalha(){
    try{
        valorMin->setValorMin(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUValorMin::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// ---------------------------------------------------


const string TUNumero::contaValido = "953856-4";
const string TUNumero::contaInvalido = "953856-5";

void TUNumero::setUp(){
    numero = new Numero();;
}

void TUNumero::tearDown(){
    delete numero;
}

void TUNumero::testarCenarioSucesso(){
    try{
        numero->setNumero(contaValido);
        if (numero->getNumero() != contaValido)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNumero::testarCenarioFalha(){
    try{
        numero->setNumero(contaInvalido);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNumero::run(){

    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();


    return estado;
}



/*************Teste da classe Cep******************/
const int TUCep::SUCESSO;
const int TUCep::FALHA;
const int TUCep::VALOR_VALIDO;
const int TUCep::VALOR_INVALIDO;


void TUCep::setUp(){
    codigoCep = new Cep();
    estado = SUCESSO;
}

void TUCep::tearDown(){
    delete codigoCep;
}

void TUCep::testarCenarioSucesso(){
    try{
        codigoCep->setCep(VALOR_VALIDO);
        if (codigoCep->getCep() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCep::testarCenarioFalha(){
    try{
        codigoCep->setCep(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/**************Teste da classe Classe***********************/
const int TUClasse::SUCESSO;
const int TUClasse::FALHA;
const string TUClasse::VALOR_VALIDO="CDB";
const string TUClasse::VALOR_INVALIDO="CDA";


void TUClasse::setUp(){
    textoClasse = new Classe();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete textoClasse;
}

void TUClasse::testarCenarioSucesso(){
    try{
        textoClasse->setClasse(VALOR_VALIDO);
        if (textoClasse->getClasse() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        textoClasse->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**************Teste da classe do CODIGO AGENCIA************/
const int TUCodigoAgencia::SUCESSO;
const int TUCodigoAgencia::FALHA;
const int TUCodigoAgencia::VALOR_VALIDO;
const int TUCodigoAgencia::VALOR_INVALIDO;


void TUCodigoAgencia::setUp(){
    codigoAgencia = new CodigoAgencia();
    estado = SUCESSO;
}

void TUCodigoAgencia::tearDown(){
    delete codigoAgencia;
}

void TUCodigoAgencia::testarCenarioSucesso(){
    try{
        codigoAgencia->setCodigoAgencia(VALOR_VALIDO);
        if (codigoAgencia->getCodigoAgencia() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoAgencia::testarCenarioFalha(){
    try{
        codigoAgencia->setCodigoAgencia(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**************Teste da classe do CODIGO APLICACAO************/


const int TUCodigoAplicacao::SUCESSO;
const int TUCodigoAplicacao::FALHA;
const int TUCodigoAplicacao::VALOR_VALIDO;
const int TUCodigoAplicacao::VALOR_INVALIDO;


void TUCodigoAplicacao::setUp(){
    codigoAplicacao = new CodigoAplicacao();
    estado = SUCESSO;
}

void TUCodigoAplicacao::tearDown(){
    delete codigoAplicacao;
}

void TUCodigoAplicacao::testarCenarioSucesso(){
    try{
        codigoAplicacao->setCodigoAplicacao(VALOR_VALIDO);
        if (codigoAplicacao->getCodigoAplicacao() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoAplicacao::testarCenarioFalha(){
    try{
        codigoAplicacao->setCodigoAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**************Teste da classe do CODIGO BANCO************/


const int TUCodigoBanco::SUCESSO;
const int TUCodigoBanco::FALHA;
const int TUCodigoBanco::VALOR_VALIDO;
const int TUCodigoBanco::VALOR_INVALIDO;


void TUCodigoBanco::setUp(){
    codigoBanco = new CodigoBanco();
    estado = SUCESSO;
}

void TUCodigoBanco::tearDown(){
    delete codigoBanco;
}

void TUCodigoBanco::testarCenarioSucesso(){
    try{
        codigoBanco->setCodigoBanco(VALOR_VALIDO);
        if (codigoBanco->getCodigoBanco() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoBanco::testarCenarioFalha(){
    try{
        codigoBanco->setCodigoBanco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/**************Teste da classe do CODIGO PRODUTO************/

const int TUCodigoProduto::SUCESSO;
const int TUCodigoProduto::FALHA;
const int TUCodigoProduto::VALOR_VALIDO;
const int TUCodigoProduto::VALOR_INVALIDO;


void TUCodigoProduto::setUp(){
    codigoProduto = new CodigoProduto();
    estado = SUCESSO;
}

void TUCodigoProduto::tearDown(){
    delete codigoProduto;
}

void TUCodigoProduto::testarCenarioSucesso(){
    try{
        codigoProduto->setCodigoProduto(VALOR_VALIDO);
        if (codigoProduto->getCodigoProduto() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigoProduto::testarCenarioFalha(){
    try{
        codigoProduto->setCodigoProduto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigoProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


/**************Teste da classe do Cpf************/


const int TUCpf::SUCESSO;
const int TUCpf::FALHA;
const string TUCpf::VALOR_VALIDO= "529.982.247-25";
const string TUCpf::VALOR_INVALIDO= "111.111-111-11";


void TUCpf::setUp(){
    numCpf = new Cpf();
    estado = SUCESSO;
}

void TUCpf::tearDown(){
    delete numCpf;
}

void TUCpf::testarCenarioSucesso(){
    try{
        numCpf->setCpf(VALOR_VALIDO);
        if (numCpf->getCpf() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCpf::testarCenarioFalha(){
    try{
        numCpf->setCpf(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCpf::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/******************** Teste da Classe Data ***************************/

const int TUData::SUCESSO;
const int TUData::FALHA;
const string TUData::VALOR_VALIDO= "20/04/2020";
const string TUData::VALOR_INVALIDO= "31.12/2020";


void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/******************** Teste da Classe Emissor ***************************/

const int TUEmissor::SUCESSO;
const int TUEmissor::FALHA;
const string TUEmissor::VALOR_VALIDO= "098562 T";
const string TUEmissor::VALOR_INVALIDO= "oipopmmm.m";


void TUEmissor::setUp(){
    emissor = new Emissor();
    estado = SUCESSO;
}

void TUEmissor::tearDown(){
    delete emissor;
}

void TUEmissor::testarCenarioSucesso(){
    try{
        emissor->setEmissor(VALOR_VALIDO);
        if (emissor->getEmissor() != VALOR_VALIDO){
            estado = FALHA;}
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEmissor::testarCenarioFalha(){
    try{
        emissor->setEmissor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEmissor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}











