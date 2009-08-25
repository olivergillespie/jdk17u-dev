/*
 * Copyright 2000-2009 Sun Microsystems, Inc.  All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 *
 */

// native word offsets from memory address (big endian)
enum {
  pd_lo_word_offset_in_bytes = BytesPerInt,
  pd_hi_word_offset_in_bytes = 0
};


// explicit rounding operations are not required to implement the strictFP mode
enum {
  pd_strict_fp_requires_explicit_rounding = false
};


// registers
enum {
  pd_nof_cpu_regs_frame_map = 32,  // number of registers used during code emission
  pd_nof_caller_save_cpu_regs_frame_map = 10,  // number of cpu registers killed by calls
  pd_nof_cpu_regs_reg_alloc = 20,  // number of registers that are visible to register allocator
  pd_nof_cpu_regs_linearscan = 32,// number of registers visible linear scan
  pd_first_cpu_reg = 0,
  pd_last_cpu_reg = 31,
  pd_last_allocatable_cpu_reg = 19,
  pd_first_callee_saved_reg = 0,
  pd_last_callee_saved_reg = 13,

  pd_nof_fpu_regs_frame_map = 32,  // number of registers used during code emission
  pd_nof_caller_save_fpu_regs_frame_map = 32,  // number of fpu registers killed by calls
  pd_nof_fpu_regs_reg_alloc = 32,  // number of registers that are visible to register allocator
  pd_nof_fpu_regs_linearscan = 32, // number of registers visible to linear scan
  pd_first_fpu_reg = pd_nof_cpu_regs_frame_map,
  pd_last_fpu_reg =  pd_nof_cpu_regs_frame_map + pd_nof_fpu_regs_frame_map - 1,

  pd_nof_xmm_regs_linearscan = 0,
  pd_nof_caller_save_xmm_regs = 0,
  pd_first_xmm_reg = -1,
  pd_last_xmm_reg = -1
};


// for debug info: a float value in a register is saved in single precision by runtime stubs
enum {
  pd_float_saved_as_double = false
};
