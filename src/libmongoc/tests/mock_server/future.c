#include <stdio.h>

#include "mongoc-array-private.h"
#include "mongoc-thread-private.h"
#include "future.h"
#include "../test-libmongoc.h"

/**************************************************
 *
 * Generated by build/generate-future-functions.py.
 *
 * DO NOT EDIT THIS FILE.
 *
 *************************************************/

#define DEFAULT_FUTURE_TIMEOUT_MS 10 * 1000

static int64_t
get_future_timeout_ms ()
{
    return test_framework_getenv_int64 ("MONGOC_TEST_FUTURE_TIMEOUT_MS",
                                        DEFAULT_FUTURE_TIMEOUT_MS);
}

void
future_get_void (future_t *future)
{
   if (!future_wait (future)) {
      fprintf (stderr, "%s timed out\n", BSON_FUNC);
      abort ();
   }
}


bool
future_get_bool (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_bool (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

char_ptr
future_get_char_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_char_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

char_ptr_ptr
future_get_char_ptr_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_char_ptr_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

int
future_get_int (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_int (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

int64_t
future_get_int64_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_int64_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

size_t
future_get_size_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_size_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

ssize_t
future_get_ssize_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_ssize_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

uint32_t
future_get_uint32_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_uint32_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

const_char_ptr
future_get_const_char_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_const_char_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

bson_error_ptr
future_get_bson_error_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_bson_error_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

bson_ptr
future_get_bson_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_bson_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

const_bson_ptr
future_get_const_bson_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_const_bson_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

const_bson_ptr_ptr
future_get_const_bson_ptr_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_const_bson_ptr_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_bulk_operation_ptr
future_get_mongoc_bulk_operation_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_bulk_operation_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_client_ptr
future_get_mongoc_client_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_client_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_collection_ptr
future_get_mongoc_collection_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_collection_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_cursor_ptr
future_get_mongoc_cursor_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_cursor_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_database_ptr
future_get_mongoc_database_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_database_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_gridfs_file_ptr
future_get_mongoc_gridfs_file_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_gridfs_file_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_gridfs_ptr
future_get_mongoc_gridfs_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_gridfs_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_insert_flags_t
future_get_mongoc_insert_flags_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_insert_flags_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_iovec_ptr
future_get_mongoc_iovec_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_iovec_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_query_flags_t
future_get_mongoc_query_flags_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_query_flags_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_server_description_ptr
future_get_mongoc_server_description_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_server_description_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_ss_optype_t
future_get_mongoc_ss_optype_t (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_ss_optype_t (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

mongoc_topology_ptr
future_get_mongoc_topology_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_mongoc_topology_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

const_mongoc_find_and_modify_opts_ptr
future_get_const_mongoc_find_and_modify_opts_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_const_mongoc_find_and_modify_opts_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

const_mongoc_read_prefs_ptr
future_get_const_mongoc_read_prefs_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_const_mongoc_read_prefs_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}

const_mongoc_write_concern_ptr
future_get_const_mongoc_write_concern_ptr (future_t *future)
{
   if (future_wait (future)) {
      return future_value_get_const_mongoc_write_concern_ptr (&future->return_value);
   }

   fprintf (stderr, "%s timed out\n", BSON_FUNC);
   abort ();
}


future_t *
future_new (future_value_type_t return_type, int argc)
{
   future_t *future;

   future = (future_t *)bson_malloc0 (sizeof *future);
   future->return_value.type = return_type;
   future->argc = argc;
   future->argv = (future_value_t *)bson_malloc0 ((size_t) argc * sizeof(future_value_t));
   mongoc_cond_init (&future->cond);
   mongoc_mutex_init (&future->mutex);

   return future;
}

future_value_t *
future_get_param (future_t *future, int i)
{
   return &future->argv[i];
}

void
future_start (future_t *future,
              void *(*start_routine)(void *))
{
   int r = mongoc_thread_create (&future->thread,
                                 start_routine,
                                 (void *) future);

   assert (!r);
}


void
future_resolve (future_t *future, future_value_t return_value)
{
   mongoc_mutex_lock (&future->mutex);
   assert (!future->resolved);
   assert (future->return_value.type == return_value.type);
   future->return_value = return_value;
   future->resolved = true;
   mongoc_cond_signal (&future->cond);
   mongoc_mutex_unlock (&future->mutex);
}


bool
future_wait (future_t *future)
{
   int64_t deadline = bson_get_monotonic_time () + get_future_timeout_ms ();
   bool resolved;

   mongoc_mutex_lock (&future->mutex);
   while (!future->resolved && bson_get_monotonic_time () <= deadline) {
      mongoc_cond_timedwait (&future->cond,
                             &future->mutex,
                             get_future_timeout_ms ());
   }
   resolved = future->resolved;
   mongoc_mutex_unlock (&future->mutex);

   if (resolved) {
      future->awaited = true;

      /* free memory */
      mongoc_thread_join (future->thread);
   }

   return resolved;
}


void
future_destroy (future_t *future)
{
   assert (future->awaited);
   bson_free (future->argv);
   mongoc_cond_destroy (&future->cond);
   mongoc_mutex_destroy (&future->mutex);
   bson_free (future);
}
