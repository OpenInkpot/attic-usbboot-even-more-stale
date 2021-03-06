#ifndef __NANDLIB_H__
#define __NANDLIB_H__

#ifndef NULL
#define NULL	0
#endif

#define u8	unsigned char
#define u16	unsigned short
#define u32	unsigned int

/*  Jz4740 nandflash interface */
unsigned int nand_query_4740(void);
int nand_init_4740(int bus_width, int row_cycle, int page_size, int page_per_block,
		   int,int,int,int);
int nand_fini_4740(void);
u32 nand_program_4740(void *context, int spage, int pages, int option);
//int nand_program_oob_4740(void *context, int spage, int pages, void (*notify)(int));
u32 nand_erase_4740(int blk_num, int sblk, int force);
u32 nand_read_4740(void *buf, u32 startpage, u32 pagenum,int option);
u32 nand_read_oob_4740(void *buf, u32 startpage, u32 pagenum);
u32 nand_read_raw_4740(void *buf, u32 startpage, u32 pagenum,int);
u32 nand_mark_bad_4740(int bad);

void nand_enable_4740(u32 csn);
void nand_disable_4740(u32 csn);


#endif
