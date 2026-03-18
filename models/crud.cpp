#include "crud.h"
#include "../db/conection.h"
#include <exception>
#include <sstream>

std::string inserir(std::string nome, int age, std::string email) {
    try {
        pqxx::connection conn = conectar();
        pqxx::work txn(conn);
        txn.exec("INSERT INTO cpp_database (nome, age, email) VALUES ($1, $2, $3)",
                 pqxx::params{nome, age, email});
        txn.commit();

        return "Dados inseridos com sucesso!";
    } catch (const std::exception &e) {
        return e.what();
    }
}

std::string deletar(std::string nome, std::string email) {
    try {
        pqxx::connection conn = conectar();
        pqxx::work txn(conn);
        txn.exec("DELETE FROM cpp_database WHERE nome = $1 AND email = $2 ",
                 pqxx::params{nome, email});
        txn.commit();

        return "Parametro deletado com sucesso!!";
    } catch (const std::exception &e) {
        return e.what();
    }
}

std::string listar() {
    try {
        pqxx::connection conn = conectar();
        pqxx::work txn(conn);
        pqxx::result res = txn.exec("SELECT * FROM cpp_database");
        std::stringstream output;
        for (auto row : res) {
            output << "ID: " << row["id"].as<int>() << " Nome: " << row["nome"].c_str()
                   << " Idade: " << row["age"].as<int>() << " Email: " << row["email"].c_str()
                   << "\n";
        }

        return output.str();
    } catch (const std::exception &e) {
        return e.what();
    }
}
