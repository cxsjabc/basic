#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "mysql.h"

#include "common_local.h"

int main()
{
	MYSQL *conn;
	MYSQL_RES *res_ptr;
	MYSQL_ROW row;
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
	
	res = mysql_query(conn, "SELECT LAST_INSERT_ID()");
	assert(res == 0);
	res_ptr = mysql_use_result(conn);
	PP(res_ptr);
	if(res_ptr) {
		while(row = mysql_fetch_row(res_ptr)) {
			printf("child no:%s\n", row[0]);
		}
		mysql_free_result(res_ptr);
	}


	mysql_close(conn);

    return 0;
}
