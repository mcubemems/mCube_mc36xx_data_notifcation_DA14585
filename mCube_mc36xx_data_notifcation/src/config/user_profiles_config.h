/**
 ****************************************************************************************
 *
 * @file user_profiles_config.h
 *
 * @brief Configuration file for the profiles used in the application.
 *
 * Copyright (c) 2017-2018 Dialog Semiconductor. All rights reserved.
 *
 * This software ("Software") is owned by Dialog Semiconductor.
 *
 * By using this Software you agree that Dialog Semiconductor retains all
 * intellectual property and proprietary rights in and to this Software and any
 * use, reproduction, disclosure or distribution of the Software without express
 * written permission or a license agreement from Dialog Semiconductor is
 * strictly prohibited. This Software is solely for use on or in conjunction
 * with Dialog Semiconductor products.
 *
 * EXCEPT AS OTHERWISE PROVIDED IN A LICENSE AGREEMENT BETWEEN THE PARTIES, THE
 * SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. EXCEPT AS OTHERWISE
 * PROVIDED IN A LICENSE AGREEMENT BETWEEN THE PARTIES, IN NO EVENT SHALL
 * DIALOG SEMICONDUCTOR BE LIABLE FOR ANY DIRECT, SPECIAL, INDIRECT, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF
 * USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THE SOFTWARE.
 *
 ****************************************************************************************
 */

#ifndef _USER_PROFILES_CONFIG_H_
#define _USER_PROFILES_CONFIG_H_

/**
 ****************************************************************************************
 * @defgroup APP_CONFIG
 * @ingroup APP
 * @brief  Application configuration file
 *
 * This file contains the configuration of the profiles used by the application.
 *
 * @{
 ****************************************************************************************
 */

/*
 * DEFINITIONS
 ****************************************************************************************
 */

/***************************************************************************************/
/* Used BLE profiles (used by "rwprf_config.h").                                       */
/***************************************************************************************/

#define CFG_PRF_DISS
#define CFG_PRF_CUST1

/***************************************************************************************/
/* Profile application configuration section                                           */
/***************************************************************************************/

/*
 ****************************************************************************************
 * DISS application profile configuration
 ****************************************************************************************
 */

#define APP_DIS_FEATURES                (DIS_MANUFACTURER_NAME_CHAR_SUP | \
                                        DIS_MODEL_NB_STR_CHAR_SUP | \
                                        DIS_SYSTEM_ID_CHAR_SUP | \
                                        DIS_SW_REV_STR_CHAR_SUP | \
                                        DIS_FIRM_REV_STR_CHAR_SUP | \
                                        DIS_PNP_ID_CHAR_SUP)

/// Manufacturer Name (up to 18 chars)
#define APP_DIS_MANUFACTURER_NAME       ("Dialog Semi")
#define APP_DIS_MANUFACTURER_NAME_LEN   (11)

/// Model Number String (up to 18 chars)
#ifdef __DA14586__
#define APP_DIS_MODEL_NB_STR            ("DA14586")
#else
#define APP_DIS_MODEL_NB_STR            ("DA14585")
#endif
#define APP_DIS_MODEL_NB_STR_LEN        (7)

/// System ID - LSB -> MSB
#define APP_DIS_SYSTEM_ID               ("\x12\x34\x56\xFF\xFE\x9A\xBC\xDE")
#define APP_DIS_SYSTEM_ID_LEN           (8)

#define APP_DIS_SW_REV                  SDK_VERSION
#define APP_DIS_FIRM_REV                SDK_VERSION

/// Serial Number
#define APP_DIS_SERIAL_NB_STR           ("1.0.0.0-LE")
#define APP_DIS_SERIAL_NB_STR_LEN       (10)

/// Hardware Revision String
#define APP_DIS_HARD_REV_STR            ("DA14585")
#define APP_DIS_HARD_REV_STR_LEN        (7)

/// Firmware Revision
#define APP_DIS_FIRM_REV_STR            SDK_VERSION
#define APP_DIS_FIRM_REV_STR_LEN        (sizeof(APP_DIS_FIRM_REV_STR) - 1)

/// Software Revision String
#define APP_DIS_SW_REV_STR              SDK_VERSION
#define APP_DIS_SW_REV_STR_LEN          (sizeof(APP_DIS_SW_REV_STR) - 1)

/// IEEE
#define APP_DIS_IEEE                    ("\xFF\xEE\xDD\xCC\xBB\xAA")
#define APP_DIS_IEEE_LEN                (6)

/**
 * PNP ID Value - LSB -> MSB
 *      Vendor ID Source : 0x02 (USB Implementers Forum assigned Vendor ID value)
 *      Vendor ID : 0x045E      (Microsoft Corp)
 *      Product ID : 0x0040
 *      Product Version : 0x0300
 * e.g. #define APP_DIS_PNP_ID          ("\x02\x5E\x04\x40\x00\x00\x03")
 */
#define APP_DIS_PNP_ID                  ("\x01\xD2\x00\x80\x05\x00\x01")
#define APP_DIS_PNP_ID_LEN              (7)

/*
 ****************************************************************************************
 * CUST1 application profile configuration
 ****************************************************************************************
 */

/// @} APP_CONFIG

#endif // _USER_PROFILES_CONFIG_H_
