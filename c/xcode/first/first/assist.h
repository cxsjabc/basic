//
//  assist.h
//  first
//
//  Created by eyu on 13-7-21.
//  Copyright (c) 2013年 ccteam. All rights reserved.
//

#ifndef first_assist_h
#define first_assist_h

#define IS_SPACE(ch)  ((ch) == ' ' || (ch) == '\t')

char * cc_getline(char * buf, unsigned int max_len);

void    cc_fflush_stdin();

char *     cc_parse_ini(char * line,  char ** value);


#endif
