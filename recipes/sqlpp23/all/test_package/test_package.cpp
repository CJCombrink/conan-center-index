#include <sqlpp23/sqlpp23.h>

int main() {
    select(sqlpp23::value(false).as(sqlpp23::alias::a));
    return EXIT_SUCCESS;
}
