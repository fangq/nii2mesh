/*
 * Base64 encoding/decoding (RFC1341)
 * Copyright (c) 2005, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#ifndef QUADRIC_H
#define QUADRIC_H

#include "meshify.h"

void quadric_simplify_mesh(vec3d **vs, vec3i **ts, int* nvert, int *ntri, int target_count, double agressiveness, bool verbose, bool finishLossless);
void laplacian_smoothHC(vec3d *verts, vec3i *tris, int nvert, int ntri, double alpha, double beta, int iter, bool lockEdges);

#endif /* QUADRIC_H */