#include <sqlpp23/sqlpp23.h>

int main() {
    select(sqlpp::value(false).as(sqlpp::alias::a));
    return EXIT_SUCCESS;
}
