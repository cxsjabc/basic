//
//  buffer.h
//  first
//
//  Created by eyu on 13-12-23.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#ifndef FIRST_BUFFER_H
#define FIRST_BUFFER_H

#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct
{
    char  *     buf;
    size_t      size;        // including the last '\0'
    
}cc_buffer;

// create a buffer
cc_buffer *     cc_buffer_create(const char * str);

// free a buffer
void            cc_buffer_free(cc_buffer * buf);

// get the string at line
// you should free the buffer when you don't use it
char    *       cc_buffer_get_line(cc_buffer * buf, size_t   line,
                                   size_t * line_len);

// free the buffer for the line's str
void            cc_buffer_free_line(cc_buffer * buf, char *  str);


//
// get the next char's pos which is in s
// pos : starting with 0
size_t  cc_get_next_char(const char * s, char ch);



#endif
