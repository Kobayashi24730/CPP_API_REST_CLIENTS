#include "./models/crud.h"
#include <boost/asio.hpp>
#include <crow.h>
#include <exception>

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() { return "API C++ rodando.."; });

    CROW_ROUTE(app, "/add")([](const crow::request &req) -> crow::response {
        auto nome = req.url_params.get("nome");
        auto age = req.url_params.get("age");
        auto email = req.url_params.get("email");

        if (!nome || !age || !email) {
            return crow::response(400, "Parametros faltando!");
        }

        return inserir(std::string(nome), std::stoi(age), std::string(email));
    });
    CROW_ROUTE(app, "/delete")([](const crow::request &req) -> crow::response {
        try {
            auto nome = req.url_params.get("nome");
            auto email = req.url_params.get("email");
            if (!nome || !email) {
                return crow::response(400, "Parametros faltando!");
            }

            return remove(std::string(nome), std::string(email));
        } catch (std::exception &e) {
            return crow::response(500, e.what());
        }
    });
    CROW_ROUTE(app, "/users")([]() -> crow::response {
        try {
            return listar();
        } catch (std::exception &e) {
            return crow::response(500, e.what());
        }
    });

    app.port(18080).multithreaded().run();
}
