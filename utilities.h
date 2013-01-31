/* 
 * File:   utilities.h
 * Author: psycku
 *
 * Created on 31 de Janeiro de 2013, 17:35
 */

#ifndef UTILITIES_H
#define	UTILITIES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEWLINE '\n'

typedef enum {
    FALSE, TRUE
} Bool;

Bool fgetsUpd(char * const sentence, const unsigned int size) {
    unsigned int sSiz;

    if (fgets(sentence, size, stdin) != NULL) {    
        sSiz = strlen(sentence) - 1;
        if (sentence[sSiz] == NEWLINE) {
            sentence[sSiz] = '\0';
        } else {
            return TRUE;
        }
    }else {
        return FALSE;
    }
}

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* UTILITIES_H */

