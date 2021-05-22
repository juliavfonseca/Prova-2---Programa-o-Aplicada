#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::cin;


void MIN(vector<int> vet)
{
    int getIndex = 0;
    int min = vet[0];
    for(int i =0; i < vet.size(); i++)
    {
        if(min >= vet[i]){
            min = vet[i];
            getIndex = i;
        }else{
            continue;
        }
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Endereco: "<<&vet[getIndex]<<endl;
}

void MAX(vector<int> vet)
{
    int getIndex= 0;
    int max = vet[0];
    for(int i = 0; i < vet.size(); i++)
    {
        if(max <= vet[i]){
            max = vet[i];
            getIndex = i;
        }else{
            continue;
        }
    }
    cout<<"Max = "<<max<<endl;
    cout<<"Endereco: "<<&vet[getIndex]<<endl;
}




int main(){
    
    int num;
    char resp = 's';
    
    vector<int> vetor;
    int tamanho;
    vector<int> *p = &vetor;

    cout<<"Digite um numero :"<<endl;
    do{
        cin>> num;        
        vetor.push_back(num);
        cout<<"Continuar digitando outros numeros? (s/n)"<<endl;
        cin>>resp;
        if(resp == 's')
        {
            cout<<"Digite seu número:"<<endl;
        }
        else{
            tamanho = vetor.size();
            cout<<"-------------------------------"<<endl;
        }
    }while(resp =='s');
    cout<<endl;
    MOSTRA(tamanho,vetor,p);
    cout<<"----------------------------------"<<endl;
    MAX(vetor);
    MIN(vetor);
    
    return 0;
    
}
