#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "mysql.h"

#include "common_local.h"

int main()
{
	MYSQL *conn;

	conn = mysql_init(NULL);
	assert(conn);

	conn = mysql_real_connect(conn, "localhost", "xichen", "123456", "db_xichen", 0, NULL, 0);
	assert(conn);

	mysql_close(conn);

    return 0;
}
