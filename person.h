/* 
 * File:   person.h
 * Author: psycku
 *
 * Created on 31 de Janeiro de 2013, 17:42
 */

#ifndef PERSON_H
#define	PERSON_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilities.h"

#define NAME_LENGTH 80
#define STREET_LENGTH 60
#define CITY_LENGTH 20
#define DOOR_NR 3
#define POSTALCODE 8
#define PHONE_LENGTH 9

const char EMPTY_STRING[] = "\0";

typedef tm Date;

typedef struct {
    unsigned char street[STREET_LENGTH];
    unsigned char number[DOOR_NR];
    unsigned char postalcode[POSTALCODE];
    unsigned char city[CITY_LENGTH];
} Address;

typedef enum {
    A = 'A', B = 'B', C = 'C', D = 'D'
} Category;

typedef struct {
    unsigned char name[NAME_LENGTH];
    Address address;
    unsigned char phonenr[PHONE_LENGTH];
    Date date;
    Category category;
} Person;

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* PERSON_H */

