struct ATMRecord{
    float valor;
    int senha;
    int targetAccount;
    int thisAccount;
    int clientID;
};

struct bankRecord{
    int CPF;
    int password;  
    int accNumber;
    int clientID;
};

struct returnRecord{
    int requesterID;
    float valor;
    int OPResult;
    int completed;
};
program BANK{
    version ATM{
        float SALDO(ATMRecord) = 1;
        int DEPOSITO(ATMRecord) = 2;
        int RETIRADA(ATMRecord) = 3;
        int DEPOSITOFALHA(ATMRecord) = 4;
        int RETIRADAFALHA(ATMRecord) = 5;
        int REQUESTID() = 6;
        int AUTENTICACAO(ATMRecord) = 7;
    } = 1;
    version AGENCIA{
        float SALDO(ATMRecord) = 1;
        int DEPOSITO(ATMRecord) = 2;
        int RETIRADA(ATMRecord) = 3;
        int DEPOSITOFALHA(ATMRecord) = 4;
        int RETIRADAFALHA(ATMRecord) = 5;
        int REQUESTID() = 6;
        int AUTENTICACAO(ATMRecord) = 7;
        int FECHAMENTO(bankRecord) = 8;
        int ABERTURA(bankRecord) = 9;
        
       
        
    } = 2;
} = 60125421;