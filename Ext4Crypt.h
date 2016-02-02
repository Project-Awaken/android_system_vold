/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stddef.h>
#include <sys/cdefs.h>

#include <cutils/multiuser.h>

__BEGIN_DECLS

// General functions
int e4crypt_enable(const char* path);
int e4crypt_crypto_complete(const char* path);
int e4crypt_get_field(const char* path, const char* fieldname,
                      char* value, size_t len);
int e4crypt_set_field(const char* path, const char* fieldname,
                      const char* value);

int e4crypt_init_user0();
int e4crypt_vold_create_user_key(userid_t user_id, int serial, bool ephemeral);
int e4crypt_destroy_user_key(userid_t user_id);

int e4crypt_unlock_user_key(userid_t user_id, int serial, const char* token);
int e4crypt_lock_user_key(userid_t user_id);

int e4crypt_prepare_user_storage(const char* volume_uuid,
                                 userid_t user_id,
                                 int serial,
                                 bool ephemeral);

__END_DECLS
