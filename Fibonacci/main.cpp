#include <iostream>
#include <cstdlib>

using namespace std;

inline int fibonacci (int termo);

int main()
{
    int termo;
    int resposta;
    char opcao;

    cout<<"Digite o termo que desejas saber da sequencia: ";
    cin>>termo;
    cin.ignore();

    if(termo == 0){
        cout<<"O termo deve ser maior que 0.\n";
        main();
    }

    cout<<"Calculando...\n";

    resposta = fibonacci(termo - 1);

    cout<<"O termo "<<termo<<" eh "<<resposta<<" na sequencia de fibonacci \n";
    cout<<"Desejas continuar? s/n \n";
    cin>>opcao;
    cin.ignore();
    if(opcao == 's' || opcao == 'S'){
        main();
    }else{
        system("pause");
        return EXIT_SUCCESS;
    }

}

inline int fibonacci(int termo){
    if(termo == 0 || termo == 1){
        return 1;
    }else{
        return fibonacci(termo - 1) + fibonacci(termo - 2);
    }
}
