#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

#define SHA256_HASH_STR_LEN 65
/**
 * Computes the SHA-256 hash of the given input message.
 *
 * @param msg          The input message to hash.
 * @param hashOutput   A pointer to a char array of at least SHA256_HASH_STR_LEN bytes.
 *                     The resulting hash (as a hex string) will be written here.
 *
 * @return             0 on success, non-zero on failure.
 */
int SHA256(const char* msg, char* hashOutput);

#ifdef __cplusplus
}
#endif
