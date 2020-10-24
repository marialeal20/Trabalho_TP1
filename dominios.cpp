
#include "dominios.h"
#include <iostream>
#include <string>
#include "entidades.h"


/************ Classe Endereço *****************************/

void Endereco::validar(string endereco) throw (invalid_argument){
  int validarta = 0;

    if(endereco.length() < tamanhoMin || endereco.length() > tamanhoMax ){
         throw invalid_argument("Endereco com tamanho invalido");
    }


    for (int i = 0 ; i < endereco.length();i++){
        // Verificar os digitios dentro do modelo
        if( isalpha(endereco[i]) || isdigit(endereco[i]) || endereco[i] == ' ' || endereco[i] == '.'){
        }
        else{
            throw invalid_argument("Endereço invalido");
        }

        // checar se há dois ' '
        if ( endereco[i] == ' ' && endereco[i+1] == ' '){
            throw invalid_argument("Dois espaços");
        }
        // checar se há dois '.'
        if ( endereco[i] == '.' && endereco[i+1] == '.'){
            throw invalid_argument("Dois espaços");
        }

        // verifica se a letra depois do ' ' é maiscula
        if( endereco[i] == ' ' && islower(endereco[i+1])){
            throw invalid_argument ("Erro na letra maiscula");
        }
/* --------- Modifica a sequência de digitos, só podem ter digitos após de digitos ou letras após letras
        // verifica a sequÊncia dos digitos
        if( isalpha(endereco[i])  && isdigit(endereco[i+1])){
            throw invalid_argument ("Sequencia de digitos errada");
        }
        if( isalpha(endereco[i+1])  && isdigit(endereco[i])){
            throw invalid_argument ("Sequencia de digitos errada");
        }
*/
    }

    if(islower(endereco[0])){
        throw invalid_argument("letra inicial não maiscula");
    }


}
void Endereco::setEndereco(string endereco) throw (invalid_argument){

    validar(endereco);

    this->endereco = endereco;

}


/************ Classe Nome *****************************/

void Nome::validar(string nome) throw (invalid_argument){
  int validarta = 0;

    // verifica o tamanho máximo

    if(nome.length() < tamanhoMin || nome.length() > tamanhoMax ){
         throw invalid_argument("Nome com tamanho invalido");
    }


    for (int i = 0 ; i < nome.length();i++){
        // checar se há dois ' '
        if ( nome[i] == ' ' && nome[i+1] == ' '){
            throw invalid_argument("Dois espaços");
        }
        // verifica se a letra depois do ' ' é maiscula
        if( nome[i] == ' ' && islower(nome[i+1])){
            throw invalid_argument ("Erro na letra maiscula");
        }

        // verificar o tamanho dos nomes
        validarta ++;
        if( nome[i] == ' ' && i > 0){
            if(validarta-1 < 5){
                throw invalid_argument ("Tamanho de nome invalido ");
                validarta = 0;
            }
            else {
                validarta = 0;
            }
        }
    }
    if(validarta < 5){
        throw invalid_argument ("Tamanho de nome invalido");
        validarta = 0;
    }

    if(islower(nome[0])){
        throw invalid_argument("letra inicial não maiscula");
    }



}

void Nome::setNome(string nome) throw (invalid_argument){

    validar(nome);

    this->nome = nome;

}


/************ Classe Horário *****************************/


