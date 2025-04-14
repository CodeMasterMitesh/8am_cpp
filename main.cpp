#include <iostream>
#include <mysql.h>

using namespace std;

int main() {
    MYSQL *conn = mysql_init(NULL);
    if (conn == NULL) {
        std::cerr << "mysql_init() failed\n";
        return 1;
    }

    if (mysql_real_connect(conn, "localhost", "root", "", "test", 0, NULL, 0) == NULL) {
        std::cerr << "mysql_real_connect() failed\n" << mysql_error(conn) << "\n";
        mysql_close(conn);
        return 1;
    }

    std::cout << "Connected to MySQL successfully!\n";
    mysql_close(conn);
    return 0;
}
