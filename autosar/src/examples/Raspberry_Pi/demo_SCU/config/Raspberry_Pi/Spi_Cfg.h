/*

*/



#ifndef SPI_CFG_H
#define SPI_CFG_H


#include "Mcu.h"

/*
 * General configuration
 */

// Switches the Spi_Cancel function ON or OFF.
#define SPI_CANCEL_API						STD_ON

// Selects the SPI Handler/Driver Channel Buffers usage allowed and delivered.
// LEVEL 0 - Only Internal buffers
// LEVEL 1 - Only external buffers
// LEVEL 2 - Both internal/external buffers
#define SPI_CHANNEL_BUFFERS_ALLOWED			1

#define SPI_DEV_ERROR_DETECT 				STD_ON
// Switches the Spi_GetHWUnitStatus function ON or OFF.
#define SPI_HW_STATUS_API					STD_ON
// Switches the Interruptible Sequences handling functionality ON or OFF.
#define SPI_INTERRUPTIBLE_SEQ_ALLOWED		STD_OFF

// LEVEL 0 - Simple sync
// LEVEL 1 - Basic async
// LEVEL 2 - Enhanced mode
#define SPI_LEVEL_DELIVERED				2

#define SPI_VERSION_INFO_API			STD_ON

#if 0
#if SPI_LEVEL_DELIVERED>=1
#define SPI_INTERRUPTIBLE_SEQ_ALLOWED	STD_ON
#endif
#endif

// External devices
typedef enum {
	SPI_device_1,
} Spi_ExternalDeviceTypeType;

// Channels
#define	SPI_CH_WREN		0
#define	SPI_CH_CMD		1
#define	SPI_CH_DATA		2
#define	SPI_CH_ADDR		3

// Jobs
#define	SPI_JOB_CMD2			0
#define	SPI_JOB_DATA			1	
#define	SPI_JOB_CMD			    2
#define	SPI_JOB_WREN			3	

// Sequences
#define	SPI_SEQ_CMD		    0
#define	SPI_SEQ_WRITE		1
#define	SPI_SEQ_READ		2
#define	SPI_SEQ_CMD2		3


#define SPI_MAX_JOB				4
#define SPI_MAX_CHANNEL			4
#define SPI_MAX_SEQUENCE		4

#define SPI_USE_HW_UNIT_0   STD_ON
#define SPI_USE_HW_UNIT_1   STD_OFF
#define SPI_USE_HW_UNIT_2   STD_OFF
#define SPI_USE_HW_UNIT_3   STD_OFF


#endif /*SPI_CFG_H*/
