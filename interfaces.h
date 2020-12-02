#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "comandos.h"
#include <stdexcept>

using namespace std;

class ISCU;
class ISAU;

class IAI{
    public:
        virtual void pegarDadosInvestimento (Classe*) =0;
};

class IACU{
    public:
        virtual bool verificaCadastro(Cpf*)=0;
        virtual void setCntrISCU(ISCU*)=0;

};

class ISCU{
    public:
        virtual void fazCadastro(Cpf*, Nome*, Endereco*, Cep*, Senha*)=0;
};

class IAAU{
    public:
        virtual bool verificaAutenticacaoo(Cpf*, Senha*)=0;
        virtual void setCntrISAU(ISAU*) = 0;
};

class ISAU{
    public:
        virtual void autenticacao(Cpf*, Senha*)=0;
};

class IAU{
    public:
        virtual 
};




#endif // INTERFACES_H_INCLUDED