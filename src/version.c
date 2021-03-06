/* Copyright (C) 2011-2014 Zeex
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

#include <sampgdk/export.h>
#include <sampgdk/version.h>

SAMPGDK_API(int, sampgdk_get_version(void)) {
  return SAMPGDK_VERSION_ID;
}

SAMPGDK_API(const char *, sampgdk_get_version_string(void)) {
  return SAMPGDK_VERSION_STRING;
}
