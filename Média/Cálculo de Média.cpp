#include <iostream>

using namespace std;

	int main(){
		setlocale(LC_ALL,"portuguese");
		float nota1, nota2, nota3, media;
		
		cout<<"Informe a primeira nota: ";
		cin>>nota1;
		
		cout<<"Informe a segunda nota: ";
		cin>>nota2;
		
		cout<<"Informe a terceira nota: ";
		cin>>nota3;
		
		media = (nota1 + nota2 + nota3) / 3;
		
		cout<<"M�dia: " <<media <<endl;
		
		if (media >=7){
			cout<<"Parab�ns, voc� passou de ano!";
		}else {
			cout<<"Voc� foi reprovado!";
		}
	}
