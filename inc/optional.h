/*
 * optional.h - cleri optional element.
 *
 * author       : Jeroen van der Heijden
 * email        : jeroen@transceptor.technology
 * copyright    : 2016, Transceptor Technology
 *
 * changes
 *  - initial version, 08-03-2016
 *
 */
#pragma once

#include <inttypes.h>
#include <cleri/object.h>

struct cleri_object_s;

typedef struct cleri_optional_s
{
    uint32_t gid;
    struct cleri_object_s * cl_obj;
} cleri_optional_t;

struct cleri_object_s * cleri_optional(
        uint32_t gid,
        struct cleri_object_s * cl_obj);

