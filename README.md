# 🚀 CPP API REST - Projeto de Estudo

Este projeto é uma **API REST desenvolvida em C++**, utilizando o framework [Crow](https://github.com/CrowCpp/Crow) e integração com banco de dados **PostgreSQL** via [libpqxx](https://github.com/jtv/libpqxx).

O objetivo principal é criar uma base sólida para construção de APIs modernas, com foco em estrutura profissional, organização de código, segurança e formatação de dados.

---

## 🧠 Sobre o Projeto

Este projeto foi desenvolvido com **fins educacionais**, visando:

- Aprimorar conhecimentos em desenvolvimento backend com C++
- Explorar frameworks web como o Crow
- Trabalhar com banco de dados PostgreSQL
- Aplicar boas práticas de arquitetura de APIs

No futuro, este projeto servirá como base para um backend mais robusto em outros sistemas.

---

## ⚙️ Tecnologias Utilizadas

- **C++** (C++20)
- **Crow** — Framework Web para C++
- **libpqxx** — Integração com PostgreSQL
- **PostgreSQL**
- **Axios** — para consumo da API no frontend (futuramente)

---

## 📂 Estrutura do Projeto

```
CPP_API_REST_CLIENTS/
├── Crow/           # Framework Crow
├── controllers/    # Controladores das rotas
├── db/             # Conexão com banco de dados
├── libpqxx/        # Biblioteca de integração PostgreSQL
├── middlewares/     # Middlewares da aplicação
├── models/         # Lógica de negócio (CRUD)
├── repository/     # Camada de acesso a dados
├── services/       # Regras de negócio
├── utils/          # Funções utilitárias
├── main.cpp        # Inicialização da API
└── main_interactiv.cpp
```

---

## 🔌 Funcionalidades Atuais

- ✔️ Criação de rotas HTTP
- ✔️ Inserção de dados no banco
- ✔️ Listagem de dados
- ✔️ Remoção de registros

---

## 🔮 Próximos Passos

- 🔐 Implementação de autenticação (JWT)
- 📦 Padronização de respostas em JSON
- 📌 Uso de métodos HTTP corretos (GET, POST, PUT, DELETE)
- 🧱 Separação em camadas (Controller, Service, Repository)
- 🛡️ Melhorias de segurança (validação, proteção contra SQL Injection)
- 🌐 Integração com frontend (Axios)

---

## ▶️ Como Executar

### 1. Pré-requisitos

- Compilador com suporte a C++20 (g++)
- PostgreSQL instalado e em execução
- Bibliotecas Boost (usadas pelo Crow)
- libpqxx configurada

### 2. Compilar o projeto

```bash
g++ -std=c++20 main.cpp db/*.cpp models/*.cpp \
  -I$PREFIX/include -I./Crow/include \
  -L$PREFIX/lib \
  -lpqxx -lpq -pthread -DCROW_USE_BOOST \
  -o app
```

### 3. Executar

```bash
./app
```

### 4. Acessar no navegador

```
http://localhost:18080
```

---

## ⚠️ Observações

- Este projeto ainda está em desenvolvimento.
- Algumas funcionalidades podem ser melhoradas ou refatoradas.
- O foco principal é aprendizado e evolução contínua.

---

## 📄 Licença

Este projeto é distribuído sob a licença **MIT** — veja o arquivo [LICENSE](./LICENSE) para mais detalhes.

Em resumo: **qualquer pessoa pode usar, copiar, modificar e distribuir este projeto**, inclusive para fins comerciais, **desde que mantenha o aviso de direitos autorais e a licença original** em cópias ou partes substanciais do software.

---

## 👨‍💻 Autor

Desenvolvido por **Guilherme Silva**
Desenvolvedor Full Stack

---

## 📌 Conclusão

Este projeto representa um passo importante na construção de aplicações backend com C++, explorando tecnologias modernas e preparando o caminho para sistemas mais complexos e profissionais no futuro.
