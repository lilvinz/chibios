/*
    ChibiOS - Copyright (C) 2016 Rocco Marco Guglielmi

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    hal_gyroscope.h
 * @brief   Generic gyroscope interface header.
 *
 * @addtogroup HAL_GYROSCOPE
 * @{
 */

#ifndef _HAL_GYROSCOPE_H_
#define _HAL_GYROSCOPE_H_

#include "hal_sensors.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief   BaseGyroscope specific methods.
 */
#define _base_gyroscope_methods_alone                                       \
  /* Remove the calibration data.*/                                         \
  msg_t (*reset_calibration)(void *instance);                               \
  /* Invokes the calibration procedure.*/                                   \
  msg_t (*calibrate)(void *instance);

/**
 * @brief   BaseGyroscope specific methods with inherited ones.
 */
#define _base_gyroscope_methods                                             \
  _base_sensor_methods                                                      \
  _base_gyroscope_methods_alone

/**
 * @brief   @p BaseGyroscope virtual methods table.
 */
struct BaseGyroscopeVMT {
  _base_gyroscope_methods
};

/**
 * @brief   @p BaseGyroscope specific data.
 */
#define _base_gyroscope_data                                                \
  _base_sensor_data

/**
 * @brief   Base gyroscope class.
 * @details This class represents a generic gyroscope.
 */
typedef struct {
  /** @brief Virtual Methods Table.*/
  const struct BaseGyroscopeVMT *vmt;
  _base_gyroscope_data
} BaseGyroscope;

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/**
 * @name    Macro Functions (BaseGyroscope)
 * @{
 */
/**
 * @brief   Gyroscope get axes number.
 *
 * @param[in] ip        pointer to a @p BaseGyroscope class.
 * @return              The number of axes of the BaseSensor
 *
 * @api
 */
#define gyroscopeGetAxesNumber(ip) sensorGetAxesNumber(ip)

/**
 * @brief   Gyroscope read raw data.
 *
 * @param[in] ip        pointer to a @p BaseGyroscope class.
 * @param[in] dp        pointer to a data array.
 * 
 * @return              The operation status.
 * @retval MSG_OK       if the function succeeded.
 * @retval MSG_RESET    if one or more errors occurred.
 *
 * @api
 */
#define gyroscopeReadRaw(ip, dp) sensorReadRaw(ip, dp)

/**
 * @brief   Gyroscope read cooked data.
 *
 * @param[in] ip        pointer to a @p BaseGyroscope class.
 * @param[in] dp        pointer to a data array.
 * 
 * @return              The operation status.
 * @retval MSG_OK       if the function succeeded.
 * @retval MSG_RESET    if one or more errors occurred.
 *
 * @api
 */
#define gyroscopeReadCooked(ip, dp) sensorReadCooked(ip, dp)

/**
 * @brief   Delete calibration data.
 *
 * @param[in] ip        pointer to a @p BaseGyroscope class.
 * 
 * @return              The operation status.
 * @retval MSG_OK       if the function succeeded.
 * @retval MSG_RESET    if one or more errors occurred.
 *
 * @api
 */
#define gyroscopeResetCalibration(ip) ((ip)->vmt->reset_calibration(ip))

/**
 * @brief   Gyroscope calibration procedure.
 *
 * @param[in] ip        pointer to a @p BaseGyroscope class.
 * 
 * @return              The operation status.
 * @retval MSG_OK       if the function succeeded.
 * @retval MSG_RESET    if one or more errors occurred.
 *
 * @api
 */
#define gyroscopeCalibrate(ip) ((ip)->vmt->calibrate(ip))
/** @} */

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif /* _HAL_GYROSCOPE_H_ */

/** @} */
