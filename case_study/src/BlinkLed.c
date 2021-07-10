/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "BlinkLed.h"

// ----------------------------------------------------------------------------
/**
 Orange and Blue*/
void
blink_led_init()
{
  // Enable GPIO Peripheral clock
  RCC->AHB1ENR |= BLINK_RCC_MASKx(BLINK_PORT_NUMBER);

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_12|GPIO_PIN_15; //orange and blue
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
  GPIO_InitStructure.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

  // Start with led turned off
  blink_led_off();
}

/*
 Red and Orange*/
void
blink_led_init_one()
{
  // Enable GPIO Peripheral clock
  RCC->AHB1ENR |= BLINK_RCC_MASKx(BLINK_PORT_NUMBER);

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_13|GPIO_PIN_14;
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
  GPIO_InitStructure.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

  // Start with led turned off
  blink_led_off();
}
/*
 * Orange and Green*/
void
blink_led_init_two()
{
  // Enable GPIO Peripheral clock
  RCC->AHB1ENR |= BLINK_RCC_MASKx(BLINK_PORT_NUMBER);

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_12|GPIO_PIN_13; //orange and green
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
  GPIO_InitStructure.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

  // Start with led turned off
  blink_led_off();
}

/*
 Red and Blue*/
void
blink_led_init_three()
{
  // Enable GPIO Peripheral clock
  RCC->AHB1ENR |= BLINK_RCC_MASKx(BLINK_PORT_NUMBER);

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
  GPIO_InitStructure.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

  // Start with led turned off
  blink_led_off();
}

/*
 * Blue and green*/
void
blink_led_init_four()
{
  // Enable GPIO Peripheral clock
  RCC->AHB1ENR |= BLINK_RCC_MASKx(BLINK_PORT_NUMBER);

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.Pin = GPIO_PIN_15|GPIO_PIN_12;
  GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
  GPIO_InitStructure.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

  // Start with led turned off
  blink_led_off();
}
// ----------------------------------------------------------------------------