void Horario::validar(string horario) throw (invalid_argument){

// Verificar Length da String

    if(horario.length() > horarioSize ){
        throw invalid_argument("Hora Invalida");
    }

// Verifica se há somente números no horario

    for (int i = 0; i < horario.length(); i++){
        if (isdigit(horario[i]) == false && i != 2){
            throw invalid_argument("Hora Invalida");
        }
    }

// checa os horários
    int horarioHora1, horarioHora2;
    int horarioMinutos1, horarioMinutos2;
    int horarioHora, horarioMinutos;
    horarioHora1 = (int)horario[0] - '0';
    horarioHora2 = (int)horario[1] - '0';
    horarioHora = horarioHora1*10 + horarioHora2;

    if(horarioHora > 17 || horarioHora < 13){
        throw invalid_argument("Hora Invalida");
    }


    horarioMinutos1 = (int)horario[3] - '0';
    horarioMinutos2 = (int)horario[4] - '0';
    horarioMinutos = horarioMinutos1*10 + horarioMinutos2;

    if(horarioMinutos > 60 || horarioMinutos < 0 ){
        throw invalid_argument("Hora Invalida");
            }


}

void Horario::setHorario(string horario) throw (invalid_argument){

    validar(horario);

    this->horario = horario;

}


/************ Classe Senha *****************************/

void Senha::validar(string senha) throw (invalid_argument){

// Verificar Length da String

    if(senha.length() > senhaSize ){
        throw invalid_argument("Senha com tamanho não autorizado");
    }

// Verifica se há somente números na senha
   int estado = 0;
    for (int i = 0; i < senha.length(); i++){
        if (isdigit(senha[i]) == false){
            estado = 1;
            throw invalid_argument("Character não Autorizado");
        }
    }

// Verifica se há numeros repetidos
    char senhaChar;

    for(int i = 0; i < senha.length(); i++){
        senhaChar = senha[i];
        for(int j = 0; j < senha.length(); j++){
           if(j != i && senhaChar == senha[j]){
                throw invalid_argument("Senha com números repetidos");
                break;
            }
        }
    }

}

void Senha::setSenha(string senha) throw (invalid_argument){

    validar(senha);
    this->senha = senha;

}

/************ Classe Prazo *****************************/

void Prazo::validar(int prazo) throw (invalid_argument){
    int estado = 0;
    int base = 6;

    do{
        if(prazo == base){
            estado = 1;
        }

        base += 6;

    }while(base <= 72);


    if(estado == 0){
        throw invalid_argument("Prazo invalido.");
    }
}

void Prazo::setPrazo(int prazo) throw (invalid_argument){

    validar(prazo);
    this->prazo = prazo;

}

/************ Classe Valor de Aplicação *****************************/

void ValorApl::validar(float valorApl) throw (invalid_argument){

    if(valorApl < valorMin || valorApl > valorMax){
        throw invalid_argument("Valor invalido.");
    }
}

void ValorApl::setValorApl(float valorApl) throw (invalid_argument){

    validar(valorApl);
    this->valorApl = valorApl;

}


/************ Classe Taxa *****************************/

void Taxa::validar(float taxa) throw (invalid_argument){

// Verificar se esta dentro dos parâmetros aceitados

    if(taxa > taxaMax || taxa < taxaMin){
        throw invalid_argument("Taxa Não autorizada");
    }

}

void Taxa::setTaxa(float taxa) throw (invalid_argument){

    validar(taxa);
    this->taxa = taxa;

}


/************ Classe Valor Minimo *****************************/

void ValorMin::validar(float valorMin) throw (invalid_argument){

    int estado = 1;
    float validos[4] = {1000.00 , 5000.00 , 10000.00 , 50000.00};

    for(int i = 0; i < 4; i++){
        if(valorMin == validos[i]){
            estado = 0;
        }
    }

    if(estado == 1){
        throw invalid_argument("Valor invalido.");
    }
}

void ValorMin::setValorMin(float valorMin) throw (invalid_argument){

    validar(valorMin);
    this->valorMin = valorMin;

}



/************ Classe Conta *****************************/

