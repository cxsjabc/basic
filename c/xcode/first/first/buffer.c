//
//  buffer.c
//  first
//
//  Created by eyu on 13-12-23.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#include <stdio.h>
#include "buffer.h"

// create a buffer
cc_buffer *     cc_buffer_create(const char * str)
{
    cc_buffer * buf = (cc_buffer *)malloc(sizeof(cc_buffer));
    if(!buf)
        return NULL;
    
    size_t size = strlen(str) + 1;
    buf->buf = (char *)malloc(size);
    if(!buf->buf)
    {
        free(buf);
        return NULL;
    }
    strcpy(buf->buf, str);
    
    buf->size = size;
    return buf;
}

// free a buffer
void            cc_buffer_free(cc_buffer * buf)
{
    if(buf)
    {
        if(buf->buf)
            free(buf->buf);
        
        free(buf);
    }
}

// get the string at line
// you should free the buffer when you don't use it
char    *       cc_buffer_get_line(cc_buffer * buf, size_t   line,
                                   size_t * line_len)
{
    if(line == 0)
        return NULL;
    
    char  * str = buf->buf;
    char * str_end = str + buf->size;
    if(!str)
        return NULL;
    
    size_t len = cc_get_next_char(str, '\n');
    if(len < 1)
        return NULL;
    if(len == UID_MAX)
        return NULL;
    *line_len = len;
    
    while(--line > 0)
    {  
        str = str + len + 1;        // next start pointer
        if(str >= str_end)
            return NULL;
        
        len = cc_get_next_char(str, '\n');
        if(len == UID_MAX)
            return NULL;
        
        *line_len = len;
    }
    
    char * ret_str = (char *)malloc(len + 1);
    if(!ret_str)
        return NULL;
    
    strncpy(ret_str, str, len);
    ret_str[len] = '\0';
    
    return ret_str;
}

// free the buffer for the line's str
void            cc_buffer_free_line(cc_buffer * buf, char *  str)
{
    free(str);
}


// get the next char's pos which is in s
// pos : starting with 0
size_t  cc_get_next_char(const char * s, char ch)
{
    size_t ret = 0;
    while(*s && *s++ != ch)
        ++ret;
    
    if(*s)
        return ret;
    return UINT_MAX;        // means not found
}
