/* Copyright (C) 2012-2014 Zeex
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SAMPGDK_INTERNAL_CALLBACK_H
#define SAMPGDK_INTERNAL_CALLBACK_H

#include <sampgdk/bool.h>
#include <sampgdk/sdk.h>

typedef bool (*sampgdk_callback_handler)(AMX *amx, void *func, cell *retval);

struct sampgdk_callback {
  char                     *name;
  sampgdk_callback_handler  handler;
};

struct sampgdk_callback *sampgdk_callback_find(const char *name);
int sampgdk_callback_register(const char *name, sampgdk_callback_handler handler);
int sampgdk_callback_register_table(const struct sampgdk_callback *table);
void sampgdk_callback_unregister(const char *name);
void sampgdk_callback_unregister_table(const struct sampgdk_callback *table);
bool sampgdk_callback_invoke(AMX *amx, const char *name, cell *retval);

#endif /* !SAMPGDK_INTERNAL_CALLBACK_H */
