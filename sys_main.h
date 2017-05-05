/*
 * sys_main.h
 *
 *  Created on: May 5, 2017
 *      Author: nhant
 */

#ifndef SYS_MAIN_H_
#define SYS_MAIN_H_

/* USER CODE BEGIN (0) */
#include "sci.h"
#include "gio.h"
#include "FreeRTOS.h"
#include "os_task.h"
#include <led_control.h>
#include <stdio.h>
/* USER CODE END */

/* Include Files */

#include "sys_common.h"

/* USER CODE BEGIN (1) */
unsigned char command;

/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
extern void start_send_task(void);
extern void button_led_init(void);
extern void toggle_led(void);
extern bool get_sw(void);
/* USER CODE END */

int main(void);





#endif /* SYS_MAIN_H_ */
