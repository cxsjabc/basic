//
//  assist.c
//  first
//
//  Created by eyu on 13-7-21.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#include <stdio.h>
#include "assist.h"

int d[2] = {2, 1};

char * cc_getline(char * buf, unsigned int max_len)
{
    int c;
    char * ret = buf;
    unsigned int char_cnt = 0;
    
    c = getchar();
    while(c != EOF && c != '\n' && char_cnt < max_len){
        *buf = c;
        ++buf;
        ++char_cnt;
        
        c = getchar();
    }
    *buf = '\0';
    return ret;
}

void    cc_fflush_stdin()
{
#if 0
    int c;
    while(c != EOF)
        c = getchar();
#endif
}

char *     cc_parse_ini(char * line,  char ** value)
{
    char * ret;
    while(IS_SPACE(*line))
        ++line;
    
    if(*line != '\0')
        ret = line;
    else
    {
        *value = NULL;
        return NULL;
    }
    
    while(*line != '=' && *line != '\0')
        ++line;
    if(ret == line || *line == '\0')
    {
        *value = NULL;
        return NULL;
    }
    *line = '\0';
    
    if(*(line + 1) == '\0')
    {
        *value = NULL;
        return NULL;
    }
    
    *value = line + 1;
    return ret;
}
