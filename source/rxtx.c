/*
 * rxtx.c
 *
 *  Created on: May 1, 2017
 *      Author: nhant
 */

#include "FreeRTOS.h"
#include "os_portmacro.h"
#include "os_task.h"

#define RX_TASK_PRIORITY       (tskIDLE_PRIORITY + 1)
#define RX_TASK_STACK_SIZE     (1024 / sizeof(int))
#define RX_RATE_MS             500UL

static void send_data(void *pvParameters);

void start_send_task(void)
{
    xTaskCreate(send_data, "TX", RX_TASK_STACK_SIZE, NULL, RX_TASK_PRIORITY, NULL);
}


/* A FreeRTOS task to toggle the LEDs in sequence.
 */
static void send_data(void *pvParameters)
{


    const TickType_t rate_ticks = RX_RATE_MS / portTICK_PERIOD_MS;
    TickType_t last_flash_time = xTaskGetTickCount();

    for (;;)
    {
        vTaskDelayUntil(&last_flash_time, rate_ticks);


    }
}
