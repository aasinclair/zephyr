/*
 * Copyright (c) 2023 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_SENSOR_NPM1300_CHARGER_H_
#define ZEPHYR_INCLUDE_DRIVERS_SENSOR_NPM1300_CHARGER_H_

#include <zephyr/drivers/sensor.h>

/* NPM1300 charger specific channels */
enum sensor_channel_npm1300_charger {
	SENSOR_CHAN_NPM1300_CHARGER_STATUS = SENSOR_CHAN_PRIV_START,
	SENSOR_CHAN_NPM1300_CHARGER_ERROR,
	SENSOR_CHAN_NPM1300_CHARGER_VBUSIN,
};

/* NPM1300 charger specific channel masks */
#define NPM1300_CHARGER_STATUS_CC_MASK      BIT_MASK(3)
#define NPM1300_CHARGER_VBUSIN_PRESENT_MASK BIT_MASK(0)

#endif
