#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "mysql.h"

#include "common_local.h"

int main()
{
	MYSQL *conn;

	conn = mysql_init(NULL);
	PP(conn);

    return 0;
}
