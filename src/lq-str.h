/******************************************************************************
 *  \file ltemc-mqtt.h
 *  \author Greg Terrell
 *  \license MIT License
 *
 *  Copyright (c) 2021 LooUQ Incorporated.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software. THE SOFTWARE IS PROVIDED
 * "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 ******************************************************************************
 * C string helper functions
 *****************************************************************************/

#ifndef __LQ_STR_H__
#define __LQ_STR_H__

#include <stddef.h>
#include <stdint.h>


#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

char *lq_strnStr(char *haystack, char *needle, size_t length);
uint16_t lq_strReplace(char *srcStr, char fromChr, char toChr);
void lq_strDecodeEscapes(char *src, int len);

// // String Tokenizer
// char *lq_strToken(char *source, int delimiter, char *token, uint8_t tokenMax);


#ifdef __cplusplus
}
#endif // !__cplusplus

#endif  /* !__LQ_STR_H__ */