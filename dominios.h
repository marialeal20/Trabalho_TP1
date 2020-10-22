#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;
/**************Classe Valor de Endereço************/
///
/// Classe que representa o endereço do usuário para o registro de usuário
///
/// A representação do endereço de um usuário deve ser feita com no máximo 20 characteres podem ser letras (a-z) maisculas e minusculas, números (0 - 9) espaços ou pontos. Onde apenas letras ou digitos podem estar em sequência e a primeira letra de cada termo é maiuscula.
///
class Endereco{
    private:
        string endereco;
        int tamanhoMin = 5;
        int tamanhoMax = 20;
///
/// Metodo que valida o endereço imposto com base nas regras impostas.
/// @param endereco: string contendo o endereço do usuário
///
        void validar(string) throw (invalid_argument);

    public:
///
/// Metodo que modifica o endereço do usuário.
/// @param endereco: string contendo o endereço do usuário
///
        void setEndereco(string) throw(invalid_argument);
///
/// Metodo que retorna o endereço do usuário.
/// @return endereco: string contendo o endereço do usuário
///
        string getEndereco() const{
            return endereco;
            }
};

/**************Classe Nome************/
///
/// Classe que representa o nome do usuário.
///
/// Para um nome de usuário ser valido temos que ele deve ter no máximo 30 caracteres, com todos os nomes com 5 ou mais characteres, sendo eles separados por espaço. Não deve ocorrer repetição sequêncial de espaços e todo nome deve começar com a letra maiscula.
///


class Nome{
    private:
        string nome;
        int tamanhoMin = 5;
        int tamanhoMax = 30;
///
/// Metodo que valida o nome de usuário imposto, para que ele esteja de acordo com as normas.
/// @param nome: string contendo o nome do usuário
///
        void validar(string) throw (invalid_argument);

    public:
///
/// Metodo que modifica o nome do usuário.
/// @param nome: string contendo o nome do usuário
///
        void setNome(string) throw(invalid_argument);
///
/// Metodo que retorna o nome do usuário.
/// @return nome: string contendo o nome do usuário
///
        string getNome() const{
            return nome;
            }
};

/**************Classe Horario************/
///
/// Classe que representa o horário limite para a aplicação em algum investimento
///
/// Para a representação da Classe de Horário da aplicação temos a restrição no formato de apresentação que deve ser no formato XX:XX onde cada X é um núemro de 0 a 9. Os horários de investimento estão restritos para entre as 13:00 e 17:00
///
class Horario{
    private:
        string horario;
        int horarioSize = 5;
///
/// Metodo que valida se a hora determinada segue as restrições impsotas
/// @param horario: hora limite para um investimento apresentado na forma de uma string
///
        void validar(string) throw (invalid_argument);

    public:
///
/// Metodo que modifica o valor da hora limite para um determinado investimento
/// @param horario: hora limite para um investimento apresentado na forma de uma string
///
        void setHorario(string) throw(invalid_argument);
///
/// Metodo que retorna a hora limite de um determinado investimento
/// @param horario: hora limite para um investimento apresentado na forma de uma string
///
        string getHorario() const{
            return horario;
            }
};

/**************Classe Senha************/
///
/// Classe que representa a senha de acesso para um usuário
///
/// Para a modelagem da senha de acesso o usuário deverá coloca-la no formato XXXXXX onde cada X representa um número de 0 a 9. Na senha definida não pode ocorrer repetição de digitos.
///
class Senha{
    private:
        string senha;
        int senhaSize = 7;
///
/// Metodo que valida se a senha imposta pelo usuário está de acordo com as normas determinadas
/// @param senha: Senha de acesso do usuario no modelo string
///
        void validar(string) throw (invalid_argument);

    public:
///
/// Metodo para módificação da senha de um usuário
/// @param senha: Senha de acesso do usuario no modelo string
///
        void setSenha(string) throw(invalid_argument);
///
/// Metodo que retorna a string com a senha imposta pelo usuário
/// @return senha: Senha de acesso do usuario no modelo string
///
        string getSenha() const{
            return senha;
            }
};

/**************Classe Prazo************/
///
/// Classe que representa o prazo de uma dada aplicação em meses
///
/// Nesta classe temos a restrição que a aplicação tem um prazo de 6 , 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72 mêses
///
class Prazo{
    private:
        int prazo;
///
/// Metodo que valida se o prazo escolhido está dentre os disponivies para o modelo
/// @param prazo: Numero de mêses de uma aplicação
///
        void validar(int) throw (invalid_argument);

