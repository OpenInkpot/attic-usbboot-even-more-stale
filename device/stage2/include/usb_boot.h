#ifndef __USB_BOOT_H
#define __USB_BOOT_H

#define dprintf(x...) printf(x);

//#define BULK_OUT_BUF_SIZE 0x84000      //buffer size :2M
//#define BULK_IN_BUF_SIZE 0x84000       //2M too
#define BULK_OUT_BUF_SIZE 0x20000      //buffer size :
#define BULK_IN_BUF_SIZE 0x20000       // too

enum UDC_STATE
{
	IDLE,
	BULK_IN,
	BULK_OUT
};

enum USB_JZ4740_REQUEST            //add for USB_BOOT
{
	VR_GET_CUP_INFO = 0,
	VR_SET_DATA_ADDERSS,
	VR_SET_DATA_LENGTH,
	VR_FLUSH_CACHES,
	VR_PROGRAM_START1,
	VR_PROGRAM_START2,
	VR_NOR_OPS,
	VR_NAND_OPS,
	VR_SDRAM_OPS,
	VR_CONFIGRATION
};

enum NOR_OPS_TYPE
{
	NOR_INIT = 0,
	NOR_QUERY,
	NOR_WRITE,
	NOR_ERASE_CHIP,
	NOR_ERASE_SECTOR
};

enum NOR_FLASH_TYPE
{
	NOR_AM29 = 0,
	NOR_SST28,
	NOR_SST39x16,
	NOR_SST39x8
};

enum NAND_OPS_TYPE
{
	NAND_QUERY = 0,
	NAND_INIT,
	NAND_MARK_BAD,
	NAND_READ_OOB,
	NAND_READ_RAW,
	NAND_ERASE,
	NAND_READ,
	NAND_PROGRAM,
	NAND_READ_TO_RAM
};

enum SDRAM_OPS_TYPE
{
	SDRAM_LOAD,

};

enum DATA_STRUCTURE_OB
{
	DS_flash_info ,
	DS_hand
};


/*typedef enum _USB_BOOT_STATUS 
{
	USB_NO_ERR =0 ,
	GET_CPU_INFO_ERR,
	SET_DATA_ADDRESS_ERR,
	SET_DATA_LENGTH_ERR,
	FLUSH_CAHCES_ERR,
	PROGRAM_START1_ERR,
	PROGRAM_START2_ERR,
	NOR_OPS_ERR,
	NAND_OPS_ERR,
	NOR_FLASHTYPE_ERR,
	OPS_NOTSUPPORT_ERR
}USB_BOOT_STATUS;*/

enum OPTION
{
	OOB_ECC,
	OOB_NO_ECC,
	NO_OOB,
};



#endif
