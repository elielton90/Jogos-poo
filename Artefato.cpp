#include "Artefato.h"

Artefato::Artefato(string nome, int nivel_conserto){
nome=nome;
 nivel_conserto= nivel_conserto;
 
}
 void Artefato::restaurar(){
 nivel_conserto=nivel_conserto +10;
 
}

void Artefato::restaurar(int valor){
nivel_conserto=nivel_conserto + valor;
 

}

void  Artefato::mostrar_situacao(){
cout<<"NOME:"<<nome<<"reparos"<<nivel_conserto <<endl;


}