    public:
///
/// Metodo que modifica o valor do número de mêses de uma aplicação
/// @param prazo: Numero de mêses de uma aplicação
///
        void setPrazo(int) throw(invalid_argument);
///
/// Metodo que retorna no formato inteiro o número de meses para uma determinada aplicação
/// @return prazo: Numero de mêses de uma aplicação
///
        int getPrazo() const{
            return prazo;
            }
};
/**************Classe Valor de Aplicação************/
///
/// Classe que representa o valor de aplicação para um produto.
///
/// Para esta classe temos que o valor de aplicação tem de estar contido entre R$ 0,00 e R$ 1.000.000,00
///
class ValorApl{
    private:
        float valorApl;
        float valorMin = 0;
        float valorMax = 1000000.00;

///
/// Metodo que valida se o valor da aplicação se encontra dentro dos limites esperados
/// @param valorApl: Valor da aplicação em reais
///
        void validar(float) throw (invalid_argument);

    public:
///
/// Metodo que módifica o valor de uma dada aplicação
/// @param valorApl: Valor da aplicação em reais
///
        void setValorApl(float) throw(invalid_argument);
///
/// Metodo que retorna o valor da aplicação;
/// @return valorApl: Valor da aplicação em reais apresentado no formato float
///
        float getValorApl() const{
            return valorApl;
            }
};

/**************Classe Taxa************/
///
/// Classe que representa a taxa de remuneração para um dado produto de investimento
///
/// O valor Minimo da taxa apresentado em porcentagem de 0 a 200% ao ano
///
class Taxa  {
    private:
        float taxa;
        float taxaMax = 200;
        float taxaMin = 0;

///
/// Metodo que valida se o taxa de remuneração está entre os valores esperados.
/// @param taxa: Valor de taxa de remuneração em % ao ano
///
        void validar(float) throw (invalid_argument);

    public:
///
/// Metodo que modifica o valor da taxa de investimento do produto.
/// @param taxa: Valor de taxa de remuneração em % ao ano
///

        void setTaxa(float) throw(invalid_argument);

///
/// Metodo que retorna o valor da taxa de remuneração ao uma variavel do código.
/// @param taxa: Valor de taxa de remuneração em % ao ano
///
        float getTaxa() const{
            return taxa;
            }
};

/**************Classe Valor Minimo************/
///
/// Classe que representa o valor mínimo de uma aplicação
///
/// O valor mínimo da conta tem restrição de ser R$ 1.000,00 ; R$ 5.000,00 ; R$ 10.000,00 e R$ 50.000,00
///

class ValorMin{
    private:
        float valorMin;


///
/// Metodo que valida se o valor minimo de uma aplicação esta de acordo com o esperado.
/// @param valorMin: Apresenta o valor mínimo de uma aplicação
///
        void validar(float) throw (invalid_argument);

    public:

///
/// Metodo para módificar o valor da variavel valorMin.
/// @param valorMin: Apresenta o valor mínimo de uma aplicação
///
        void setValorMin(float) throw(invalid_argument);

///
/// Metodo que apresenta o valor imposto ao Valor Minimo da aplicação.
/// @return valorMin: Apresenta o valor mínimo de uma aplicação
///
        float getValorMin() const{
            return valorMin;
            }
};

/**************Classe Conta ************/
///
/// Classe Conta é uma classe composta por metodos set e get para o número de Conta fornecido.
///
/// Os valores da conta são possuem a restrição de estarem no formato XXXXXX-Y, onde os X representam números de 0 a 9 e o Y é o digito verificador. A forma de calculo do digito verificador adotada é feita atravez da Multiplicação de todos os digitos da conta e então divizão e subtração do resultado por 11, o resto desta operação é o digito vérificador valido para a conta.
///

class Conta  {
    private:
        string conta;
        int contaLength = 8;


///
/// Metodo que valida se o valor recebido está dentro das caracteristicas especificadas
/// @param conta: código do tipo string que representa a conta do usuário, da forma XXXXXX-Y
///
        void validar(string) throw (invalid_argument);

    public:
///
/// Método de chamada para alteração da conta do usuário
/// @param conta: código do tipo string que representa a conta do usuário, da forma XXXXXX-Y
///
        void setConta(string) throw(invalid_argument);

/// Método de retorno da conta já verificada
/// @return conta: valor da conta do usuário já verificada
///
        string getConta() const{
            return conta;
            }
};


/**************Classe Cep ************/
///
/// Classe Cep e uma classe composta por metodos de set e get para o numero do Cep fornecido e para determinar a cidade de acordo com o cep recebido, o cep tambem possui algumas faixas aceitaveis
///
/// Os valores de Cep possíveis variam entre faixas e cada faixa é relacionada a uma cidade. Essas faixas são: São Paulo (1000000 a 5999999 e 8000000 a 8499999), Rio de Janeiro (20000000 a 26600999), Brasília (70000000 a 70999999), Salvador (40000000 a 41999999) e Fortaleza (60000000 a 60999999). Qualquer outro valor fora dessa faixa é dado como argumento inválido
///
class Cep{

private:

