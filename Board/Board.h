#ifndef STM32F4_BOARD
#define STM32F4_BOARD

#define DYNAMIXEL_USART_MODULE          UART4
#define DYNAMIXEL_USART_IRQN            UART4_IRQn
#define DYNAMIXEL_USART_BAUDRATE        1000000
#define DYNAMIXEL_USART_PIN_AF          GPIO_AF_UART4
#define DYNAMIXEL_USART_TX_PIN_PORT     GPIOC
#define DYNAMIXEL_USART_TX_PIN_NUMBER   GPIO_Pin_10
#define DYNAMIXEL_USART_RX_PIN_PORT     GPIOC
#define DYNAMIXEL_USART_RX_PIN_NUMBEК   GPIO_Pin_11

#define DEBUG_USART_MODULE              USART1
#define DEBUG_USART_IRQN                USART1_IRQn
#define DEBUG_USART_BAUDRATE            9600
#define DEBUG_USART_PIN_AF              GPIO_AF_USART1
#define DEBUG_USART_TX_PIN_PORT         GPIOB
#define DEBUG_USART_TX_PIN_NUMBER       GPIO_Pin_6
#define DEBUG_USART_RX_PIN_PORT         GPIOB
#define DEBUG_USART_RX_PIN_NUMBER       GPIO_Pin_7

#define DEBUG_LED_PORT                  GPIOD
#define DEBUG_LED_GREEN_PIN	            GPIO_Pin_12
#define DEBUG_LED_ORANGE_PIN            GPIO_Pin_13
#define DEBUG_LED_RED_PIN               GPIO_Pin_14
#define DEBUG_LED_BLUE_PIN              GPIO_Pin_15

// Initialize all necessary peripheral devices
void boardInitAll(void);

#endif