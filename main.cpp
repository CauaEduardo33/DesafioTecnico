#include <string>
#include <iostream>

using namespace std;

string Batalha(double forca1, double forca2, double agili1, double agili2, string nome1, string nome2){
    double poder_total1= forca1 + agili1;
    double poder_total2 = forca2 + agili2;

    if(poder_total1 > poder_total2) return nome1;
    else if(poder_total2 > poder_total1) return nome2;
    else return "Empate"; 
}

void menu(double forca1, double forca2, double agili1, double agili2, double intel1, double intel2, double vida1, double vida2, string nome1, string nome2, string regra){

    while(true){


cout<<nome1<<"\nVida: "<<vida1<<"\nForca: "<<forca1<<"\nAgilidade: "<<agili1<<"\nInteligencia: "<<intel1;  
cout<<"\n\n"<<nome2<<"\nVida: "<<vida2<<"\nForca: "<<forca2<<"\nAgilidade: "<<agili2<<"\nInteligencia: "<<intel2;  

string resultado_batalha=Batalha( forca1,  forca2,  agili1,  agili2,  nome1,  nome2);

cout<<"\n\n"<<"Regra escolhida: "<< regra;

cout<<"\n\n"<<"Resultado da batalha: "<< resultado_batalha;

cout<<"\n Quer ver a batalha novamente(s/n)?\n";
char resposta;
cin>>resposta;
if(resposta=='n')return;


}
}


int main(){
string regra_escolhida = "Regra 1 - Ofensiva";
string nome_person1 = "Jeferson", nome_person2 = "Cleitao";
double forca_person1 = 67.0, forca_person2 = 54.0;
double agili_person1 = 70.0, agili_person2 = 88.0;
double intel_person1 = 79.0, intel_person2 = 83.0;
double vida_person1 = 100.0, vida_person2= 100.0;

menu(forca_person1, forca_person2, agili_person1, agili_person2, intel_person1, intel_person2, vida_person1, vida_person2, nome_person1, nome_person2, regra_escolhida );



    
}