// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license.
// See LICENSE file in the project root for full license information.

#ifndef AZ_ULIB_TEST_HELPERS_H
#define AZ_ULIB_TEST_HELPERS_H

#include <stdint.h>

#include "az_ulib_ustream_base.h"
#include "az_ulib_ustream_forward.h"

/**
 * Check buffer
 */
void check_buffer(
    az_ulib_ustream* ustream_instance,
    uint8_t offset,
    const uint8_t* const expected_content,
    uint8_t expected_content_length);
/**
 * Check buffer
 */
void check_ustream_forward_buffer(
    az_ulib_ustream_forward* ustream_forward,
    uint8_t offset,
    const uint8_t* const expected_content,
    uint8_t expected_content_length);
#endif /* AZ_ULIB_TEST_HELPERS_H */
