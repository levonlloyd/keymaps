/* Copyright 2021 mtei
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
// clang-format off

#define _MAP1(E, _1) E(_1)
#define _MAP2(E, _1,_2) E(_1) E(_2)
#define _MAP3(E, _1,_2,_3) E(_1) E(_2) E(_3)
#define _MAP4(E, _1,_2,_3,_4) E(_1) E(_2) E(_3) E(_4)
#define _MAP5(E, _1,_2,_3,_4,_5) E(_1) E(_2) E(_3) E(_4) E(_5)
#define _MAP6(E, _1,_2,_3,_4,_5,_6) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6)
#define _MAP7(E, _1,_2,_3,_4,_5,_6,_7) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7)
#define _MAP8(E, _1,_2,_3,_4,_5,_6,_7,_8) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8)
#define _MAP9(E, _1,_2,_3,_4,_5,_6,_7,_8,_9) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9)
#define _MAP10(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10)
#define _MAP11(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11)
#define _MAP12(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12)
#define _MAP13(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13)
#define _MAP14(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14)
#define _MAP15(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15)
#define _MAP16(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16)
#define _MAP17(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17)
#define _MAP18(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18)
#define _MAP19(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19)
#define _MAP20(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20)
#define _MAP21(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21)
#define _MAP22(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22)
#define _MAP23(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23)
#define _MAP24(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24)
#define _MAP25(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25)
#define _MAP26(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26)
#define _MAP27(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26) E(_27)
#define _MAP28(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26) E(_27) E(_28)
#define _MAP29(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26) E(_27) E(_28) E(_29)
#define _MAP30(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26) E(_27) E(_28) E(_29) E(_30)
#define _MAP31(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26) E(_27) E(_28) E(_29) E(_30) E(_31)
#define _MAP32(E, _1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32) E(_1) E(_2) E(_3) E(_4) E(_5) E(_6) E(_7) E(_8) E(_9) E(_10) E(_11) E(_12) E(_13) E(_14) E(_15) E(_16) E(_17) E(_18) E(_19) E(_20) E(_21) E(_22) E(_23) E(_24) E(_25) E(_26) E(_27) E(_28) E(_29) E(_30) E(_31) E(_32)

#define SELECT_MAP(e,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,NAME,...) NAME
#define MAP(E,...) SELECT_MAP(E,__VA_ARGS__,_MAP32,_MAP31,_MAP30,_MAP29,_MAP28,_MAP27,_MAP26,_MAP25,_MAP24,_MAP23,_MAP22,_MAP21,_MAP20,_MAP19,_MAP18,_MAP17,_MAP16,_MAP15,_MAP14,_MAP13,_MAP12,_MAP11,_MAP10,_MAP9,_MAP8,_MAP7,_MAP6,_MAP5,_MAP4,_MAP3,_MAP2,_MAP1)(E,__VA_ARGS__)