void Conta::validar(string conta) throw (invalid_argument){

    if(conta.length() != contaLength ){
        throw invalid_argument ("Conta do tamanho errado");
        // primeiro throw
    }

    // verifica se só há números dentro das string
    for (int i = 0; i < conta.length() - 2; i++){
        if (isdigit(conta[i]) == false){
            throw invalid_argument ("Conta com argumentos não validos ");
        }
    }
    // verifica se existe o traço -


    if(conta[6] != '-'){
        throw invalid_argument("Conta com argumento invalido");
    }

    // Calculo do número verificador

    int numBase;
    float result = 1;
    for (int i = 0; i < conta.length() - 2; i++){
        numBase = (int)conta[i] - '0';
        result = result*numBase;
    }

    float resto = (result/11)-11;
    resto = (resto - (int)resto)*10;
    int NumVerificador = resto;

    if( ( (int)conta[7] - '0') != NumVerificador){
        throw invalid_argument("Digito Verificador Invalido");
    }


}
void Conta::setConta(string conta) throw (invalid_argument){

    validar(conta);

    this->conta = conta;

}

// --------------------------------------------------------

/***************Classe Cep********************/


void Cep::validar(int codigoCep) throw (invalid_argument){ //Valida os valores fornecidos de Cep dentro das faixas aceitas

    if (codigoCep < 1000000 || (codigoCep > 59999999 && codigoCep < 8000000) || (codigoCep > 8499999 && codigoCep < 20000000) || (codigoCep > 26600999 && codigoCep < 70000000) ||
        (codigoCep > 70999999 && codigoCep < 40000000) || (codigoCep > 41999999 && codigoCep < 60000000) || codigoCep > 60999999){

        throw invalid_argument("Argumento invalido.");
    }
}


void Cep::setCep(int codigoCep) throw(invalid_argument){
    validar(codigoCep);
    setCidade(codigoCep);
    this->codigoCep=codigoCep;
}

void Cep::setCidade(int codigoCep) throw (invalid_argument){
    if ((codigoCep >=1000000 && codigoCep <= 5999999) || (codigoCep >=8000000 && codigoCep <= 8499999)){
        Cidade = "SÃ£o Paulo";
    }
    if ((codigoCep >=20000000 && codigoCep <= 26600999) ){
        Cidade = "Rio de Janeiro";
    }
     if ((codigoCep >=70000000 && codigoCep <= 70999999) ){
        Cidade = "BrasÃ­lia";
    }
     if ((codigoCep >=40000000 && codigoCep <= 41999999) ){
        Cidade = "Salvador";
    }
     if ((codigoCep >=60000000 && codigoCep <= 60999999) ){
        Cidade = "Fortaleza";
    }

}

/************ Classe Classe *****************************/

void Classe::validar (string textoClasse) throw (invalid_argument){ //Valida se o valor recebido em textoClasse está dentro dos valores possiveis

    if (textoClasse != "CDB" && textoClasse != "LCA" && textoClasse != "LCI" && textoClasse != "LF" && textoClasse != "LC"){
        throw invalid_argument("Argumento invalido");
    }
}

void Classe::setClasse(string textoClasse) throw(invalid_argument){
    validar(textoClasse);
    this ->textoClasse=textoClasse;
     }

/************ Classe CÓDIGO AGENCIA*********************/

void CodigoAgencia:: validar (int codigoAgencia) throw (invalid_argument){ //Faz a validaçao dos valores de codigoAgencia recebidos

    if ((codigoAgencia < 0001) || (codigoAgencia >  9999)){
        throw invalid_argument("Argumento invalido");
    }
}


void CodigoAgencia::setCodigoAgencia(int codigoAgencia) throw(invalid_argument){
    validar(codigoAgencia);
    this ->codigoAgencia=codigoAgencia;
     }

/************** Classe CODIGO APLICAÇÃO ****************************/

