//
//  AnimalFightCore.h
//  AnimalFight
//
//  Created by eyu on 15/10/11.
//  Copyright (c) 2015年 ccteam. All rights reserved.
//

#ifndef __AnimalFight__AnimalFightCore__
#define __AnimalFight__AnimalFightCore__

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class AnimalFightAlgorithm
{
public:
    AnimalFightAlgorithm();
    virtual ~AnimalFightAlgorithm();
    
private:
    AnimalFightAlgorithm(const AnimalFightAlgorithm &algo);
    AnimalFightAlgorithm& operator=(const AnimalFightAlgorithm &algo);
private:
    typedef enum
    {
        COLOR_RED,
        COLOR_BLACK,
        
        COLOR_MAX
    }COLOR;
    
    typedef enum
    {
        VALUE_MOUSE,
        VALUE_CAT,
        VALUE_DOG,
        VALUE_WOLF,
        VALUE_LEOPARD,
        VALUE_TIGER,
        VALUE_LION,
        VALUE_ELEPHANT,
        
        VALUE_MAX
    }VALUE;
    
    typedef struct ChessMan
    {
        COLOR   color;
        VALUE   value;
        string  name;
    }ChessMan;
    
private:
    vector<ChessMan>    chesses;
    int                 size;
};


#endif /* defined(__AnimalFight__AnimalFightCore__) */
