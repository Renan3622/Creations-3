#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0


int main () {
  
 cout<<"Logístic Program";
   
 cout<<"\n\n";
           
 char name[50];
cout<<"Digite seu nome: ";

cin>>name;
puts(name);

int num;
cout<<"Digite a sua senha : ";
cin>>num;

int valor;
cout<<"Escolha uma opcao de 1(separação) ou 2(expedição) : ";
cin>>valor;

  switch ( valor)
  {
    case 1 :
    printf ("Separacao\n");
    printf ("Digite o numero do pedido \n");
    
    break;
    
    case 2 :
    printf ("Expedição\n");
    printf ("Digite o numero do pedido\n");
    
    case 3 :
    printf ("Conferência \n");
    printf ("Digite o número do pedido\n");
    
    
    
     break;
     default :
    printf ("opcao invalida!\n");
  }
  
  getch();
  return 0;
} 
  