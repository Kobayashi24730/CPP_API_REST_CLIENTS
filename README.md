🚀 CPP API REST - Projeto de Estudo

Este projeto é uma API REST desenvolvida em C++, utilizando o framework Crow e integração com banco de dados PostgreSQL via libpqxx.

O objetivo principal é criar uma base sólida para construção de APIs modernas, com foco em estrutura profissional, organização de código, segurança e formatação de dados.

---

🧠 Sobre o Projeto

Este projeto foi desenvolvido com fins educacionais, visando:

- Aprimorar conhecimentos em desenvolvimento backend com C++
- Explorar frameworks web como o Crow
- Trabalhar com banco de dados PostgreSQL
- Aplicar boas práticas de arquitetura de APIs

No futuro, este projeto servirá como base para um backend mais robusto em outros sistemas.

---

⚙️ Tecnologias Utilizadas

- C++
- Crow (Framework Web para C++)
- libpqxx (Integração com PostgreSQL)
- PostgreSQL
- Axios (para consumo da API no frontend futuramente)

---

📂 Estrutura do Projeto

CPP_API_REST_CLIENTS/
├── Crow/                # Framework Crow
├── db/                  # Conexão com banco de dados
├── models/              # Lógica de negócio (CRUD)
├── main.cpp             # Inicialização da API

---

🔌 Funcionalidades Atuais

- ✔️ Criação de rotas HTTP
- ✔️ Inserção de dados no banco
- ✔️ Listagem de dados
- ✔️ Remoção de registros

---

🔮 Próximos Passos

- 🔐 Implementação de autenticação (JWT)
- 📦 Padronização de respostas em JSON
- 📌 Uso de métodos HTTP corretos (GET, POST, PUT, DELETE)
- 🧱 Separação em camadas (Controller, Service, Repository)
- 🛡️ Melhorias de segurança (validação, proteção contra SQL Injection)
- 🌐 Integração com frontend (Axios)

---

▶️ Como Executar

1. Compilar o projeto

g++ -std=c++20 main.cpp db/*.cpp models/*.cpp \
-I$PREFIX/include -I./Crow/include \
-L$PREFIX/lib \
-lpqxx -lpq -pthread -DCROW_USE_BOOST \
-o app

---

2. Executar

./app

---

3. Acessar no navegador

http://localhost:18080

---

⚠️ Observações

- Este projeto ainda está em desenvolvimento
- Algumas funcionalidades podem ser melhoradas ou refatoradas
- O foco principal é aprendizado e evolução contínua

---

👨‍💻 Autor

Desenvolvido por Guilherme Silva
Desenvolvedor Full Stack

---

📌 Conclusão

Este projeto representa um passo importante na construção de aplicações backend com C++, explorando tecnologias modernas e preparando o caminho para sistemas mais complexos e profissionais no futuro.

---
