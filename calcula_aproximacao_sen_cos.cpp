/*ang e qtd termos*/
#include<iostream>
#include<cmath>
using namespace std;

double fatorial(int n){
    double resultado = 1.0;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void sen(double x, int qtd){
    double sen = 0.0;
    for (int i = 0; i < qtd; i++) {
        float sinal;
        if (i % 2 == 0) {
            sinal = 1;
        } else {
            sinal = -1;
        }
        sen += sinal * pow(x, 2*i+1) / fatorial(2*i+1);
    }
    cout<<"Sen("<< x <<") = "<<sen<<endl;
}

void cos(double x, int qtd){
    double cos = 0.0;
    for (int i = 0; i < qtd; i++) {
        float sinal;
        if (i % 2 == 0) {
            sinal = 1;
        } else {
            sinal = -1;
        }
        cos += sinal * pow(x, 2*i) / fatorial(2*i);
    }
    cout<<"Cos("<< x <<") = "<<cos<<endl;
}

int main(){
    double x;
    int qtd;
    char validacao = ' ';
    cout<<"Digite o angulo e a quantidade de extensão da função para calculo de sen e cos: ";
    cin>>x >> qtd;
    while (true)
    {
        cout<<"Sen e cos de "<<x<<" com "<<qtd<<" termos:"<<endl;
        sen(x, qtd);
        cos(x, qtd);
        cout<<endl;
        cout<<"Deseja continuar calculando? (s para sim e e para encerrar): ";
        
        cin>>validacao;
        cout<<endl;
        if(validacao == 'e'){
            break;
        }else if(validacao != 's'){
            cout<<"Opção invalida!"<<endl;
            cout<<"Deseja continuar calculando? (s para sim e e para encerrar): ";
            cin>>validacao;
            cout<<endl;
        }else{
        cout<<"Digite o angulo e a quantidade de extensão da função para calculo de sen e cos: ";
        cin>>x >> qtd;
        }
    }
    return 0;
}