#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdbool.h>

/*
 * ringbuffer.h - C ring buffer (FIFO) interface.
 */
typedef struct ringbuffer_t
{
    void *buffer;     // data buffer
    void *buffer_end; // end of data buffer
    size_t capacity;  // maximum number of items in the buffer
    size_t count;     // number of items in the buffer
    size_t sz;        // size of each item in the buffer
    void *head;       // pointer to head
    void *tail;       // pointer to tail
} ringbuffer_t;

bool ring_init(ringbuffer_t *cb, size_t capacity, size_t sz);

bool ring_free(ringbuffer_t *cb);

bool ring_push_head(ringbuffer_t *cb, const void *item);

bool ring_pop_tail(ringbuffer_t *cb, void *item);

#ifdef __cplusplus
}
#endif

#endif /* RINGBUFFER_H */