void CodigoAplicacao:: validar (int codigoAplicacao) throw (invalid_argument){ // Analisa se o dado esta dentro da faixa esperada

    if (codigoAplicacao < 00001 || codigoAplicacao >  99999){
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoAplicacao::setCodigoAplicacao(int codigoAplicacao) throw(invalid_argument){
    validar(codigoAplicacao);
    this ->codigoAplicacao=codigoAplicacao;
     }

/************** Classe CODIGO BANCO ****************/

void CodigoBanco::validar(int codigoBanco) throw (invalid_argument){ //Faz a validacao dos codigos de banco de acordo com os bancos validos

    if ((codigoBanco != 341) && (codigoBanco != 001) && (codigoBanco != 237) && (codigoBanco != 104) && (codigoBanco != 033)){

        throw invalid_argument("Argumento invalido.");}}

void CodigoBanco::setCodigoBanco(int codigoBanco) throw(invalid_argument){
    validar(codigoBanco);
    this ->codigoBanco=codigoBanco; }

string CodigoBanco::setBanco(int codigoBanco) throw (invalid_argument){ //Retorna o valor do banco de acordo com o valor do codigo inserido
    if (codigoBanco == 341){
        Banco = "Itaú Unibanco S.A.";
    }
    if (codigoBanco == 001){
        Banco = "Banco do Brasil S.A.";
    }
     if (codigoBanco == 237){
        Banco = "Banco Bradesco S.A.";
    }
     if (codigoBanco == 104){
        Banco = "Caixa Econômica Federal";
    }
     if (codigoBanco == 033){
        Banco = "Banco Santander(Brasil) S.A.";
    }
    else {
        throw invalid_argument("Argumento invalido.");}

    return Banco;

}

//fonte dos códigos: https://blog.vhsys.com.br/numero-do-banco/
// fonte dos 5 maiores banacos: https://pt.wikipedia.org/wiki/Lista_dos_maiores_bancos_do_Brasil

/************** Classe CODIGO PRODUTO ****************************/

void CodigoProduto:: validar (int codigoProduto) throw (invalid_argument){ //Faz a validacao da entrada que foi colocada

    if (codigoProduto < 001 || codigoProduto >  999){
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoProduto::setCodigoProduto(int codigoProduto) throw(invalid_argument){
    validar(codigoProduto);
    this ->codigoProduto=codigoProduto;
     }

/************** Classe Cpf ****************************/

void Cpf:: validar (string numCpf) throw (invalid_argument){ //Faz a validacao do Cpf
// São duas etapas de validaçao, e para isso serão usadas duas variaveis de validaçao mais dois auxiliares para o calculo

    int validar1=0;
    int validar2=0;
    int aux1, aux2;

    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11; //pegam dentro do vetor string, todos os numeros e transformam em int
    n1= numCpf[0]-'0';
    n2= numCpf[1]-'0';
    n3= numCpf[2]-'0';
    n4= numCpf[4]-'0';
    n5= numCpf[5]-'0';
    n6= numCpf[6]-'0';
    n7= numCpf[8]-'0';
    n8= numCpf[9]-'0';
    n9= numCpf[10]-'0';
    n10= numCpf[12]-'0';
    n11= numCpf[13]-'0';

   aux1= (n1*10) + (n2*9) + (n3*8) + (n4*7) + (n5*6) + (n6*5) + (n7*4) + (n8*3) + (n9*2); //faz a primeira parte do calculo onde se calculam os numeros do cpf por "pesos" de 10 a 2

   aux2= (aux1*10)%11; //Aqui vemos o calculo do (aux1*10)%11

   if (aux2 == n10){ //e verificamos se aux2 = ao primeiro digito verificador do cpf
       validar1=1; //Se sim, validar1=1
   }

   aux1= ((n1*11) + (n2*10) + (n3*9) + (n4*8) + (n5*7) + (n6*6) + (n7*5) + (n8*4) + (n9*3) + (n10*2)); // Segunda etapa de validacao, porém acrescentando o primeiro digito verificador e pesos de 11 a 2

   aux2= (aux1*10)%11; //aux2 é calculado como anteirormente

   if (aux2 == n11){ // e se o resultado for igual ao segundo digito verificador
       validar2=1; //validar2 =1
   }

    if (validar1 == 0 || validar2 ==0){ //Se um dos dois metodos de validacao não forem 1, o cpf é invalido
        throw invalid_argument("Argumento invalido.");
    }
    if ((n1== n2) && (n1==n3) && (n1==n4) && (n1==n5) && (n1==n6) && (n1==n7) && (n1==n8) && (n1==n9) && (n1==n10) && (n1==n11)){ // o cpf também nao pode ter todos os digitps iguais, isso foi verificado
        throw invalid_argument("Argumento invalido.");
    }
    if (numCpf[3]!= '.' || numCpf[7]!= '.' || numCpf[11]!= '-'){ //verificacao de se o formato fornecido de cpf ao sistema é valido
        throw invalid_argument("Argumento invalido.");
    }

}


void Cpf::setCpf(string numCpf) throw(invalid_argument){
    validar(numCpf);
    this ->numCpf= numCpf;
     }

/**************** Classe Data *********************************/

void Data:: validar (string data) throw (invalid_argument){ //faz a validação das datas

    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11; //pega os numeros pertencentes da data e transforma em int
    int dia, mes, ano;

    n1= data[0]-'0';
    n2= data[1]-'0';

    n3= data[3]-'0';
    n4= data[4]-'0';

    n5= data[6]-'0';
    n6= data[7]-'0';
    n7= data[8]-'0';
    n8= data[9]-'0';

    dia= ((n1*10)+n2); //calcula dia
    mes= ((n3*10)+n4); //calcula mes
    ano= ((n5*1000)+(n6*100)+(n7*10)+n8); //calcula ano

    if ((dia < 1) || (dia >31) || (mes <1) || (mes>12) || ano <2020 || ano > 2099){ //faz a verificacao se o dia, mes e ano sao validos
        throw invalid_argument("Argumento invalido");
    }
    if (data[2]!='/' || data[5]!='/') //verifica se os caracteres estao na posicao certa
    {
        throw invalid_argument("Argumento invalido");
    }
}

void Data::setData(string data) throw(invalid_argument){
    validar(data);
    this ->data= data;
     }

string Data::setBissexto(string data) throw (invalid_argument)
{
    int ano,n5,n6,n7,n8; //Pega os numeros que representam o ano e transformam em inteiro
    string anoB;
    n5= data[6]-'0';
    n6= data[7]-'0';
    n7= data[8]-'0';
    n8= data[9]-'0';


    ano= ((n5*1000)+(n6*100)+(n7*10)+n8); //transformam em ano

    if (((ano%400)==0)|| (((ano%4)==0) && ((ano%100)!=0))){ //verifica se o ano é bissexto, se for divisível por 400 ou se nao for divisível por 100 mas for divisivel por 4 é bissexto
        anoB= "Ano Bissexto";
    }
    else{
        anoB="Ano Não bissexto";
    }
}

/************** Classe Emissor ****************************/

void Emissor:: validar (string emissor) throw (invalid_argument){

    int tamanho;
    tamanho= emissor.size();//pega o tamando do vetor
    int x;

    if ((tamanho < 5) || (tamanho > 30)) //verifica se ele está detro da faixa esperada
    {
        throw invalid_argument("Argumento invalido.");
    }


    for(x=0; x<tamanho; x++) //verifica se tem algum caracter fora do esperado (a-z, A-Z, 0-9, ' ', '.', '-')
    {
        if ((emissor[x]!= 'A') && (emissor[x]!= 'B') && (emissor[x]!= 'C') && (emissor[x]!= 'D') && (emissor[x]!= 'E') && (emissor[x]!= 'F') && (emissor[x]!= 'G') && (emissor[x]!= 'H') && (emissor[x]!= 'I') && (emissor[x]!= 'J') && (emissor[x]!= 'K') && (emissor[x]!= 'L')
        && (emissor[x]!= 'M') && (emissor[x]!= 'N') && (emissor[x]!= 'O') && (emissor[x]!= 'P') && (emissor[x]!= 'Q') && (emissor[x]!= 'R') && (emissor[x]!= 'S') && (emissor[x]!= 'T') && (emissor[x]!= 'U') && (emissor[x]!= 'V') && (emissor[x]!= 'X') && (emissor[x]!= 'Y')
        && (emissor[x]!= 'W') && (emissor[x]!= 'Z') && (emissor[x]!= 'a') && (emissor[x]!= 'b') && (emissor[x]!= 'c') && (emissor[x]!= 'd') && (emissor[x]!= 'e') && (emissor[x]!= 'f') && (emissor[x]!= 'g') && (emissor[x]!= 'h') && (emissor[x]!= 'i') && (emissor[x]!= 'j')
        && (emissor[x]!= 'k') && (emissor[x]!= 'l') && (emissor[x]!= 'm') && (emissor[x]!= 'n') && (emissor[x]!= 'o') && (emissor[x]!= 'p') && (emissor[x]!= 'q') && (emissor[x]!= 'r') && (emissor[x]!= 's') && (emissor[x]!= 't') && (emissor[x]!= 'u') && (emissor[x]!= 'v')
        && (emissor[x]!= 'x') && (emissor[x]!= 'y') && (emissor[x]!= 'w') && (emissor[x]!= 'z') && (emissor[x]!= '0') && (emissor[x]!= '1') && (emissor[x]!= '2') && (emissor[x]!= '3') && (emissor[x]!= '4') && (emissor[x]!= '5') && (emissor[x]!= '6') && (emissor[x]!= '7')
        && (emissor[x]!= '8') && (emissor[x]!= '9') && (emissor[x]!= '-') && (emissor[x]!= '.') && (emissor[x]!= ' ')){
            throw invalid_argument("Argumento invalido");
        }
    }

    for(x=0; x<tamanho; x++){
        if ((emissor[x]== '-') || (emissor[x]== '.') || (emissor[x]== ' ')){ //verifica se tem dois caracteres seguidos
            if ((emissor[x+1]=='-') || (emissor[x+1]=='.') || (emissor[x+1]==' ')){
                throw invalid_argument ("Argumento invalido");
            }
        }
    }

    for(x=0; x<tamanho; x++){
        if ((emissor[x]== ' ') || (emissor[x]== '.') || (emissor[x]== '-')){ //Verifica se cada começo de palavra, se o termo começar com letras, elas serão maisculas
            if ((emissor[x+1]!= '0') && (emissor[x+1]!= '1') && (emissor[x+1]!= '2') && (emissor[x+1]!= '3') && (emissor[x+1]!= '4') && (emissor[x+1]!= '5') && (emissor[x+1]!= '6') && (emissor[x+1]!= '7') && (emissor[x+1]!= '8') && (emissor[x+1]!= '9')){
                if ((emissor[x+1]!='A') && (emissor[x+1]!='B') && (emissor[x+1]!='C') && (emissor[x+1]!='D') && (emissor[x+1]!='E') && (emissor[x+1]!='F') && (emissor[x+1]!='G') && (emissor[x+1]!='H') && (emissor[x+1]!='I') && (emissor[x+1]!='J') && (emissor[x+1]!='K') &&
                   (emissor[x+1]!='L') && (emissor[x+1]!='M') && (emissor[x+1]!='N') && (emissor[x+1]!='O') && (emissor[x+1]!='P') && (emissor[x+1]!='Q') && (emissor[x+1]!='R') && (emissor[x+1]!='S') && (emissor[x+1]!='T') && (emissor[x+1]!='U') && (emissor[x+1]!='V') &&
                   (emissor[x+1]!='X') && (emissor[x+1]!='W') && (emissor[x+1]!='Y') && (emissor[x+1]!='Z')){
                     throw invalid_argument ("Argumento invalido");
                }
        }

    }
}
}


void Emissor::setEmissor(string emissor) throw(invalid_argument){
    validar(emissor);
    this ->emissor=emissor;
     }







