// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license.
// See LICENSE file in the project root for full license information.

/********************************************************************
 * This code was auto-generated from cipher v1 DL and shall not be
 * modified.
 ********************************************************************/

#ifndef CIPHER_1_WRAPPER_H
#define CIPHER_1_WRAPPER_H

#include "az_ulib_ipc_api.h"
#include "az_ulib_result.h"
#include "azure/az_core.h"
#include "cipher_1_model.h"

#ifdef __cplusplus
#include <cstdint>
extern "C"
{
#else
#include <stdint.h>
#endif

#define CIPHER_1_PACKAGE_NAME "cipher"

  /*
   * cipher class constructor.
   */
  static inline az_result cipher_1_create(az_ulib_ipc_interface_handle handle)
  {
    return az_ulib_ipc_try_get_interface(
        AZ_SPAN_EMPTY,
        AZ_SPAN_FROM_STR(CIPHER_1_PACKAGE_NAME),
        AZ_ULIB_VERSION_DEFAULT,
        AZ_SPAN_FROM_STR(CIPHER_1_INTERFACE_NAME),
        CIPHER_1_INTERFACE_VERSION,
        handle);
  }

  /*
   * cipher class destructor.
   */
  static inline void cipher_1_destroy(az_ulib_ipc_interface_handle handle)
  {
    az_result result = az_ulib_ipc_release_interface(handle);
    (void)result;
  }

  /*
   * Azure Callable Wrapper for cipher encrypt.
   */
  static inline az_result cipher_1_encrypt(
      az_ulib_ipc_interface_handle handle,
      uint32_t algorithm,
      az_span src,
      az_span* dest)
  {
    // Marshalling
    cipher_1_encrypt_model_in in = { .algorithm = algorithm, .src = src };
    cipher_1_encrypt_model_out out = { .dest = dest };

    // Call
    return az_ulib_ipc_call(handle, CIPHER_1_ENCRYPT_COMMAND, &in, &out);
  }

  /*
   * Azure Callable Wrapper for cipher decrypt.
   */
  static inline az_result cipher_1_decrypt(
      az_ulib_ipc_interface_handle handle,
      az_span src,
      az_span* dest)
  {
    // Marshalling
    cipher_1_decrypt_model_in in = { .src = src };
    cipher_1_decrypt_model_out out = { .dest = dest };

    // Call
    return az_ulib_ipc_call(handle, CIPHER_1_DECRYPT_COMMAND, &in, &out);
  }

  /*
   * Azure Callable Wrapper for cipher get alpha property.
   */
  static inline az_result cipher_1_get_alpha(az_ulib_ipc_interface_handle handle, int8_t* val)
  {
    return az_ulib_ipc_call(handle, CIPHER_1_GET_ALPHA_PROPERTY, NULL, val);
  }

  /*
   * Azure Callable Wrapper for cipher set alpha property.
   */
  static inline az_result cipher_1_set_alpha(az_ulib_ipc_interface_handle handle, const int8_t val)
  {
    return az_ulib_ipc_call(handle, CIPHER_1_SET_ALPHA_PROPERTY, &val, NULL);
  }

  /*
   * Azure Callable Wrapper for cipher get delta property.
   */
  static inline az_result cipher_1_get_delta(az_ulib_ipc_interface_handle handle, uint32_t* val)
  {
    return az_ulib_ipc_call(handle, CIPHER_1_GET_DELTA_PROPERTY, NULL, val);
  }

  /*
   * Azure Callable Wrapper for cipher set delta property.
   */
  static inline az_result cipher_1_set_delta(
      az_ulib_ipc_interface_handle handle,
      const uint32_t val)
  {
    return az_ulib_ipc_call(handle, CIPHER_1_SET_DELTA_PROPERTY, &val, NULL);
  }

#ifdef __cplusplus
}
#endif

#endif /* CIPHER_1_WRAPPER_H */
