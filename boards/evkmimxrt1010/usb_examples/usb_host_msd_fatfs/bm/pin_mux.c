/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v5.0
processor: MIMXRT1011xxxxx
package_id: MIMXRT1011DAE5A
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_GPIO.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '3', peripheral: LPUART1, signal: RX, pin_signal: GPIO_09, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '2', peripheral: LPUART1, signal: TX, pin_signal: GPIO_10, software_input_on: Disable, open_drain: Disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 is configured as LPUART1_RXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 is configured as LPUART1_TXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
}


void BOARD_InitPins_Audio(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 is configured as LPUART1_RXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 is configured as LPUART1_TXD */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_09_LPUART1_RXD,             /* GPIO_09 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_10_LPUART1_TXD,             /* GPIO_10 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  
    IOMUXC_SetPinMux(
      IOMUXC_GPIO_02_LPI2C1_SCL,        /* GPIO_AD_B1_14 is configured as LPI2C1_SCL */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_AD_B1_14 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_01_LPI2C1_SDA,        /* GPIO_AD_B1_15 is configured as LPI2C1_SDA */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_AD_B1_15 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_08_SAI1_MCLK,           /* GPIO_EMC_20 is configured as SAI1_MCLK */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_EMC_20 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_03_SAI1_RX_DATA00,      /* GPIO_EMC_21 is configured as SAI1_RX_DATA00 */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_EMC_21 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_04_SAI1_TX_DATA00,      /* GPIO_EMC_25 is configured as SAI1_TX_DATA00 */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_EMC_25 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_06_SAI1_TX_BCLK,        /* GPIO_EMC_26 is configured as SAI1_TX_BCLK */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_EMC_26 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_07_SAI1_TX_SYNC,        /* GPIO_EMC_27 is configured as SAI1_TX_SYNC */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_EMC_27 */


  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_02_LPI2C1_SCL,        /* GPIO_AD_B1_14 PAD functional properties : */
      0xD8B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Enabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 22K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_01_LPI2C1_SDA,        /* GPIO_AD_B1_15 PAD functional properties : */
      0xD8B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Enabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 22K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_08_SAI1_MCLK,           /* GPIO_EMC_20 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_03_SAI1_RX_DATA00,      /* GPIO_EMC_21 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_04_SAI1_TX_DATA00,      /* GPIO_EMC_25 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_06_SAI1_TX_BCLK,        /* GPIO_EMC_26 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_07_SAI1_TX_SYNC,        /* GPIO_EMC_27 PAD functional properties : */
      0x10B0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */

  
  #if 1
  
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_11_GPIOMUX_IO11,          /* GPIO_EMC_22 is configured as GPIO2_IO22 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_11_GPIOMUX_IO11,            /* GPIO_11 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  
  /* GPIO configuration of LCD_DC_GPIO_PIN on GPIO_EMC_22 (pin 93) */
  gpio_pin_config_t LCD_DC_GPIO_PIN_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_NoIntmode
  };    
  /* Initialize GPIO functionality on GPIO_EMC_22 (pin 93) */
  GPIO_PinInit(GPIO1, 0x11U, &LCD_DC_GPIO_PIN_config);

#endif
  
}

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPI2C1_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPI2C1_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */


  IOMUXC_SetPinMux(
      IOMUXC_GPIO_01_LPI2C1_SDA,              /* GPIO_01 is configured as LPI2C1_SDA */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_01 */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_02_LPI2C1_SCL,              /* GPIO_02 is configured as LPI2C1_SCL */
      1U);                                    /* Software Input On Field: Force input path of pad GPIO_02 */  
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_01_LPI2C1_SDA,              /* GPIO_01 PAD functional properties : */
      0xD8A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Enabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 22K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_02_LPI2C1_SCL,              /* GPIO_02 PAD functional properties : */
      0xD8A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Enabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 22K Ohm Pull Up
                                                 Hyst. Enable Field: Hysteresis Disabled */}

void LPI2C1_DeinitPins(void)
{
#if 0
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_14_GPIO1_IO30,        /* GPIO_AD_B1_14 is configured as GPIO1_IO30 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_15_GPIO1_IO31,        /* GPIO_AD_B1_15 is configured as GPIO1_IO31 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
#endif
}

void LPSPI1_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03U */

  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_03_LPSPI1_SDI,           /* GPIO_AD_03 is configured as LPSPI1_SDI */
      1U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_04_LPSPI1_SDO,           /* GPIO_AD_04 is configured as LPSPI1_SDO */
      1U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_05_LPSPI1_PCS0,          /* GPIO_AD_05 is configured as LPSPI1_PCS0 */
      1U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_06_LPSPI1_SCK,           /* GPIO_AD_06 is configured as LPSPI1_SCK */
      1U);                                    /* Software Input On Field: Input Path is determined by functionality */

  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_03_LPSPI1_SDI,           /* GPIO_AD_03 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_04_LPSPI1_SDO,           /* GPIO_AD_04 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_05_LPSPI1_PCS0,          /* GPIO_AD_05 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */
  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_06_LPSPI1_SCK,           /* GPIO_AD_06 PAD functional properties : */
      0x10A0U);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/4
                                                 Speed Field: fast(150MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */}

void LPSPI1_DeinitPins(void)
{
#if 1
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_03_GPIOMUX_IO17,        /* GPIO_AD_B0_10 is configured as GPIO1_IO10 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_04_GPIOMUX_IO18,        /* GPIO_AD_B0_11 is configured as GPIO1_IO11 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_05_GPIOMUX_IO19,        /* GPIO_AD_B0_12 is configured as GPIO1_IO12 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_06_GPIOMUX_IO20,        /* GPIO_AD_B0_13 is configured as GPIO1_IO13 */
      0U);                                    /* Software Input On Field: Input Path is determined by functionality */
#endif
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
