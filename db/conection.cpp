#include "conection.h"

pqxx::connection conectar() {
    return pqxx::connection("postgresql://"
                                "produtos_tbff_user:nWV7MV5u70OWCxkKfe3ADBgIxsnkdooL@dpg-"
                                "d6gcvr6a2pns73ffh8tg-a.oregon-postgres.render.com/produtos_tbff");
}
