/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <drivers/sensor.h>

enum sensor_channel_bvd {
	/** Charging state, bool **/
	SENSOR_CHAN_CHARGING = SENSOR_CHAN_PRIV_START,
}