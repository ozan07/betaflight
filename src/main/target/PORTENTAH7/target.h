/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "PORTENTAH7"
#define USBD_PRODUCT_STRING "PORTENTAH7_Beta"

#define USE_TARGET_CONFIG

#define USE_DEBUG_PIN
#define DEBUG_PIN_COUNT         1

#define LED0_PIN                PK5
#define LED1_PIN                PK6 
#define LED2_PIN                PK7 

// Use explicit cache management as per https://github.com/betaflight/betaflight/pull/10378
#define USE_LEDSTRIP_CACHE_MGMT

// Nucleo-H743 has one button (The blue USER button).
// Force two buttons to look at the single button so config reset on button works
#define USE_BUTTONS
#define BUTTON_A_PIN            PH15
#define BUTTON_A_PIN_INVERTED // Active high
#define BUTTON_B_PIN            PH15
#define BUTTON_B_PIN_INVERTED // Active high

/*
#define USE_BEEPER
#define BEEPER_PIN              PE3
#define BEEPER_INVERTED
*/



#define USE_ACC
#define USE_FAKE_ACC
#define USE_ACC_MPU6050

#define USE_GYRO
#define USE_FAKE_GYRO
#define USE_GYRO_MPU6050
#define GYRO_1_ALIGN       CW270_DEG

// MPU6050 interrupts
#define GYRO_1_EXTI_PIN    PB15

#define USE_MAG
#define USE_FAKE_MAG
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_LIS3MDL
#define MAG_HMC5883_ALIGN CW270_DEG_FLIP

#define USE_BARO
#define USE_FAKE_BARO
#define USE_BARO_MS5611
#define USE_BARO_SPI_BMP388
#define BARO_SPI_INSTANCE       SPI1
#define BARO_CS_PIN             SPI1_NSS_PIN


#define USE_UART

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
/*
#define USE_UART2
#define UART2_RX_PIN            NONE // PD6, collide with SDMMC2_CK
#define UART2_TX_PIN            PD5

#define USE_UART3
#define UART3_RX_PIN            PD9  // ST-LINK Virtual COM Port
#define UART3_TX_PIN            PD8  // ST-LINK Virtual COM Port
*/
#define USE_UART4
#define UART4_RX_PIN            PI9
#define UART4_TX_PIN            PA0
/*
#define USE_UART5
#define UART5_RX_PIN            PD2
#define UART5_TX_PIN            PC12
*/
#define USE_UART6
#define UART6_RX_PIN            PG9
#define UART6_TX_PIN            PG14
/*
#define USE_UART7
#define UART7_RX_PIN            PE7
#define UART7_TX_PIN            PE8
*/
#define USE_UART8
#define UART8_RX_PIN            PJ9
#define UART8_TX_PIN            PJ8
/*
#define USE_LPUART1
#define LPUART1_RX_PIN          PB7 // PA10 (Shared with UART1)
#define LPUART1_TX_PIN          PB6 // PA9 (Shared with UART1)
*/

#define USE_VCP

//#define USE_SOFTSERIAL1
//#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       5

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            NONE
#define SPI1_MISO_PIN           NONE
#define SPI1_MOSI_PIN           NONE

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PI1
#define SPI2_MISO_PIN           PC2
#define SPI2_MOSI_PIN           PC3

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PC10 // PC10
#define SPI3_MISO_PIN           PC11 // PC11
#define SPI3_MOSI_PIN           PC12 // PC12

#define USE_SPI_DEVICE_4
#define SPI4_SCK_PIN            NONE
#define SPI4_MISO_PIN           NONE
#define SPI4_MOSI_PIN           NONE

#define USE_SPI_DEVICE_5
#define SPI5_SCK_PIN            NONE
#define SPI5_MISO_PIN           NONE
#define SPI5_MOSI_PIN           NONE

#define USE_SPI_DEVICE_6
#define SPI6_SCK_PIN            NONE
#define SPI6_MISO_PIN           NONE
#define SPI6_MOSI_PIN           NONE

#define USE_QUADSPI
#define USE_QUADSPI_DEVICE_1

#define QUADSPI1_SCK_PIN        NONE // PB2

#define QUADSPI1_BK1_IO0_PIN    NONE // PD11
#define QUADSPI1_BK1_IO1_PIN    NONE // PD12
#define QUADSPI1_BK1_IO2_PIN    NONE // PE2
#define QUADSPI1_BK1_IO3_PIN    NONE // PD13
#define QUADSPI1_BK1_CS_PIN     NONE // PB10

