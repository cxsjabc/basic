#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <linux/reboot.h>

#include "common_local.h"

int main()
{
    int res;

    res = reboot(LINUX_REBOOT_CMD_POWER_OFF);
    PD(res);

    return 0;
}
