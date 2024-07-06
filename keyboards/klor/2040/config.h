// Copyright 2022 @geigeigeist
// SPDX-License-Identifier: GPL-2.0+
// here you find only RP2040 specific configurations

// ┌─────────────────────────────────────────────────┐
// │ a u d i o                                       │
// └─────────────────────────────────────────────────┘

#define AUDIO_PWM_DRIVER PWMD4
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define AUDIO_STATE_TIMER GPTD4


// ┌─────────────────────────────────────────────────┐
// │ s e r i a l                                     │
// └─────────────────────────────────────────────────┘
#define SOFT_SERIAL_PIN D1
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN D1     // USART TX pin
#define SERIAL_USART_RX_PIN D4     // USART RX pin
#define SERIAL_USART_PIN_SWAP      // Swap TX and RX pins


