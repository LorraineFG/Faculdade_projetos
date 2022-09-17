//b) O Jockey Clube está organizando uma competição de hipismo e criou as seguintes categorias:

//INFANTIL	competidores entre 7 e 12 anos
//JUVENIL	competidores entre 13 e 17 anos
//ADULTO	competidores entre 18 e 49 anos
//SENIOR	competidores com 50 anos ou mais
//Para ajudar na classificação correta, crie um código capaz de informar a categoria do competidor a partir de sua idade. O programa deve receber a idade dos competidores enquanto a mesma for diferente de -1.

//Caso seja informada uma idade abaixo de sete anos, informe ao usuário que o competidor está fora da faixa etária permitida na competição.

#include <iostream>
using namespace std;


int main()
{
   
    int idade;
    idade=0;
    
    cout << "Qual sua idade?";
    cin >> idade;
        
    if (idade>=7 && idade<=12){
        cout << "Classificação: Infantil";
    }
    
    if(idade>=13 && idade<=17){
        cout << "Classificação: Juvenil";
    }
            
    if (idade>=18 && idade<=45){
        cout << "Classificação: Adulto";
    }
            
    if (idade>50){
        cout << "Classificação: Senior";
    }
    
    if (idade<7){
        cout << "Candidato fora da idade permitida";
    }
        
    
}
