/*
 * Copyright 2009-2011 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

/*
 * P5040 DS board configuration file
 *
 */
#define CONFIG_P5040DS
#define CONFIG_PPC_P5040

#define CONFIG_FSL_NGPIXIS		/* use common ngPIXIS code */

#define CONFIG_MMC
#define CONFIG_NAND_FSL_ELBC
#define CONFIG_PCIE3
#define CONFIG_FSL_SATA_V2
#define CONFIG_SYS_FSL_RAID_ENGINE

#define CONFIG_ICS307_REFCLK_HZ		25000000  /* ICS307 ref clk freq */

#include "corenet_ds.h"
