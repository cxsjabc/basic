#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>

char *itoa(int i, char *buf)
{
    int j = 0;
    int k;

    do {
        k = i % 10;
        buf[j++] = k + '0';

        i /= 10;
    } while(i);

    buf[j] = '\0';

    for (k = 0; k < j / 2; ++k) {
        char temp = buf[k];
        buf[k] = buf[j - 1 - k];
        buf[j - 1 - k] = temp;
    }
    
    return buf;
}

int simple_printf(char *fmt, ...)
{
    static char buf[128];
    va_list ap;
    char *p;
    int val, i = 0;
    char c;
    ssize_t cnt = 0, total_cnt = 0;
    char str[16];
    
    memset(buf, 0, 128);
    va_start(ap, fmt); 
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            buf[i++] = *p;  // add characters to output buffer
            ++cnt;
            if (*p == '\n') {   // new line, output all chars
                cnt = write(0, buf, cnt);
            }
            continue;
        }
        switch (*++p) {
        case 'd':
            val = va_arg(ap, int);
            itoa(val, str);
            strcat(buf + i, str);
            cnt += strlen(str);
            i += strlen(str);
            break;
        case 'c':
            val = va_arg(ap, int);
            c = (char)val;
            buf[i++] = c;   // add characters to output buffer
            cnt++;
            break;
        default:
            buf[i++] = *p;  // add characters to output buffer
            cnt++;
            break;
        }
    }

    va_end(ap);

    return cnt;
}

int main(int argc, char *argv[])
{
    int ret;

    ret = simple_printf("hello%d\n", 1);
    simple_printf("%d\n", ret);

    return 0;
}
