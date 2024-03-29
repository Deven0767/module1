/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART1TXSRC_UART_TX 0x00u /*!<@brief UART 1 transmit data source select: UART1_TX pin */

/*! @name PORTE1 (number 2), J15[P7]/SDHC0_D0
  @{ */
#define BOARD_INITPINS_SDHC0_D0_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_SDHC0_D0_PIN 1U     /*!<@brief PORTE pin index: 1 */
                                           /* @} */

/*! @name PORTE0 (number 1), J15[P8]/SDHC0_D1
  @{ */
#define BOARD_INITPINS_SDHC0_D1_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_SDHC0_D1_PIN 0U     /*!<@brief PORTE pin index: 0 */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
