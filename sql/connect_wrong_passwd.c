#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "mysql.h"

#include "common_local.h"

int main()
{
	MYSQL *conn, *conn1;

	conn = mysql_init(NULL);
	assert(conn);
	conn1 = conn;	// we must backup the conn now!

	conn = mysql_real_connect(conn, "localhost", "xichen", "wrong_password", "db_xichen", 0, NULL, 0);
	// assert(conn);
	// PP(conn);
	if(!conn) {
		if(mysql_errno(conn1)) {
			printf("error:%s\n", mysql_error(conn1));
		}
		return 1;
	}

	mysql_close(conn);

    return 0;
}
