#include <./models/crud.cpp>
#include <iostream>

int main(){
  int opcao;
  while (true) {
    std::cout << "=== CRUD C++, PostgreSQÇ ===/n";
    std::cout << "1 - Criar um Usuario.";
    std::cout << "2 - Lista os Usuarios.";
    std::cout << "3 - Editar um Usuario.";
    std::cout << "4 - Deletar um Usuario";
    std::cout << "Escolha una opcao: ";
    std::cin >> opcao;

    if(opcao == 0){
      break
    }

    std::string nome,email;
    int age;

    switch (opcao) {
      case 1:
        std::cout << "Nome";
        std::cin >> nome;
        std::cout << "Age";
        ats::cin >> age;
        std::cout << "Email";
        std::cin >> email;

        std::cout << inserir(nome, age, email) << "\n";

        break;

      case 2:
        std::cout << listar() << "\n";

        break;

      case 3:
        std::cout << update(nome, age) << "\n";

        break;

      case 4:
        std::cout << "Digite o email do Usuario que sera deletado!!";
        std::cin >> email;
        std::cout << delete(email) << "/n";

        break;

      default:
        break;
    }

  }
}
