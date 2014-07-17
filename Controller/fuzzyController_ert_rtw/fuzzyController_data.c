/*
 * File: fuzzyController_data.c
 *
 * Code generated for Simulink model 'fuzzyController'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.5 (R2013b) 08-Aug-2013
 * C/C++ source code generated on : Tue Jul 15 21:10:01 2014
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "fuzzyController.h"

/* Block parameters (auto storage) */
P_fuzzyController_T fuzzyController_P = {
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,

  { -3.0, -2.94, -2.88, -2.82, -2.76, -2.7, -2.64, -2.58, -2.52, -2.46, -2.4,
    -2.34, -2.2800000000000002, -2.2199999999999998, -2.16, -2.1, -2.04, -1.98,
    -1.92, -1.86, -1.8, -1.74, -1.68, -1.62, -1.56, -1.5, -1.44, -1.38, -1.32,
    -1.26, -1.2, -1.14, -1.08, -1.02, -0.96, -0.89999999999999991,
    -0.83999999999999986, -0.7799999999999998, -0.7200000000000002,
    -0.66000000000000014, -0.60000000000000009, -0.54, -0.48,
    -0.41999999999999993, -0.35999999999999988, -0.29999999999999982,
    -0.24000000000000021, -0.18000000000000016, -0.12000000000000011,
    -0.060000000000000053, 0.0, 0.060000000000000053, 0.12000000000000011,
    0.18000000000000016, 0.24000000000000021, 0.29999999999999982,
    0.35999999999999988, 0.41999999999999993, 0.48, 0.54, 0.60000000000000009,
    0.66000000000000014, 0.7200000000000002, 0.7799999999999998,
    0.83999999999999986, 0.89999999999999991, 0.96, 1.0199999999999996, 1.08,
    1.1399999999999997, 1.2000000000000002, 1.2599999999999998,
    1.3200000000000003, 1.38, 1.4400000000000004, 1.5, 1.5599999999999996, 1.62,
    1.6799999999999997, 1.7400000000000002, 1.7999999999999998,
    1.8600000000000003, 1.92, 1.9800000000000004, 2.04, 2.0999999999999996, 2.16,
    2.2199999999999998, 2.2800000000000002, 2.34, 2.4000000000000004, 2.46,
    2.5199999999999996, 2.58, 2.6399999999999997, 2.7, 2.76, 2.8200000000000003,
    2.88, 2.9400000000000004, 3.0 },
  1.0,

  { 0.0, 0.030000000000000027, 0.060000000000000053, 0.09000000000000008,
    0.12000000000000011, 0.14999999999999991, 0.17999999999999994,
    0.20999999999999996, 0.24, 0.27, 0.30000000000000004, 0.33000000000000007,
    0.35999999999999988, 0.39000000000000012, 0.41999999999999993,
    0.44999999999999996, 0.48, 0.51, 0.54, 0.57, 0.6, 0.63, 0.66, 0.69, 0.72,
    0.75, 0.78, 0.81, 0.84, 0.87, 0.9, 0.93, 0.96, 0.99, 0.98, 0.95,
    0.91999999999999993, 0.8899999999999999, 0.8600000000000001,
    0.83000000000000007, 0.8, 0.77, 0.74, 0.71, 0.67999999999999994,
    0.64999999999999991, 0.62000000000000011, 0.59000000000000008, 0.56, 0.53,
    0.5, 0.47, 0.43999999999999995, 0.40999999999999992, 0.37999999999999989,
    0.35000000000000009, 0.32000000000000006, 0.29000000000000004, 0.26,
    0.22999999999999998, 0.19999999999999996, 0.16999999999999993,
    0.1399999999999999, 0.1100000000000001, 0.080000000000000071,
    0.050000000000000044, 0.020000000000000018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.020000000000000018, 0.050000000000000044,
    0.080000000000000071, 0.1100000000000001, 0.1399999999999999,
    0.16999999999999993, 0.19999999999999996, 0.22999999999999998, 0.26,
    0.29000000000000004, 0.32000000000000006, 0.35000000000000009,
    0.37999999999999989, 0.40999999999999992, 0.43999999999999995, 0.47, 0.5,
    0.53, 0.56, 0.59000000000000008, 0.62000000000000011, 0.64999999999999991,
    0.67999999999999994, 0.71, 0.74, 0.77, 0.8, 0.83000000000000007,
    0.8600000000000001, 0.8899999999999999, 0.91999999999999993, 0.95, 0.98,
    0.99000000000000021, 0.96, 0.93000000000000016, 0.89999999999999991,
    0.87000000000000011, 0.83999999999999986, 0.81, 0.7799999999999998, 0.75,
    0.7200000000000002, 0.69, 0.66000000000000014, 0.62999999999999989,
    0.60000000000000009, 0.56999999999999984, 0.54, 0.50999999999999979, 0.48,
    0.45000000000000018, 0.41999999999999993, 0.39000000000000012,
    0.35999999999999988, 0.33000000000000007, 0.29999999999999982, 0.27,
    0.24000000000000021, 0.20999999999999996, 0.18000000000000016,
    0.14999999999999991, 0.12000000000000011, 0.089999999999999858,
    0.060000000000000053, 0.029999999999999805, 0.0 },
  1.0,
  1.0,

  { -2.0, -1.96, -1.92, -1.88, -1.84, -1.8, -1.76, -1.72, -1.68,
    -1.6400000000000001, -1.6, -1.56, -1.52, -1.48, -1.44, -1.4,
    -1.3599999999999999, -1.3199999999999998, -1.28, -1.24, -1.2,
    -1.1600000000000001, -1.12, -1.08, -1.04, -1.0, -0.96, -0.91999999999999993,
    -0.87999999999999989, -0.84000000000000008, -0.8, -0.76, -0.72,
    -0.67999999999999994, -0.6399999999999999, -0.60000000000000009, -0.56,
    -0.52, -0.48, -0.43999999999999995, -0.39999999999999991,
    -0.3600000000000001, -0.32000000000000006, -0.28, -0.24,
    -0.19999999999999996, -0.15999999999999992, -0.12000000000000011,
    -0.080000000000000071, -0.040000000000000036, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.16000000000000014,
    0.20000000000000018, 0.24000000000000021, 0.2799999999999998,
    0.31999999999999984, 0.35999999999999988, 0.39999999999999991,
    0.43999999999999995, 0.48, 0.52, 0.56, 0.60000000000000009,
    0.64000000000000012, 0.68000000000000016, 0.7200000000000002,
    0.75999999999999979, 0.79999999999999982, 0.83999999999999986,
    0.87999999999999989, 0.91999999999999993, 0.96, 1.0, 1.04, 1.08, 1.12,
    1.1600000000000001, 1.2000000000000002, 1.2400000000000002,
    1.2799999999999998, 1.3199999999999998, 1.3599999999999999, 1.4, 1.44, 1.48,
    1.52, 1.56, 1.6, 1.6400000000000001, 1.6800000000000002, 1.7200000000000002,
    1.7599999999999998, 1.7999999999999998, 1.8399999999999999, 1.88, 1.92, 1.96,
    2.0 },
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.15999999999999992,
    0.19999999999999996, 0.24, 0.28, 0.32000000000000006, 0.3600000000000001,
    0.39999999999999991, 0.43999999999999995, 0.48, 0.52, 0.56,
    0.60000000000000009, 0.6399999999999999, 0.67999999999999994, 0.72, 0.76,
    0.8, 0.84000000000000008, 0.87999999999999989, 0.91999999999999993, 0.96,
    1.0, 0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.15999999999999992,
    0.19999999999999996, 0.24, 0.28, 0.32000000000000006, 0.3600000000000001,
    0.39999999999999991, 0.43999999999999995, 0.48, 0.52, 0.56,
    0.60000000000000009, 0.6399999999999999, 0.67999999999999994, 0.72, 0.76,
    0.8, 0.84000000000000008, 0.87999999999999989, 0.91999999999999993, 0.96,
    1.0, 0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.15999999999999992,
    0.19999999999999996, 0.24, 0.28, 0.32000000000000006, 0.3600000000000001,
    0.39999999999999991, 0.43999999999999995, 0.48, 0.52, 0.56,
    0.60000000000000009, 0.6399999999999999, 0.67999999999999994, 0.72, 0.76,
    0.8, 0.84000000000000008, 0.87999999999999989, 0.91999999999999993, 0.96,
    1.0, 0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.15999999999999992,
    0.19999999999999996, 0.24, 0.28, 0.32000000000000006, 0.3600000000000001,
    0.39999999999999991, 0.43999999999999995, 0.48, 0.52, 0.56,
    0.60000000000000009, 0.6399999999999999, 0.67999999999999994, 0.72, 0.76,
    0.8, 0.84000000000000008, 0.87999999999999989, 0.91999999999999993, 0.96,
    1.0, 0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,

  { 0.0, 0.040000000000000036, 0.080000000000000071, 0.12000000000000011,
    0.15999999999999992, 0.19999999999999996, 0.24, 0.28, 0.32000000000000006,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016, 0.72,
    0.76, 0.8, 0.83999999999999986, 0.87999999999999989, 0.91999999999999993,
    0.96, 1.0, 0.96, 0.91999999999999993, 0.87999999999999989,
    0.84000000000000008, 0.8, 0.76, 0.72, 0.67999999999999994,
    0.6399999999999999, 0.60000000000000009, 0.56, 0.52, 0.48,
    0.43999999999999995, 0.39999999999999991, 0.3600000000000001,
    0.32000000000000006, 0.28, 0.24, 0.19999999999999996, 0.15999999999999992,
    0.12000000000000011, 0.080000000000000071, 0.040000000000000036, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.040000000000000036, 0.080000000000000071, 0.12000000000000011,
    0.15999999999999992, 0.19999999999999996, 0.24, 0.28, 0.32000000000000006,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016, 0.72,
    0.76, 0.8, 0.83999999999999986, 0.87999999999999989, 0.91999999999999993,
    0.96, 1.0, 0.96, 0.91999999999999993, 0.87999999999999989,
    0.84000000000000008, 0.8, 0.76, 0.72, 0.67999999999999994,
    0.6399999999999999, 0.60000000000000009, 0.56, 0.52, 0.48,
    0.43999999999999995, 0.39999999999999991, 0.3600000000000001,
    0.32000000000000006, 0.28, 0.24, 0.19999999999999996, 0.15999999999999992,
    0.12000000000000011, 0.080000000000000071, 0.040000000000000036, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.040000000000000036, 0.080000000000000071, 0.12000000000000011,
    0.15999999999999992, 0.19999999999999996, 0.24, 0.28, 0.32000000000000006,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016, 0.72,
    0.76, 0.8, 0.83999999999999986, 0.87999999999999989, 0.91999999999999993,
    0.96, 1.0, 0.96, 0.91999999999999993, 0.87999999999999989,
    0.84000000000000008, 0.8, 0.76, 0.72, 0.67999999999999994,
    0.6399999999999999, 0.60000000000000009, 0.56, 0.52, 0.48,
    0.43999999999999995, 0.39999999999999991, 0.3600000000000001,
    0.32000000000000006, 0.28, 0.24, 0.19999999999999996, 0.15999999999999992,
    0.12000000000000011, 0.080000000000000071, 0.040000000000000036, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.040000000000000036, 0.080000000000000071, 0.12000000000000011,
    0.15999999999999992, 0.19999999999999996, 0.24, 0.28, 0.32000000000000006,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016, 0.72,
    0.76, 0.8, 0.83999999999999986, 0.87999999999999989, 0.91999999999999993,
    0.96, 1.0, 0.96, 0.91999999999999993, 0.87999999999999989,
    0.84000000000000008, 0.8, 0.76, 0.72, 0.67999999999999994,
    0.6399999999999999, 0.60000000000000009, 0.56, 0.52, 0.48,
    0.43999999999999995, 0.39999999999999991, 0.3600000000000001,
    0.32000000000000006, 0.28, 0.24, 0.19999999999999996, 0.15999999999999992,
    0.12000000000000011, 0.080000000000000071, 0.040000000000000036, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0 },
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036, 0.080000000000000071,
    0.12000000000000011, 0.16000000000000014, 0.20000000000000018,
    0.24000000000000021, 0.2799999999999998, 0.31999999999999984,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016,
    0.7200000000000002, 0.75999999999999979, 0.79999999999999982,
    0.83999999999999986, 0.87999999999999989, 0.91999999999999993, 0.96, 1.0,
    0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0 },
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036, 0.080000000000000071,
    0.12000000000000011, 0.16000000000000014, 0.20000000000000018,
    0.24000000000000021, 0.2799999999999998, 0.31999999999999984,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016,
    0.7200000000000002, 0.75999999999999979, 0.79999999999999982,
    0.83999999999999986, 0.87999999999999989, 0.91999999999999993, 0.96, 1.0,
    0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0 },
  1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036, 0.080000000000000071,
    0.12000000000000011, 0.16000000000000014, 0.20000000000000018,
    0.24000000000000021, 0.2799999999999998, 0.31999999999999984,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016,
    0.7200000000000002, 0.75999999999999979, 0.79999999999999982,
    0.83999999999999986, 0.87999999999999989, 0.91999999999999993, 0.96, 1.0,
    0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.040000000000000036, 0.080000000000000071,
    0.12000000000000011, 0.16000000000000014, 0.20000000000000018,
    0.24000000000000021, 0.2799999999999998, 0.31999999999999984,
    0.35999999999999988, 0.39999999999999991, 0.43999999999999995, 0.48, 0.52,
    0.56, 0.60000000000000009, 0.64000000000000012, 0.68000000000000016,
    0.7200000000000002, 0.75999999999999979, 0.79999999999999982,
    0.83999999999999986, 0.87999999999999989, 0.91999999999999993, 0.96, 1.0,
    0.96, 0.91999999999999993, 0.87999999999999989, 0.83999999999999986,
    0.79999999999999982, 0.75999999999999979, 0.7200000000000002,
    0.68000000000000016, 0.64000000000000012, 0.60000000000000009, 0.56, 0.52,
    0.48, 0.43999999999999995, 0.39999999999999991, 0.35999999999999988,
    0.31999999999999984, 0.2799999999999998, 0.24000000000000021,
    0.20000000000000018, 0.16000000000000014, 0.12000000000000011,
    0.080000000000000071, 0.040000000000000036, 0.0 },

  { -2.0, -1.96, -1.92, -1.88, -1.84, -1.8, -1.76, -1.72, -1.68,
    -1.6400000000000001, -1.6, -1.56, -1.52, -1.48, -1.44, -1.4,
    -1.3599999999999999, -1.3199999999999998, -1.28, -1.24, -1.2,
    -1.1600000000000001, -1.12, -1.08, -1.04, -1.0, -0.96, -0.91999999999999993,
    -0.87999999999999989, -0.84000000000000008, -0.8, -0.76, -0.72,
    -0.67999999999999994, -0.6399999999999999, -0.60000000000000009, -0.56,
    -0.52, -0.48, -0.43999999999999995, -0.39999999999999991,
    -0.3600000000000001, -0.32000000000000006, -0.28, -0.24,
    -0.19999999999999996, -0.15999999999999992, -0.12000000000000011,
    -0.080000000000000071, -0.040000000000000036, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.16000000000000014,
    0.20000000000000018, 0.24000000000000021, 0.2799999999999998,
    0.31999999999999984, 0.35999999999999988, 0.39999999999999991,
    0.43999999999999995, 0.48, 0.52, 0.56, 0.60000000000000009,
    0.64000000000000012, 0.68000000000000016, 0.7200000000000002,
    0.75999999999999979, 0.79999999999999982, 0.83999999999999986,
    0.87999999999999989, 0.91999999999999993, 0.96, 1.0, 1.04, 1.08, 1.12,
    1.1600000000000001, 1.2000000000000002, 1.2400000000000002,
    1.2799999999999998, 1.3199999999999998, 1.3599999999999999, 1.4, 1.44, 1.48,
    1.52, 1.56, 1.6, 1.6400000000000001, 1.6800000000000002, 1.7200000000000002,
    1.7599999999999998, 1.7999999999999998, 1.8399999999999999, 1.88, 1.92, 1.96,
    2.0 },

  { -2.0, -1.96, -1.92, -1.88, -1.84, -1.8, -1.76, -1.72, -1.68,
    -1.6400000000000001, -1.6, -1.56, -1.52, -1.48, -1.44, -1.4,
    -1.3599999999999999, -1.3199999999999998, -1.28, -1.24, -1.2,
    -1.1600000000000001, -1.12, -1.08, -1.04, -1.0, -0.96, -0.91999999999999993,
    -0.87999999999999989, -0.84000000000000008, -0.8, -0.76, -0.72,
    -0.67999999999999994, -0.6399999999999999, -0.60000000000000009, -0.56,
    -0.52, -0.48, -0.43999999999999995, -0.39999999999999991,
    -0.3600000000000001, -0.32000000000000006, -0.28, -0.24,
    -0.19999999999999996, -0.15999999999999992, -0.12000000000000011,
    -0.080000000000000071, -0.040000000000000036, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.16000000000000014,
    0.20000000000000018, 0.24000000000000021, 0.2799999999999998,
    0.31999999999999984, 0.35999999999999988, 0.39999999999999991,
    0.43999999999999995, 0.48, 0.52, 0.56, 0.60000000000000009,
    0.64000000000000012, 0.68000000000000016, 0.7200000000000002,
    0.75999999999999979, 0.79999999999999982, 0.83999999999999986,
    0.87999999999999989, 0.91999999999999993, 0.96, 1.0, 1.04, 1.08, 1.12,
    1.1600000000000001, 1.2000000000000002, 1.2400000000000002,
    1.2799999999999998, 1.3199999999999998, 1.3599999999999999, 1.4, 1.44, 1.48,
    1.52, 1.56, 1.6, 1.6400000000000001, 1.6800000000000002, 1.7200000000000002,
    1.7599999999999998, 1.7999999999999998, 1.8399999999999999, 1.88, 1.92, 1.96,
    2.0 },
  1.0,
  1.0,
  1.0,

  { -2.0, -1.96, -1.92, -1.88, -1.84, -1.8, -1.76, -1.72, -1.68,
    -1.6400000000000001, -1.6, -1.56, -1.52, -1.48, -1.44, -1.4,
    -1.3599999999999999, -1.3199999999999998, -1.28, -1.24, -1.2,
    -1.1600000000000001, -1.12, -1.08, -1.04, -1.0, -0.96, -0.91999999999999993,
    -0.87999999999999989, -0.84000000000000008, -0.8, -0.76, -0.72,
    -0.67999999999999994, -0.6399999999999999, -0.60000000000000009, -0.56,
    -0.52, -0.48, -0.43999999999999995, -0.39999999999999991,
    -0.3600000000000001, -0.32000000000000006, -0.28, -0.24,
    -0.19999999999999996, -0.15999999999999992, -0.12000000000000011,
    -0.080000000000000071, -0.040000000000000036, 0.0, 0.040000000000000036,
    0.080000000000000071, 0.12000000000000011, 0.16000000000000014,
    0.20000000000000018, 0.24000000000000021, 0.2799999999999998,
    0.31999999999999984, 0.35999999999999988, 0.39999999999999991,
    0.43999999999999995, 0.48, 0.52, 0.56, 0.60000000000000009,
    0.64000000000000012, 0.68000000000000016, 0.7200000000000002,
    0.75999999999999979, 0.79999999999999982, 0.83999999999999986,
    0.87999999999999989, 0.91999999999999993, 0.96, 1.0, 1.04, 1.08, 1.12,
    1.1600000000000001, 1.2000000000000002, 1.2400000000000002,
    1.2799999999999998, 1.3199999999999998, 1.3599999999999999, 1.4, 1.44, 1.48,
    1.52, 1.56, 1.6, 1.6400000000000001, 1.6800000000000002, 1.7200000000000002,
    1.7599999999999998, 1.7999999999999998, 1.8399999999999999, 1.88, 1.92, 1.96,
    2.0 },
  0.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,

  /* Start of '<S106>/If Action Subsystem2' */
  {
    -1.0,
    0.0
  }
  /* End of '<S106>/If Action Subsystem2' */
  ,

  /* Start of '<S106>/If Action Subsystem3' */
  {
    -2.0,
    -1.0
  }
  /* End of '<S106>/If Action Subsystem3' */
  ,

  /* Start of '<S105>/If Action Subsystem2' */
  {
    0.0,
    1.0
  }
  /* End of '<S105>/If Action Subsystem2' */
  ,

  /* Start of '<S105>/If Action Subsystem3' */
  {
    -1.0,
    0.0
  }
  /* End of '<S105>/If Action Subsystem3' */
  ,

  /* Start of '<S104>/If Action Subsystem2' */
  {
    1.0,
    2.0
  }
  /* End of '<S104>/If Action Subsystem2' */
  ,

  /* Start of '<S104>/If Action Subsystem3' */
  {
    -0.0,
    1.0
  }
  /* End of '<S104>/If Action Subsystem3' */
  ,

  /* Start of '<S95>/If Action Subsystem2' */
  {
    1.0,
    3.0
  }
  /* End of '<S95>/If Action Subsystem2' */
  ,

  /* Start of '<S95>/If Action Subsystem3' */
  {
    -1.0,
    1.0
  }
  /* End of '<S95>/If Action Subsystem3' */
  ,

  /* Start of '<S94>/If Action Subsystem2' */
  {
    -1.0,
    1.0
  }
  /* End of '<S94>/If Action Subsystem2' */
  ,

  /* Start of '<S94>/If Action Subsystem3' */
  {
    -3.0,
    -1.0
  }
  /* End of '<S94>/If Action Subsystem3' */
  ,

  /* Start of '<S81>/If Action Subsystem2' */
  {
    1.0,
    2.0
  }
  /* End of '<S81>/If Action Subsystem2' */
  ,

  /* Start of '<S81>/If Action Subsystem3' */
  {
    0.0,
    1.0
  }
  /* End of '<S81>/If Action Subsystem3' */
  ,

  /* Start of '<S80>/If Action Subsystem2' */
  {
    0.0,
    1.0
  }
  /* End of '<S80>/If Action Subsystem2' */
  ,

  /* Start of '<S80>/If Action Subsystem3' */
  {
    -1.0,
    0.0
  }
  /* End of '<S80>/If Action Subsystem3' */
  ,

  /* Start of '<S79>/If Action Subsystem2' */
  {
    -1.0,
    0.0
  }
  /* End of '<S79>/If Action Subsystem2' */
  ,

  /* Start of '<S79>/If Action Subsystem3' */
  {
    -2.0,
    -1.0
  }
  /* End of '<S79>/If Action Subsystem3' */
  ,

  /* Start of '<S70>/If Action Subsystem2' */
  {
    -1.0,
    -0.0
  }
  /* End of '<S70>/If Action Subsystem2' */
  ,

  /* Start of '<S70>/If Action Subsystem3' */
  {
    -2.0,
    -1.0
  }
  /* End of '<S70>/If Action Subsystem3' */
  ,

  /* Start of '<S69>/If Action Subsystem2' */
  {
    1.0,
    2.0
  }
  /* End of '<S69>/If Action Subsystem2' */
  ,

  /* Start of '<S69>/If Action Subsystem3' */
  {
    -0.0,
    1.0
  }
  /* End of '<S69>/If Action Subsystem3' */
  ,

  /* Start of '<S60>/If Action Subsystem2' */
  {
    -1.0,
    0.0
  }
  /* End of '<S60>/If Action Subsystem2' */
  ,

  /* Start of '<S60>/If Action Subsystem3' */
  {
    -2.0,
    -1.0
  }
  /* End of '<S60>/If Action Subsystem3' */
  ,

  /* Start of '<S59>/If Action Subsystem2' */
  {
    1.0,
    2.0
  }
  /* End of '<S59>/If Action Subsystem2' */
  ,

  /* Start of '<S59>/If Action Subsystem3' */
  {
    0.0,
    1.0
  }
  /* End of '<S59>/If Action Subsystem3' */
  ,

  /* Start of '<S46>/If Action Subsystem2' */
  {
    1.0,
    2.0
  }
  /* End of '<S46>/If Action Subsystem2' */
  ,

  /* Start of '<S46>/If Action Subsystem3' */
  {
    -0.0,
    1.0
  }
  /* End of '<S46>/If Action Subsystem3' */
  ,

  /* Start of '<S45>/If Action Subsystem2' */
  {
    0.0,
    1.0
  }
  /* End of '<S45>/If Action Subsystem2' */
  ,

  /* Start of '<S45>/If Action Subsystem3' */
  {
    -1.0,
    0.0
  }
  /* End of '<S45>/If Action Subsystem3' */
  ,

  /* Start of '<S44>/If Action Subsystem2' */
  {
    -1.0,
    0.0
  }
  /* End of '<S44>/If Action Subsystem2' */
  ,

  /* Start of '<S44>/If Action Subsystem3' */
  {
    -2.0,
    -1.0
  }
  /* End of '<S44>/If Action Subsystem3' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
