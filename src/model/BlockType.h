// Copyright (c) Stanford University, The Regents of the University of
//               California, and others.
//
// All Rights Reserved.
//
// See Copyright-SimVascular.txt for additional details.
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject
// to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
/**
 * @file BlockType.h
 * @brief Specifies the types of blocks and their parameters
 */
#ifndef SVZERODSOLVER_MODEL_BLOCK_TYPE_HPP_
#define SVZERODSOLVER_MODEL_BLOCK_TYPE_HPP_

#include <string>

/**
 * @brief The types of blocks supported by the solver
 */
enum class BlockType {
  blood_vessel = 0,
  junction = 1,
  blood_vessel_junction = 2,
  resistive_junction = 3,
  flow_bc = 4,
  pressure_bc = 5,
  resistance_bc = 6,
  windkessel_bc = 7,
  open_loop_coronary_bc = 8,
  closed_loop_coronary_left_bc = 9,
  closed_loop_coronary_right_bc = 10,
  closed_loop_rcr_bc = 11,
  closed_loop_heart_pulmonary = 12,
  valve_tanh = 13,
  chamber_elastance_inductor = 14,
  blood_vessel_CRL = 15,
  regazzoni_chamber = 16,
  regazzoni_valve = 17,
  kung_ventricle = 18
};

/**
 * @brief The classes/categories of blocks supported. Some classes require
 * special handling (e.g. closed_loop).
 */
enum class BlockClass {
  vessel = 0,
  junction = 1,
  boundary_condition = 2,
  closed_loop = 3,
  external = 4,
  valve = 5,
  chamber = 6
};

/**
 * @brief The types of vessel blocks supported.
 */
enum class VesselType { inlet = 0, outlet = 1, both = 2, neither = 3 };

#endif