#define QUADSPI1_BK2_IO0_PIN    NONE // PE7
#define QUADSPI1_BK2_IO1_PIN    NONE // PE8
#define QUADSPI1_BK2_IO2_PIN    NONE // PE9
#define QUADSPI1_BK2_IO3_PIN    NONE // PE10
#define QUADSPI1_BK2_CS_PIN     NONE // NONE

#define QUADSPI1_MODE QUADSPI_MODE_BK1_ONLY
#define QUADSPI1_CS_FLAGS (QUADSPI_BK1_CS_HARDWARE | QUADSPI_BK2_CS_NONE | QUADSPI_CS_MODE_LINKED)



// *************** SDIO BLACKBOX*******************

#define USE_SDCARD
#define USE_SDCARD_SDIO
#define SDCARD_DETECT_PIN       NONE
#define SDIO_DEVICE             SDIODEV_1
#define SDIO_USE_4BIT           true
#define SDIO_CK_PIN             PC12
#define SDIO_CMD_PIN            PD2
#define SDIO_D0_PIN             PC8
#define SDIO_D1_PIN             PC9
#define SDIO_D2_PIN             PC10
#define SDIO_D3_PIN             PC11

#define USE_BLACKBOX
#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT


#define USE_I2C

#define USE_I2C_DEVICE_1
#define I2C_DEVICE_1            (I2CDEV_1)
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define MAG_I2C_INSTANCE        (I2CDEV_1)


#define USE_I2C_DEVICE_3
#define I2C_DEVICE_3            (I2CDEV_3)
#define I2C3_SCL                PH7
#define I2C3_SDA                PH8

#define BARO_I2C_INSTANCE       (I2CDEV_2)

#define USE_I2C_DEVICE_4
#define I2C4_SCL                PH11
#define I2C4_SDA                PH12
#define I2C_DEVICE_4 (I2CDEV_4)


#define USE_FLASH_CHIP
#define USE_FLASH_M25P16
#define USE_FLASH_W25M
#define USE_FLASH_W25Q128FV
#define USE_FLASH_W25N01G
#define FLASH_SPI_INSTANCE      NULL
#define FLASH_CS_PIN            NONE
#define USE_FLASHFS

#define USE_BRUSHED_ESC_AUTODETECT  // Detect if brushed motors are connected and set defaults appropriately to avoid motors spinning on boot
#define USE_GYRO_REGISTER_DUMP  // Adds gyroregisters command to cli to dump configured register values
#define USE_TIMER
#define USE_PWM_OUTPUT
#define USE_MOTOR
/*
#define USE_RANGEFINDER
#define USE_RANGEFINDER_HCSR04
#define USE_RANGEFINDER_TF

#define USE_TRANSPONDER

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    NULL // SPI3
#define MAX7456_SPI_CS_PIN      NONE // PC9

#define USE_I2C_OLED_DISPLAY
*/
#define USE_ADC

// DMA stream assignmnets
#define VBAT_ADC_PIN            PA4  // ADC1
#define CURRENT_METER_ADC_PIN   PA6  // ADC1
//#define RSSI_ADC_PIN            PF14 // ADC2
#define EXTERNAL1_ADC_PIN       PC2  // ADC3

#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC

#define USE_DSHOT
#define USE_DSHOT_DMAR

#define USE_DMA

// Thanks to DMAMUX, H7 does not have limitations on DMA stream assignments to devices (except for collisions among them).
//#define UART1_TX_DMA_OPT        0
//#define UART2_TX_DMA_OPT        1
//#define UART3_TX_DMA_OPT        2
//#define UART4_TX_DMA_OPT        3
//#define UART5_TX_DMA_OPT        4
//#define UART6_TX_DMA_OPT        5
//#define UART7_TX_DMA_OPT        6
//#define UART8_TX_DMA_OPT        7
#define ADC1_DMA_OPT 8
#define ADC2_DMA_OPT 9
#define ADC3_DMA_OPT 10

#define DEFAULT_FEATURE (FEATURE_OSD)

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff
#define TARGET_IO_PORTG 0xffff
#define TARGET_IO_PORTH 0xffff
#define TARGET_IO_PORTI 0xffff
#define TARGET_IO_PORTJ 0xffff
#define TARGET_IO_PORTK 0xffff


#define USABLE_TIMER_CHANNEL_COUNT 4

#define USED_TIMERS  ( TIM_N(1) | TIM_N(8) )
