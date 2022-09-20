/* Copyright 2022 Niels Westphal (crashniels)
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

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_iso( \
      K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B, \
      K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B, \
      K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B, \
      K30,  K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B, \
      K40,  K41,  K42,  K43,  K44,  K45,  K46,  K47,  K48,  K49,  K4A,  K4B, \
      K50,  K51,  K52,        K54,              K57,  K58,  K59,             \
      K60,  K61,  K62,  K63,  K64,  K65,  K66,  K67,        K69,  K6A,       \
      K70,        K72,  K73,  K74,  K75,  K76,  K77,  K78,  K79,  K7A,  K7B, \
            K81,  K82,  K83,  K84,  K85,  K86,  K87,  K88,  K89,  K8A,  K8B, \
      K90,  K91,  K92,        K94,  K95,  K96,  K97,  K98,  K99,  K9A,  K9B  \
) { \
    { K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B  },  \
    { K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B  },  \
    { K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B  },  \
    { K30,  K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B  },  \
    { K40,  K41,  K42,  K43,  K44,  K45,  K46,  K47,  K48,  K49,  K4A,  K4B  },  \
    { K50,  K51,  K52,  XXX,  K54,  XXX,  XXX,  K57,  K58,  K59,  XXX,  XXX  },  \
    { K60,  K61,  K62,  K63,  K64,  K65,  K66,  K67,  XXX,  K69,  K6A,  XXX  },  \
    { K70,  XXX,  K72,  K73,  K74,  K75,  K76,  K77,  K78,  K79,  K7A,  K7B  },  \
    { XXX,  K81,  K82,  K83,  K84,  K85,  K86,  K87,  K88,  K89,  K8A,  K8B  },  \
    { K90,  K91,  K92,  XXX,  K94,  K95,  K96,  K97,  K98,  K99,  K9A,  K9B  }   \
}

void off_all_leds(void);
void on_all_leds(void);
