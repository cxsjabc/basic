#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "mysql.h"

#include "common_local.h"

int main()
{
	MYSQL *conn;
	int res;

	conn = mysql_init(NULL);
	assert(conn);

	conn = mysql_real_connect(conn, "localhost", "xichen", "123456", "db_xichen", 0, NULL, 0);
	assert(conn);

	res = mysql_query(conn, "INSERT INTO CHILDREN (name, age) VALUES('BigBear', 10)");	
	PD(res);
	if(!res) {
		printf("inserted %llu rows\n", mysql_affected_rows(conn));
	} else {
		printf("error:  %s\n", mysql_error(conn));
	}
	

	mysql_close(conn);

    return 0;
}
