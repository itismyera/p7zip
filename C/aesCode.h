#ifndef __AESCODE_H
#define __AESCODE_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "7zTypes.h"

EXTERN_C_BEGIN

bool EncryptDataToCipherTxt(uint8_t *orign, uint8_t *result, int length);

bool DecryptCipherTxtToData(uint8_t *orign, uint8_t *result, int length);

bool IsActiveCodeValid(char* activeCode, char* userName);

EXTERN_C_END

#endif
