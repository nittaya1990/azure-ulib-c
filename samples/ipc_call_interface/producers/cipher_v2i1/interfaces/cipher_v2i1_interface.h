// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license.
// See LICENSE file in the project root for full license information.

/********************************************************************
 * This code was auto-generated from cipher v2 DL and shall not be
 * modified.
 ********************************************************************/

#ifndef CIPHER_V2I1_INTERFACE_H
#define CIPHER_V2I1_INTERFACE_H

#include "az_ulib_result.h"

#ifdef __cplusplus
extern "C"
{
#else
#endif

#define CIPHER_2_PACKAGE_NAME "cipher"
#define CIPHER_2_PACKAGE_VERSION 2

  /*
   * Publish cipher interface.
   */
  az_result publish_cipher_v2i1_interface(void);

  /*
   * Unpublish cipher interface.
   */
  az_result unpublish_cipher_v2i1_interface(void);

#ifdef __cplusplus
}
#endif

#endif /* CIPHER_V2I1_INTERFACE_H */
