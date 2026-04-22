/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define FLOW_TAP_TERM 70

#ifdef VIA_ENABLE
#    define DYNAMIC_KEYMAP_LAYER_COUNT 5
#endif

#ifndef __arm__
#    define NO_ACTION_ONESHOT
#endif

/* -------------------------------
   Whooshing-mode DPI overrides
   ------------------------------- */

// Slow baseline DPI (default mode)
#undef CHARYBDIS_MINIMUM_DEFAULT_DPI
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 200

#undef CHARYBDIS_DEFAULT_DPI_CONFIG_STEP
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 200

// Fast whooshing DPI (repurposed sniping mode)
#undef CHARYBDIS_MINIMUM_SNIPING_DPI
#define CHARYBDIS_MINIMUM_SNIPING_DPI 800

#undef CHARYBDIS_SNIPING_DPI_CONFIG_STEP
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200

/* Charybdis-specific features */
// (You can enable auto pointer layer here if desired)
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
