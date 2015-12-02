#include <iostream>
#include <cstdlib>

using namespace std;

inline int fibonacci (int termo);

int main()
{
    int termo, sum = 0;
    char opcao;

    cout<<"Digite até qual termo que desejas saber a soma: ";
    cin>>termo;
    cin.ignore();

    if(termo == 0){
        cout<<"O termo deve ser maior que 0.\n";
        main();
    }

    cout<<"Calculando...\n";

    for(int i =1;i <= termo;i++){
        int resposta = fibonacci(i - 1);
        sum = sum + resposta;
    }

    cout<<"A soma do termo "<<termo<<" eh "<<sum<<" \n";
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