    int codigoCep;
    string Cidade;

///
/// Metodo que valida se o valor recebido está dentro da faixa aceita pela classe, em caso negativo, é lancaça uma exceção de argumento inválido
/// @param codigoCep: código do tipo inteiro que determina o número do Cep
///
    void validar(int) throw (invalid_argument); //Validar o número recebido de codigoCep dentro das faixas permitidas pela classe

public:
///
/// @return codigoCep: o codigo do Cep que foi recebido ṕela classe
///
     int getCep(){
        return codigoCep;
        }
///
/// @param codigoCep: código do tipo inteiro que determina o número do Cep
///
    void setCep(int) throw (invalid_argument);

///
/// @param codigoCep :código do tipo inteiro que determina o número do Cep
///
    void setCidade(int) throw (invalid_argument);

};

/*********Classe Classe***********************/

///
/// A Classe Classe possui metodos do tipo set e get públicos que permitem acessar os dados da classe podendo para seus dados (textoClasse) do tipo string. As faixas possíveis para essa classe são "CDB, LCA, LCI, LF ou LC"
///

class Classe{


private:
    string textoClasse;

///
/// Metodo que valida se o valor recebido está dentro da faixa aceita pela classe, em caso negativo, é lancaça uma exceção de argumento inválido
/// @param textoClasse: o valor em formato de string referente ao tipo de Classe dentro do investimento
///
    void validar(string) throw (invalid_argument);

public:
///
/// @return retorna o valor recebido de textoClasse
///
    string getClasse(){
        return textoClasse;
    }
///
/// Metodo que chama a função validar antes de setar o valor de Classe e lança excessão
/// @param textoClasse: recebe um parametro do tipo string
///
    void setClasse(string)throw (invalid_argument);

};

/********* Classe CodigoAgencia************/

///
/// A classe CodigoAgencia recebe valores do tipo inteiro de 4 digitos, sendo que esses digitos são de (0-9) e nao incluem o valor 0000
///
class CodigoAgencia{

private:
    int codigoAgencia;
///
/// metodo que valida se os valores estao dentro do esperado para a classe
///
    void validar (int) throw (invalid_argument);

public:
///
/// @return codigoAgencia retorna o valor recebido de numero agencia e permite seu uso tendo em visto que esse atributo e privado
///
    int getCodigoAgencia(){
        return codigoAgencia;
    }

///
/// Atributo publico que Seta o valor de numero da agencia
/// @param codigoAgencia: valores do tipo inteiro
///
    void setCodigoAgencia(int) throw (invalid_argument);
};

/********* Classe CodigoAplicacao **************/
///
/// A classe CodigoAplicacao possui metodos publicos de set e get para que o codigo possa utilizar as informaçoes privadas. Os valores recebidos por ele possuem uma faixa aceitável de 5 digitos de 0-9 nao podendo estes serem 00000
///
class CodigoAplicacao{
private:
    int codigoAplicacao;
    void validar (int) throw (invalid_argument);

public:
///
/// O metodo get codigo permita que utilizemos o dado privado codigoAplicacao
/// @return codigoAplicacao: do tipo inteiro e deve estar dentro de uma faixa aceitavel de 5 digitos, não podendo eles serem totalmente nulos
///
    int getCodigoAplicacao(){
        return codigoAplicacao;
    }
///
/// O metodo publico set permite que sejam setados os dados privados contendo lançamento de excessao de argumento invalido caso esteja fora da faixa esperada
/// @param codigoAplicacao do tipo inteiro
///

    void setCodigoAplicacao(int) throw (invalid_argument);
};

/********* Classe CodigoBanco **************/

///
/// A classe CodigoBanco possui metodos publicos que validam os 5 maiores bancos brasileiros por ativos totais e setam os codigos fornecidos a cada um desses bancos
///
/// 341- "Itaú Unibanco S.A.", 001-"Banco do Brasil S.A.", 237- "Banco Bradesco S.A.", 104-"Caixa Econômica Federal", 033-"Banco Santander(Brasil) S.A."  ;

class CodigoBanco{
private:
    int codigoBanco;
    string Banco;
///
/// Faz a validacao dos banco e ve se eles estao dentro da faixa esperada (um dos 5 bancos)
/// @param codigoBanco deve ser um inteiro que se relaciona a um banco especifico
///
    void validar (int) throw (invalid_argument);

public:
///
/// Permite que utilizamos os dados privados de CodigoBanco
/// @return codigoBanco: retorna o codigo para que possamos utilizar ele ao longo do codigo
///
    int getCodigoBanco(){
        return codigoBanco;
    }
///
/// Faz o set do codigo e lanca excessao de argumento invalido se esse codigo estiver fora da faixa esperada
/// @param codigoBanco: Recebe o codigo do banco para poder verificar se é um valor valido
///
    void setCodigoBanco(int) throw (invalid_argument);

///
/// Metodo publico que relaciona o valor do codigo do banco ao nome do banco
/// @param codigoBanco: Recebe o codigo do banco
/// @return Banco: retorna o nome do banco de acordo com o codigo inserido
///
    string setBanco (int) throw (invalid_argument);
};

