/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef CONFIG_BOARD_FRDM_K64F
#define DT_WNCM14A2A_UART_DRV_NAME                  DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_BUS_NAME
#define DT_WNCM14A2A_GPIO_MDM_BOOT_MODE_SEL_NAME    DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_BOOT_MODE_SEL_GPIOS_CONTROLLER
#define DT_WNCM14A2A_GPIO_MDM_BOOT_MODE_SEL_PIN     DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_BOOT_MODE_SEL_GPIOS_PIN
#define DT_WNCM14A2A_GPIO_MDM_POWER_NAME            DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_POWER_GPIOS_CONTROLLER
#define DT_WNCM14A2A_GPIO_MDM_POWER_PIN             DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_POWER_GPIOS_PIN
#define DT_WNCM14A2A_GPIO_MDM_KEEP_AWAKE_NAME       DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_KEEP_AWAKE_GPIOS_CONTROLLER
#define DT_WNCM14A2A_GPIO_MDM_KEEP_AWAKE_PIN        DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_KEEP_AWAKE_GPIOS_PIN
#define DT_WNCM14A2A_GPIO_MDM_RESET_NAME            DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_RESET_GPIOS_CONTROLLER
#define DT_WNCM14A2A_GPIO_MDM_RESET_PIN             DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_RESET_GPIOS_PIN
#define DT_WNCM14A2A_GPIO_MDM_SHLD_TRANS_ENA_NAME   DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_SHLD_TRANS_ENA_GPIOS_CONTROLLER
#define DT_WNCM14A2A_GPIO_MDM_SHLD_TRANS_ENA_PIN    DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_SHLD_TRANS_ENA_GPIOS_PIN
#ifdef DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_SEND_OK_GPIOS_PIN
#define DT_WNCM14A2A_GPIO_MDM_SEND_OK_NAME          DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_SEND_OK_GPIOS_CONTROLLER
#define DT_WNCM14A2A_GPIO_MDM_SEND_OK_PIN           DT_NXP_KINETIS_UART_4006C000_WNCM14A2A_MDM_SEND_OK_GPIOS_PIN
#endif
#endif