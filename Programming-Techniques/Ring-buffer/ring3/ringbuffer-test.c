/*
 * test-ringbuf.c - unit tests for C ring buffer implementation.
 *
 * Written in 2011 by Drew Hess <dhess-src@bothan.net>.
 *
 * To the extent possible under law, the author(s) have dedicated all
 * copyright and related and neighboring rights to this software to
 * the public domain worldwide. This software is distributed without
 * any warranty.
 *
 * You should have received a copy of the CC0 Public Domain Dedication
 * along with this software. If not, see
 * <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "ringbuffer.h"

#define CAPACITY 10
typedef struct data_t{
    int idata;
    float fdata;
}data_t;

ringbuffer_t ringbf;


int main(int argc, char **argv)
{
    
    ring_init(&ringbf, CAPACITY, sizeof(data_t));

    int i;
    data_t tmpdata;

    for(i = 0; i < CAPACITY; i++){
        tmpdata.idata = i;
        tmpdata.fdata = i+1;
        ring_push_head(&ringbf, (void*)&tmpdata);
        printf("number of items: %d \n", ringbf.count);
    }

    for(i = 0; i < CAPACITY; i++){
        ring_pop_tail(&ringbf, (void*)&tmpdata);

        printf("number of items: %d, idata: %d, fdata: %f \n", ringbf.count, tmpdata.idata, tmpdata.fdata);

    }
    
    ring_free(&ringbf);
    return 0;
}
