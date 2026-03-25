#ifndef CRUD_H
#define CRUD_H
#include <string>

std::string inserir(std::string nome, int age, std::string email);
std::string listar();
std::string update(std::string nome, int age, std::string email);
std::string remove(std::string nome, std::string email);

#endif
