/*******************************************************************************
 * utils.h - miscellaneous utility macros and functions
 *   Part of cuppa, the Common URY Playout Package Architecture
 *
 * Contributors:  Matt Windsor <matt.windsor@ury.org.uk>
 */

/*-
 * Copyright (c) 2012, University Radio York Computing Team
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef CUPPA_UTILS_H
#define CUPPA_UTILS_H

/* Frees and NULLifies the pointer pointed to by *ptr, if it is currently NULL.
 * Silently ignores the case of ptr being NULL itself.
 */
#define SAFE_FREE(ptr) do {		\
	if (ptr != NULL)		\
		if (*ptr != NULL) {	\
			free(*ptr);	\
			*ptr = NULL;	\
		}			\
} while (0)

char           *skip_space(char *str);	/* Skips to nearest non-space char */
char	       *skip_nonspace(char *str);	/* Above but skips nonspace */
char           *nullify_space(char *str);	/* Above but \0s space */
char	       *nullify_tspace(char *end);	/* Nullifies trailing space */
#endif				/* !CUPPA_UTILS_H */