/********* Classe CODIGO PRODUTO **************/

///
/// O CodigoProduto é uma classe que contem atributos publicos que permitem acesso aos atributos privados e alguns metodos lançam excessão caso esteja fora da faixa esperada
/// A faixa esperada é de um numero com 3 digitos de 0-9 não podendo ser 000
///

class CodigoProduto{
private:
    int codigoProduto;

///
/// Metodo responsavel por validar se o codigo esta dentro da faixa permitida
/// @param codigoProduto:do tipo inteiro podendo assumir digitos de 0-9
///
    void validar (int) throw (invalid_argument);

public:

///
/// Permite o uso de atributos privatos
/// @return codigoProduto: retorna o valor de numero do produto
///
    int getCodigoProduto(){
        return codigoProduto;
    }

///
/// Faz o set do Numero de produto
/// @param codigoProduto: Pega como parametro o codigo do produto, faz a validacao e faz lançamento de excessão se o valor nao for valido
///
    void setCodigoProduto(int) throw (invalid_argument);
};

/********* Classe Cpf **************/

///
/// Classe para validar e receber o valor do Cpf do usuário o CPF possui um algoritmo de validação relacionado aos seus digitos verificadores. O formato do cpf recebido deve ser de XXX.XXX.XXX-XX
///

class Cpf{
private:
    string numCpf;
///
/// Metodo que faz a validaçao dos numeros de cpf recebidos. Se o CPF estiver fora da faixa ele lança uma excessão de argumento invalido
/// @param numCpf: string no formato xxx.xxx.xxx-xx.
///
    void validar (string) throw (invalid_argument);

public:

///
///Metodo que pega os valores de numCpf para uso de outros metodos
/// @return numCpf: retorna o numero do cpf
///

    string getCpf(){
        return numCpf;
    }
///
/// Metodo que faz o set do cpf, ele também valida o valor do cpf e lança excessao em caso de cpf invalido
/// @param numCpf: faz o set do numCpf para que seja usado em outros metodos externos à classe
///
    void setCpf(string) throw (invalid_argument);
};


/*************Classe Data***************/

///
/// Classe que representa data e deve estar em formato dd/mm/aaaa, sendo que dia  1 <= dd <= 31, 1 <= mm <= 12, 2020 <=aaaa<= 2099
///

class Data{
private:
    string data;
    string ano;
///
/// Faz a validacao da data escolhida no sistema, fora da faixa ele lança uma excessão
/// @param data:recebe uma string no formato dd/mm/aaaa
///
    void validar (string) throw (invalid_argument);

public:
///
/// getData permite retorno da data colocada no sistema
/// @return data: retorna a data no string
///
    string getData(){
        return data;
    }

///
/// Faz o set da data e lança excessao em caso de argumento invalido
/// @param data: string do tipo dd/mm/aaaa
///

    void setData(string) throw (invalid_argument);

///
/// Pega a data e diz se é um ano bissexto
/// @param data: recebe a data como string no formado dd/mm/aaaa
/// @return ano: Retorna uma string que fala se o ano é bissexto ou nao
///

    string setBissexto(string) throw (invalid_argument);
};

/*************Classe Emissor***************/
///
/// Essa classe recebe um texto e faz analises de se ele está dentro dos padroes estabelecidos. Deve ter tamanho entre 5 a 30 caracteres, deve ser composto de letras A-Z ou a-z, digitos 0-9, ou caracteresdo tipo '-','.',' '. Quando é o começo de um termo com uma letra, ela deve ser maiuscula e não podem ter dois caracteres seguidos.
///
class Emissor{
private:
    string emissor;
///
/// Faz a validacao do emissor com base nas limitações estabelecidos, caso esteja fora do padrao, ele lanca uma excessão deargumento invalido.
/// @param emissor: string contendo no maximo 30 caracteres.
///
    void validar (string) throw (invalid_argument);

public:
///
/// faz o get do emissor para que outras classes possam utilizar
/// @return emissor: retorna o emissor
///
    string getEmissor(){
        return emissor;
    }
///
/// Faz o set do emissor e lança excessao caso o argumento seja invalido
/// @param emissor: recebe como parametro uma string.
///
    void setEmissor(string) throw (invalid_argument);
};

#endif //DOMINIOS_H



