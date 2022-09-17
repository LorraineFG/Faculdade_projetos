//1. Leia os enunciados a seguir e crie os algoritmos e os programas em C++ que solucionem os problemas propostos.

//a) Um instituto está realizando uma pesquisa para descobrir a idade e o peso médios da população de um bairro. 
//Cada entrevistado informa seu peso e sua idade e, quando for informado 0 para o peso, o recebimento de dados 
//deve ser interrompido e devem ser exibidas a quantidade de entrevistados, a média de peso e a média de idade dos mesmos.

#include <iostream>
using namespace std;

int main()
{
     // ---------- Variaveis -----------//
     int idade, contador, idadetotal;
     float peso, somapeso, mediapeso, mediaidade, pesototal;
     
     idade=0;
     contador=0;
     idadetotal=0;
     peso=1;
     somapeso=0;
     mediapeso=0;
     mediaidade=0;
     pesototal=0;
     
     
     //-----------Entrada das informações -----------//
     
        cout<< "Qual seu peso?";
        cin >> peso;
    
     while (peso!=0){
         
        cout<< "Qual sua idade?";
        cin >> idade;
     
        contador++;
        pesototal= pesototal + peso;
        idadetotal = idadetotal + idade;
        
        cout<< "Qual seu peso?";
        cin >> peso;
     }
    
        mediapeso=pesototal/contador;
        mediaidade=idadetotal/contador;
        
        cout << "Media de peso da população: " << mediapeso <<"\n";
        cout << "Media de idade da população: " << mediaidade <<"\n";
        cout << "Qntd de pessoas entrevistadas: " << contador << "\n";
    
    
}
