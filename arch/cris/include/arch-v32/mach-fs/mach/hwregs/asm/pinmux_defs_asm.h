#ifndef __pinmux_defs_asm_h
#define __pinmux_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/pinmux/rtl/guinness/pinmux_regs.r
 *     id:           pinmux_regs.r,v 1.40 2005/02/09 16:22:59 perz Exp 
 *     last modfied: Mon Apr 11 16:09:11 2005
 * 
 *   by /n/asic/design/tools/rdesc/src/rdes2c -asm --outfile asm/pinmux_defs_asm.h ../../inst/pinmux/rtl/guinness/pinmux_regs.r
 *      id: $Id: pinmux_defs_asm.h,v 1.1 2011/07/05 20:23:17 ian Exp $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
  REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
  REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
  REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
         REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
                          ((inst) + offs + (index) * stride)
#endif

/* Register rw_pa, scope pinmux, type rw */
#define reg_pinmux_rw_pa___pa0___lsb 0
#define reg_pinmux_rw_pa___pa0___width 1
#define reg_pinmux_rw_pa___pa0___bit 0
#define reg_pinmux_rw_pa___pa1___lsb 1
#define reg_pinmux_rw_pa___pa1___width 1
#define reg_pinmux_rw_pa___pa1___bit 1
#define reg_pinmux_rw_pa___pa2___lsb 2
#define reg_pinmux_rw_pa___pa2___width 1
#define reg_pinmux_rw_pa___pa2___bit 2
#define reg_pinmux_rw_pa___pa3___lsb 3
#define reg_pinmux_rw_pa___pa3___width 1
#define reg_pinmux_rw_pa___pa3___bit 3
#define reg_pinmux_rw_pa___pa4___lsb 4
#define reg_pinmux_rw_pa___pa4___width 1
#define reg_pinmux_rw_pa___pa4___bit 4
#define reg_pinmux_rw_pa___pa5___lsb 5
#define reg_pinmux_rw_pa___pa5___width 1
#define reg_pinmux_rw_pa___pa5___bit 5
#define reg_pinmux_rw_pa___pa6___lsb 6
#define reg_pinmux_rw_pa___pa6___width 1
#define reg_pinmux_rw_pa___pa6___bit 6
#define reg_pinmux_rw_pa___pa7___lsb 7
#define reg_pinmux_rw_pa___pa7___width 1
#define reg_pinmux_rw_pa___pa7___bit 7
#define reg_pinmux_rw_pa___csp2_n___lsb 8
#define reg_pinmux_rw_pa___csp2_n___width 1
#define reg_pinmux_rw_pa___csp2_n___bit 8
#define reg_pinmux_rw_pa___csp3_n___lsb 9
#define reg_pinmux_rw_pa___csp3_n___width 1
#define reg_pinmux_rw_pa___csp3_n___bit 9
#define reg_pinmux_rw_pa___csp5_n___lsb 10
#define reg_pinmux_rw_pa___csp5_n___width 1
#define reg_pinmux_rw_pa___csp5_n___bit 10
#define reg_pinmux_rw_pa___csp6_n___lsb 11
#define reg_pinmux_rw_pa___csp6_n___width 1
#define reg_pinmux_rw_pa___csp6_n___bit 11
#define reg_pinmux_rw_pa___hsh4___lsb 12
#define reg_pinmux_rw_pa___hsh4___width 1
#define reg_pinmux_rw_pa___hsh4___bit 12
#define reg_pinmux_rw_pa___hsh5___lsb 13
#define reg_pinmux_rw_pa___hsh5___width 1
#define reg_pinmux_rw_pa___hsh5___bit 13
#define reg_pinmux_rw_pa___hsh6___lsb 14
#define reg_pinmux_rw_pa___hsh6___width 1
#define reg_pinmux_rw_pa___hsh6___bit 14
#define reg_pinmux_rw_pa___hsh7___lsb 15
#define reg_pinmux_rw_pa___hsh7___width 1
#define reg_pinmux_rw_pa___hsh7___bit 15
#define reg_pinmux_rw_pa_offset 0

/* Register rw_hwprot, scope pinmux, type rw */
#define reg_pinmux_rw_hwprot___ser1___lsb 0
#define reg_pinmux_rw_hwprot___ser1___width 1
#define reg_pinmux_rw_hwprot___ser1___bit 0
#define reg_pinmux_rw_hwprot___ser2___lsb 1
#define reg_pinmux_rw_hwprot___ser2___width 1
#define reg_pinmux_rw_hwprot___ser2___bit 1
#define reg_pinmux_rw_hwprot___ser3___lsb 2
#define reg_pinmux_rw_hwprot___ser3___width 1
#define reg_pinmux_rw_hwprot___ser3___bit 2
#define reg_pinmux_rw_hwprot___sser0___lsb 3
#define reg_pinmux_rw_hwprot___sser0___width 1
#define reg_pinmux_rw_hwprot___sser0___bit 3
#define reg_pinmux_rw_hwprot___sser1___lsb 4
#define reg_pinmux_rw_hwprot___sser1___width 1
#define reg_pinmux_rw_hwprot___sser1___bit 4
#define reg_pinmux_rw_hwprot___ata0___lsb 5
#define reg_pinmux_rw_hwprot___ata0___width 1
#define reg_pinmux_rw_hwprot___ata0___bit 5
#define reg_pinmux_rw_hwprot___ata1___lsb 6
#define reg_pinmux_rw_hwprot___ata1___width 1
#define reg_pinmux_rw_hwprot___ata1___bit 6
#define reg_pinmux_rw_hwprot___ata2___lsb 7
#define reg_pinmux_rw_hwprot___ata2___width 1
#define reg_pinmux_rw_hwprot___ata2___bit 7
#define reg_pinmux_rw_hwprot___ata3___lsb 8
#define reg_pinmux_rw_hwprot___ata3___width 1
#define reg_pinmux_rw_hwprot___ata3___bit 8
#define reg_pinmux_rw_hwprot___ata___lsb 9
#define reg_pinmux_rw_hwprot___ata___width 1
#define reg_pinmux_rw_hwprot___ata___bit 9
#define reg_pinmux_rw_hwprot___eth1___lsb 10
#define reg_pinmux_rw_hwprot___eth1___width 1
#define reg_pinmux_rw_hwprot___eth1___bit 10
#define reg_pinmux_rw_hwprot___eth1_mgm___lsb 11
#define reg_pinmux_rw_hwprot___eth1_mgm___width 1
#define reg_pinmux_rw_hwprot___eth1_mgm___bit 11
#define reg_pinmux_rw_hwprot___timer___lsb 12
#define reg_pinmux_rw_hwprot___timer___width 1
#define reg_pinmux_rw_hwprot___timer___bit 12
#define reg_pinmux_rw_hwprot___p21___lsb 13
#define reg_pinmux_rw_hwprot___p21___width 1
#define reg_pinmux_rw_hwprot___p21___bit 13
#define reg_pinmux_rw_hwprot_offset 4

/* Register rw_pb_gio, scope pinmux, type rw */
#define reg_pinmux_rw_pb_gio___pb0___lsb 0
#define reg_pinmux_rw_pb_gio___pb0___width 1
#define reg_pinmux_rw_pb_gio___pb0___bit 0
#define reg_pinmux_rw_pb_gio___pb1___lsb 1
#define reg_pinmux_rw_pb_gio___pb1___width 1
#define reg_pinmux_rw_pb_gio___pb1___bit 1
#define reg_pinmux_rw_pb_gio___pb2___lsb 2
#define reg_pinmux_rw_pb_gio___pb2___width 1
#define reg_pinmux_rw_pb_gio___pb2___bit 2
#define reg_pinmux_rw_pb_gio___pb3___lsb 3
#define reg_pinmux_rw_pb_gio___pb3___width 1
#define reg_pinmux_rw_pb_gio___pb3___bit 3
#define reg_pinmux_rw_pb_gio___pb4___lsb 4
#define reg_pinmux_rw_pb_gio___pb4___width 1
#define reg_pinmux_rw_pb_gio___pb4___bit 4
#define reg_pinmux_rw_pb_gio___pb5___lsb 5
#define reg_pinmux_rw_pb_gio___pb5___width 1
#define reg_pinmux_rw_pb_gio___pb5___bit 5
#define reg_pinmux_rw_pb_gio___pb6___lsb 6
#define reg_pinmux_rw_pb_gio___pb6___width 1
#define reg_pinmux_rw_pb_gio___pb6___bit 6
#define reg_pinmux_rw_pb_gio___pb7___lsb 7
#define reg_pinmux_rw_pb_gio___pb7___width 1
#define reg_pinmux_rw_pb_gio___pb7___bit 7
#define reg_pinmux_rw_pb_gio___pb8___lsb 8
#define reg_pinmux_rw_pb_gio___pb8___width 1
#define reg_pinmux_rw_pb_gio___pb8___bit 8
#define reg_pinmux_rw_pb_gio___pb9___lsb 9
#define reg_pinmux_rw_pb_gio___pb9___width 1
#define reg_pinmux_rw_pb_gio___pb9___bit 9
#define reg_pinmux_rw_pb_gio___pb10___lsb 10
#define reg_pinmux_rw_pb_gio___pb10___width 1
#define reg_pinmux_rw_pb_gio___pb10___bit 10
#define reg_pinmux_rw_pb_gio___pb11___lsb 11
#define reg_pinmux_rw_pb_gio___pb11___width 1
#define reg_pinmux_rw_pb_gio___pb11___bit 11
#define reg_pinmux_rw_pb_gio___pb12___lsb 12
#define reg_pinmux_rw_pb_gio___pb12___width 1
#define reg_pinmux_rw_pb_gio___pb12___bit 12
#define reg_pinmux_rw_pb_gio___pb13___lsb 13
#define reg_pinmux_rw_pb_gio___pb13___width 1
#define reg_pinmux_rw_pb_gio___pb13___bit 13
#define reg_pinmux_rw_pb_gio___pb14___lsb 14
#define reg_pinmux_rw_pb_gio___pb14___width 1
#define reg_pinmux_rw_pb_gio___pb14___bit 14
#define reg_pinmux_rw_pb_gio___pb15___lsb 15
#define reg_pinmux_rw_pb_gio___pb15___width 1
#define reg_pinmux_rw_pb_gio___pb15___bit 15
#define reg_pinmux_rw_pb_gio___pb16___lsb 16
#define reg_pinmux_rw_pb_gio___pb16___width 1
#define reg_pinmux_rw_pb_gio___pb16___bit 16
#define reg_pinmux_rw_pb_gio___pb17___lsb 17
#define reg_pinmux_rw_pb_gio___pb17___width 1
#define reg_pinmux_rw_pb_gio___pb17___bit 17
#define reg_pinmux_rw_pb_gio_offset 8

/* Register rw_pb_iop, scope pinmux, type rw */
#define reg_pinmux_rw_pb_iop___pb0___lsb 0
#define reg_pinmux_rw_pb_iop___pb0___width 1
#define reg_pinmux_rw_pb_iop___pb0___bit 0
#define reg_pinmux_rw_pb_iop___pb1___lsb 1
#define reg_pinmux_rw_pb_iop___pb1___width 1
#define reg_pinmux_rw_pb_iop___pb1___bit 1
#define reg_pinmux_rw_pb_iop___pb2___lsb 2
#define reg_pinmux_rw_pb_iop___pb2___width 1
#define reg_pinmux_rw_pb_iop___pb2___bit 2
#define reg_pinmux_rw_pb_iop___pb3___lsb 3
#define reg_pinmux_rw_pb_iop___pb3___width 1
#define reg_pinmux_rw_pb_iop___pb3___bit 3
#define reg_pinmux_rw_pb_iop___pb4___lsb 4
#define reg_pinmux_rw_pb_iop___pb4___width 1
#define reg_pinmux_rw_pb_iop___pb4___bit 4
#define reg_pinmux_rw_pb_iop___pb5___lsb 5
#define reg_pinmux_rw_pb_iop___pb5___width 1
#define reg_pinmux_rw_pb_iop___pb5___bit 5
#define reg_pinmux_rw_pb_iop___pb6___lsb 6
#define reg_pinmux_rw_pb_iop___pb6___width 1
#define reg_pinmux_rw_pb_iop___pb6___bit 6
#define reg_pinmux_rw_pb_iop___pb7___lsb 7
#define reg_pinmux_rw_pb_iop___pb7___width 1
#define reg_pinmux_rw_pb_iop___pb7___bit 7
#define reg_pinmux_rw_pb_iop___pb8___lsb 8
#define reg_pinmux_rw_pb_iop___pb8___width 1
#define reg_pinmux_rw_pb_iop___pb8___bit 8
#define reg_pinmux_rw_pb_iop___pb9___lsb 9
#define reg_pinmux_rw_pb_iop___pb9___width 1
#define reg_pinmux_rw_pb_iop___pb9___bit 9
#define reg_pinmux_rw_pb_iop___pb10___lsb 10
#define reg_pinmux_rw_pb_iop___pb10___width 1
#define reg_pinmux_rw_pb_iop___pb10___bit 10
#define reg_pinmux_rw_pb_iop___pb11___lsb 11
#define reg_pinmux_rw_pb_iop___pb11___width 1
#define reg_pinmux_rw_pb_iop___pb11___bit 11
#define reg_pinmux_rw_pb_iop___pb12___lsb 12
#define reg_pinmux_rw_pb_iop___pb12___width 1
#define reg_pinmux_rw_pb_iop___pb12___bit 12
#define reg_pinmux_rw_pb_iop___pb13___lsb 13
#define reg_pinmux_rw_pb_iop___pb13___width 1
#define reg_pinmux_rw_pb_iop___pb13___bit 13
#define reg_pinmux_rw_pb_iop___pb14___lsb 14
#define reg_pinmux_rw_pb_iop___pb14___width 1
#define reg_pinmux_rw_pb_iop___pb14___bit 14
#define reg_pinmux_rw_pb_iop___pb15___lsb 15
#define reg_pinmux_rw_pb_iop___pb15___width 1
#define reg_pinmux_rw_pb_iop___pb15___bit 15
#define reg_pinmux_rw_pb_iop___pb16___lsb 16
#define reg_pinmux_rw_pb_iop___pb16___width 1
#define reg_pinmux_rw_pb_iop___pb16___bit 16
#define reg_pinmux_rw_pb_iop___pb17___lsb 17
#define reg_pinmux_rw_pb_iop___pb17___width 1
#define reg_pinmux_rw_pb_iop___pb17___bit 17
#define reg_pinmux_rw_pb_iop_offset 12

/* Register rw_pc_gio, scope pinmux, type rw */
#define reg_pinmux_rw_pc_gio___pc0___lsb 0
#define reg_pinmux_rw_pc_gio___pc0___width 1
#define reg_pinmux_rw_pc_gio___pc0___bit 0
#define reg_pinmux_rw_pc_gio___pc1___lsb 1
#define reg_pinmux_rw_pc_gio___pc1___width 1
#define reg_pinmux_rw_pc_gio___pc1___bit 1
#define reg_pinmux_rw_pc_gio___pc2___lsb 2
#define reg_pinmux_rw_pc_gio___pc2___width 1
#define reg_pinmux_rw_pc_gio___pc2___bit 2
#define reg_pinmux_rw_pc_gio___pc3___lsb 3
#define reg_pinmux_rw_pc_gio___pc3___width 1
#define reg_pinmux_rw_pc_gio___pc3___bit 3
#define reg_pinmux_rw_pc_gio___pc4___lsb 4
#define reg_pinmux_rw_pc_gio___pc4___width 1
#define reg_pinmux_rw_pc_gio___pc4___bit 4
#define reg_pinmux_rw_pc_gio___pc5___lsb 5
#define reg_pinmux_rw_pc_gio___pc5___width 1
#define reg_pinmux_rw_pc_gio___pc5___bit 5
#define reg_pinmux_rw_pc_gio___pc6___lsb 6
#define reg_pinmux_rw_pc_gio___pc6___width 1
#define reg_pinmux_rw_pc_gio___pc6___bit 6
#define reg_pinmux_rw_pc_gio___pc7___lsb 7
#define reg_pinmux_rw_pc_gio___pc7___width 1
#define reg_pinmux_rw_pc_gio___pc7___bit 7
#define reg_pinmux_rw_pc_gio___pc8___lsb 8
#define reg_pinmux_rw_pc_gio___pc8___width 1
#define reg_pinmux_rw_pc_gio___pc8___bit 8
#define reg_pinmux_rw_pc_gio___pc9___lsb 9
#define reg_pinmux_rw_pc_gio___pc9___width 1
#define reg_pinmux_rw_pc_gio___pc9___bit 9
#define reg_pinmux_rw_pc_gio___pc10___lsb 10
#define reg_pinmux_rw_pc_gio___pc10___width 1
#define reg_pinmux_rw_pc_gio___pc10___bit 10
#define reg_pinmux_rw_pc_gio___pc11___lsb 11
#define reg_pinmux_rw_pc_gio___pc11___width 1
#define reg_pinmux_rw_pc_gio___pc11___bit 11
#define reg_pinmux_rw_pc_gio___pc12___lsb 12
#define reg_pinmux_rw_pc_gio___pc12___width 1
#define reg_pinmux_rw_pc_gio___pc12___bit 12
#define reg_pinmux_rw_pc_gio___pc13___lsb 13
#define reg_pinmux_rw_pc_gio___pc13___width 1
#define reg_pinmux_rw_pc_gio___pc13___bit 13
#define reg_pinmux_rw_pc_gio___pc14___lsb 14
#define reg_pinmux_rw_pc_gio___pc14___width 1
#define reg_pinmux_rw_pc_gio___pc14___bit 14
#define reg_pinmux_rw_pc_gio___pc15___lsb 15
#define reg_pinmux_rw_pc_gio___pc15___width 1
#define reg_pinmux_rw_pc_gio___pc15___bit 15
#define reg_pinmux_rw_pc_gio___pc16___lsb 16
#define reg_pinmux_rw_pc_gio___pc16___width 1
#define reg_pinmux_rw_pc_gio___pc16___bit 16
#define reg_pinmux_rw_pc_gio___pc17___lsb 17
#define reg_pinmux_rw_pc_gio___pc17___width 1
#define reg_pinmux_rw_pc_gio___pc17___bit 17
#define reg_pinmux_rw_pc_gio_offset 16

/* Register rw_pc_iop, scope pinmux, type rw */
#define reg_pinmux_rw_pc_iop___pc0___lsb 0
#define reg_pinmux_rw_pc_iop___pc0___width 1
#define reg_pinmux_rw_pc_iop___pc0___bit 0
#define reg_pinmux_rw_pc_iop___pc1___lsb 1
#define reg_pinmux_rw_pc_iop___pc1___width 1
#define reg_pinmux_rw_pc_iop___pc1___bit 1
#define reg_pinmux_rw_pc_iop___pc2___lsb 2
#define reg_pinmux_rw_pc_iop___pc2___width 1
#define reg_pinmux_rw_pc_iop___pc2___bit 2
#define reg_pinmux_rw_pc_iop___pc3___lsb 3
#define reg_pinmux_rw_pc_iop___pc3___width 1
#define reg_pinmux_rw_pc_iop___pc3___bit 3
#define reg_pinmux_rw_pc_iop___pc4___lsb 4
#define reg_pinmux_rw_pc_iop___pc4___width 1
#define reg_pinmux_rw_pc_iop___pc4___bit 4
#define reg_pinmux_rw_pc_iop___pc5___lsb 5
#define reg_pinmux_rw_pc_iop___pc5___width 1
#define reg_pinmux_rw_pc_iop___pc5___bit 5
#define reg_pinmux_rw_pc_iop___pc6___lsb 6
#define reg_pinmux_rw_pc_iop___pc6___width 1
#define reg_pinmux_rw_pc_iop___pc6___bit 6
#define reg_pinmux_rw_pc_iop___pc7___lsb 7
#define reg_pinmux_rw_pc_iop___pc7___width 1
#define reg_pinmux_rw_pc_iop___pc7___bit 7
#define reg_pinmux_rw_pc_iop___pc8___lsb 8
#define reg_pinmux_rw_pc_iop___pc8___width 1
#define reg_pinmux_rw_pc_iop___pc8___bit 8
#define reg_pinmux_rw_pc_iop___pc9___lsb 9
#define reg_pinmux_rw_pc_iop___pc9___width 1
#define reg_pinmux_rw_pc_iop___pc9___bit 9
#define reg_pinmux_rw_pc_iop___pc10___lsb 10
#define reg_pinmux_rw_pc_iop___pc10___width 1
#define reg_pinmux_rw_pc_iop___pc10___bit 10
#define reg_pinmux_rw_pc_iop___pc11___lsb 11
#define reg_pinmux_rw_pc_iop___pc11___width 1
#define reg_pinmux_rw_pc_iop___pc11___bit 11
#define reg_pinmux_rw_pc_iop___pc12___lsb 12
#define reg_pinmux_rw_pc_iop___pc12___width 1
#define reg_pinmux_rw_pc_iop___pc12___bit 12
#define reg_pinmux_rw_pc_iop___pc13___lsb 13
#define reg_pinmux_rw_pc_iop___pc13___width 1
#define reg_pinmux_rw_pc_iop___pc13___bit 13
#define reg_pinmux_rw_pc_iop___pc14___lsb 14
#define reg_pinmux_rw_pc_iop___pc14___width 1
#define reg_pinmux_rw_pc_iop___pc14___bit 14
#define reg_pinmux_rw_pc_iop___pc15___lsb 15
#define reg_pinmux_rw_pc_iop___pc15___width 1
#define reg_pinmux_rw_pc_iop___pc15___bit 15
#define reg_pinmux_rw_pc_iop___pc16___lsb 16
#define reg_pinmux_rw_pc_iop___pc16___width 1
#define reg_pinmux_rw_pc_iop___pc16___bit 16
#define reg_pinmux_rw_pc_iop___pc17___lsb 17
#define reg_pinmux_rw_pc_iop___pc17___width 1
#define reg_pinmux_rw_pc_iop___pc17___bit 17
#define reg_pinmux_rw_pc_iop_offset 20

/* Register rw_pd_gio, scope pinmux, type rw */
#define reg_pinmux_rw_pd_gio___pd0___lsb 0
#define reg_pinmux_rw_pd_gio___pd0___width 1
#define reg_pinmux_rw_pd_gio___pd0___bit 0
#define reg_pinmux_rw_pd_gio___pd1___lsb 1
#define reg_pinmux_rw_pd_gio___pd1___width 1
#define reg_pinmux_rw_pd_gio___pd1___bit 1
#define reg_pinmux_rw_pd_gio___pd2___lsb 2
#define reg_pinmux_rw_pd_gio___pd2___width 1
#define reg_pinmux_rw_pd_gio___pd2___bit 2
#define reg_pinmux_rw_pd_gio___pd3___lsb 3
#define reg_pinmux_rw_pd_gio___pd3___width 1
#define reg_pinmux_rw_pd_gio___pd3___bit 3
#define reg_pinmux_rw_pd_gio___pd4___lsb 4
#define reg_pinmux_rw_pd_gio___pd4___width 1
#define reg_pinmux_rw_pd_gio___pd4___bit 4
#define reg_pinmux_rw_pd_gio___pd5___lsb 5
#define reg_pinmux_rw_pd_gio___pd5___width 1
#define reg_pinmux_rw_pd_gio___pd5___bit 5
#define reg_pinmux_rw_pd_gio___pd6___lsb 6
#define reg_pinmux_rw_pd_gio___pd6___width 1
#define reg_pinmux_rw_pd_gio___pd6___bit 6
#define reg_pinmux_rw_pd_gio___pd7___lsb 7
#define reg_pinmux_rw_pd_gio___pd7___width 1
#define reg_pinmux_rw_pd_gio___pd7___bit 7
#define reg_pinmux_rw_pd_gio___pd8___lsb 8
#define reg_pinmux_rw_pd_gio___pd8___width 1
#define reg_pinmux_rw_pd_gio___pd8___bit 8
#define reg_pinmux_rw_pd_gio___pd9___lsb 9
#define reg_pinmux_rw_pd_gio___pd9___width 1
#define reg_pinmux_rw_pd_gio___pd9___bit 9
#define reg_pinmux_rw_pd_gio___pd10___lsb 10
#define reg_pinmux_rw_pd_gio___pd10___width 1
#define reg_pinmux_rw_pd_gio___pd10___bit 10
#define reg_pinmux_rw_pd_gio___pd11___lsb 11
#define reg_pinmux_rw_pd_gio___pd11___width 1
#define reg_pinmux_rw_pd_gio___pd11___bit 11
#define reg_pinmux_rw_pd_gio___pd12___lsb 12
#define reg_pinmux_rw_pd_gio___pd12___width 1
#define reg_pinmux_rw_pd_gio___pd12___bit 12
#define reg_pinmux_rw_pd_gio___pd13___lsb 13
#define reg_pinmux_rw_pd_gio___pd13___width 1
#define reg_pinmux_rw_pd_gio___pd13___bit 13
#define reg_pinmux_rw_pd_gio___pd14___lsb 14
#define reg_pinmux_rw_pd_gio___pd14___width 1
#define reg_pinmux_rw_pd_gio___pd14___bit 14
#define reg_pinmux_rw_pd_gio___pd15___lsb 15
#define reg_pinmux_rw_pd_gio___pd15___width 1
#define reg_pinmux_rw_pd_gio___pd15___bit 15
#define reg_pinmux_rw_pd_gio___pd16___lsb 16
#define reg_pinmux_rw_pd_gio___pd16___width 1
#define reg_pinmux_rw_pd_gio___pd16___bit 16
#define reg_pinmux_rw_pd_gio___pd17___lsb 17
#define reg_pinmux_rw_pd_gio___pd17___width 1
#define reg_pinmux_rw_pd_gio___pd17___bit 17
#define reg_pinmux_rw_pd_gio_offset 24

/* Register rw_pd_iop, scope pinmux, type rw */
#define reg_pinmux_rw_pd_iop___pd0___lsb 0
#define reg_pinmux_rw_pd_iop___pd0___width 1
#define reg_pinmux_rw_pd_iop___pd0___bit 0
#define reg_pinmux_rw_pd_iop___pd1___lsb 1
#define reg_pinmux_rw_pd_iop___pd1___width 1
#define reg_pinmux_rw_pd_iop___pd1___bit 1
#define reg_pinmux_rw_pd_iop___pd2___lsb 2
#define reg_pinmux_rw_pd_iop___pd2___width 1
#define reg_pinmux_rw_pd_iop___pd2___bit 2
#define reg_pinmux_rw_pd_iop___pd3___lsb 3
#define reg_pinmux_rw_pd_iop___pd3___width 1
#define reg_pinmux_rw_pd_iop___pd3___bit 3
#define reg_pinmux_rw_pd_iop___pd4___lsb 4
#define reg_pinmux_rw_pd_iop___pd4___width 1
#define reg_pinmux_rw_pd_iop___pd4___bit 4
#define reg_pinmux_rw_pd_iop___pd5___lsb 5
#define reg_pinmux_rw_pd_iop___pd5___width 1
#define reg_pinmux_rw_pd_iop___pd5___bit 5
#define reg_pinmux_rw_pd_iop___pd6___lsb 6
#define reg_pinmux_rw_pd_iop___pd6___width 1
#define reg_pinmux_rw_pd_iop___pd6___bit 6
#define reg_pinmux_rw_pd_iop___pd7___lsb 7
#define reg_pinmux_rw_pd_iop___pd7___width 1
#define reg_pinmux_rw_pd_iop___pd7___bit 7
#define reg_pinmux_rw_pd_iop___pd8___lsb 8
#define reg_pinmux_rw_pd_iop___pd8___width 1
#define reg_pinmux_rw_pd_iop___pd8___bit 8
#define reg_pinmux_rw_pd_iop___pd9___lsb 9
#define reg_pinmux_rw_pd_iop___pd9___width 1
#define reg_pinmux_rw_pd_iop___pd9___bit 9
#define reg_pinmux_rw_pd_iop___pd10___lsb 10
#define reg_pinmux_rw_pd_iop___pd10___width 1
#define reg_pinmux_rw_pd_iop___pd10___bit 10
#define reg_pinmux_rw_pd_iop___pd11___lsb 11
#define reg_pinmux_rw_pd_iop___pd11___width 1
#define reg_pinmux_rw_pd_iop___pd11___bit 11
#define reg_pinmux_rw_pd_iop___pd12___lsb 12
#define reg_pinmux_rw_pd_iop___pd12___width 1
#define reg_pinmux_rw_pd_iop___pd12___bit 12
#define reg_pinmux_rw_pd_iop___pd13___lsb 13
#define reg_pinmux_rw_pd_iop___pd13___width 1
#define reg_pinmux_rw_pd_iop___pd13___bit 13
#define reg_pinmux_rw_pd_iop___pd14___lsb 14
#define reg_pinmux_rw_pd_iop___pd14___width 1
#define reg_pinmux_rw_pd_iop___pd14___bit 14
#define reg_pinmux_rw_pd_iop___pd15___lsb 15
#define reg_pinmux_rw_pd_iop___pd15___width 1
#define reg_pinmux_rw_pd_iop___pd15___bit 15
#define reg_pinmux_rw_pd_iop___pd16___lsb 16
#define reg_pinmux_rw_pd_iop___pd16___width 1
#define reg_pinmux_rw_pd_iop___pd16___bit 16
#define reg_pinmux_rw_pd_iop___pd17___lsb 17
#define reg_pinmux_rw_pd_iop___pd17___width 1
#define reg_pinmux_rw_pd_iop___pd17___bit 17
#define reg_pinmux_rw_pd_iop_offset 28

/* Register rw_pe_gio, scope pinmux, type rw */
#define reg_pinmux_rw_pe_gio___pe0___lsb 0
#define reg_pinmux_rw_pe_gio___pe0___width 1
#define reg_pinmux_rw_pe_gio___pe0___bit 0
#define reg_pinmux_rw_pe_gio___pe1___lsb 1
#define reg_pinmux_rw_pe_gio___pe1___width 1
#define reg_pinmux_rw_pe_gio___pe1___bit 1
#define reg_pinmux_rw_pe_gio___pe2___lsb 2
#define reg_pinmux_rw_pe_gio___pe2___width 1
#define reg_pinmux_rw_pe_gio___pe2___bit 2
#define reg_pinmux_rw_pe_gio___pe3___lsb 3
#define reg_pinmux_rw_pe_gio___pe3___width 1
#define reg_pinmux_rw_pe_gio___pe3___bit 3
#define reg_pinmux_rw_pe_gio___pe4___lsb 4
#define reg_pinmux_rw_pe_gio___pe4___width 1
#define reg_pinmux_rw_pe_gio___pe4___bit 4
#define reg_pinmux_rw_pe_gio___pe5___lsb 5
#define reg_pinmux_rw_pe_gio___pe5___width 1
#define reg_pinmux_rw_pe_gio___pe5___bit 5
#define reg_pinmux_rw_pe_gio___pe6___lsb 6
#define reg_pinmux_rw_pe_gio___pe6___width 1
#define reg_pinmux_rw_pe_gio___pe6___bit 6
#define reg_pinmux_rw_pe_gio___pe7___lsb 7
#define reg_pinmux_rw_pe_gio___pe7___width 1
#define reg_pinmux_rw_pe_gio___pe7___bit 7
#define reg_pinmux_rw_pe_gio___pe8___lsb 8
#define reg_pinmux_rw_pe_gio___pe8___width 1
#define reg_pinmux_rw_pe_gio___pe8___bit 8
#define reg_pinmux_rw_pe_gio___pe9___lsb 9
#define reg_pinmux_rw_pe_gio___pe9___width 1
#define reg_pinmux_rw_pe_gio___pe9___bit 9
#define reg_pinmux_rw_pe_gio___pe10___lsb 10
#define reg_pinmux_rw_pe_gio___pe10___width 1
#define reg_pinmux_rw_pe_gio___pe10___bit 10
#define reg_pinmux_rw_pe_gio___pe11___lsb 11
#define reg_pinmux_rw_pe_gio___pe11___width 1
#define reg_pinmux_rw_pe_gio___pe11___bit 11
#define reg_pinmux_rw_pe_gio___pe12___lsb 12
#define reg_pinmux_rw_pe_gio___pe12___width 1
#define reg_pinmux_rw_pe_gio___pe12___bit 12
#define reg_pinmux_rw_pe_gio___pe13___lsb 13
#define reg_pinmux_rw_pe_gio___pe13___width 1
#define reg_pinmux_rw_pe_gio___pe13___bit 13
#define reg_pinmux_rw_pe_gio___pe14___lsb 14
#define reg_pinmux_rw_pe_gio___pe14___width 1
#define reg_pinmux_rw_pe_gio___pe14___bit 14
#define reg_pinmux_rw_pe_gio___pe15___lsb 15
#define reg_pinmux_rw_pe_gio___pe15___width 1
#define reg_pinmux_rw_pe_gio___pe15___bit 15
#define reg_pinmux_rw_pe_gio___pe16___lsb 16
#define reg_pinmux_rw_pe_gio___pe16___width 1
#define reg_pinmux_rw_pe_gio___pe16___bit 16
#define reg_pinmux_rw_pe_gio___pe17___lsb 17
#define reg_pinmux_rw_pe_gio___pe17___width 1
#define reg_pinmux_rw_pe_gio___pe17___bit 17
#define reg_pinmux_rw_pe_gio_offset 32

/* Register rw_pe_iop, scope pinmux, type rw */
#define reg_pinmux_rw_pe_iop___pe0___lsb 0
#define reg_pinmux_rw_pe_iop___pe0___width 1
#define reg_pinmux_rw_pe_iop___pe0___bit 0
#define reg_pinmux_rw_pe_iop___pe1___lsb 1
#define reg_pinmux_rw_pe_iop___pe1___width 1
#define reg_pinmux_rw_pe_iop___pe1___bit 1
#define reg_pinmux_rw_pe_iop___pe2___lsb 2
#define reg_pinmux_rw_pe_iop___pe2___width 1
#define reg_pinmux_rw_pe_iop___pe2___bit 2
#define reg_pinmux_rw_pe_iop___pe3___lsb 3
#define reg_pinmux_rw_pe_iop___pe3___width 1
#define reg_pinmux_rw_pe_iop___pe3___bit 3
#define reg_pinmux_rw_pe_iop___pe4___lsb 4
#define reg_pinmux_rw_pe_iop___pe4___width 1
#define reg_pinmux_rw_pe_iop___pe4___bit 4
#define reg_pinmux_rw_pe_iop___pe5___lsb 5
#define reg_pinmux_rw_pe_iop___pe5___width 1
#define reg_pinmux_rw_pe_iop___pe5___bit 5
#define reg_pinmux_rw_pe_iop___pe6___lsb 6
#define reg_pinmux_rw_pe_iop___pe6___width 1
#define reg_pinmux_rw_pe_iop___pe6___bit 6
#define reg_pinmux_rw_pe_iop___pe7___lsb 7
#define reg_pinmux_rw_pe_iop___pe7___width 1
#define reg_pinmux_rw_pe_iop___pe7___bit 7
#define reg_pinmux_rw_pe_iop___pe8___lsb 8
#define reg_pinmux_rw_pe_iop___pe8___width 1
#define reg_pinmux_rw_pe_iop___pe8___bit 8
#define reg_pinmux_rw_pe_iop___pe9___lsb 9
#define reg_pinmux_rw_pe_iop___pe9___width 1
#define reg_pinmux_rw_pe_iop___pe9___bit 9
#define reg_pinmux_rw_pe_iop___pe10___lsb 10
#define reg_pinmux_rw_pe_iop___pe10___width 1
#define reg_pinmux_rw_pe_iop___pe10___bit 10
#define reg_pinmux_rw_pe_iop___pe11___lsb 11
#define reg_pinmux_rw_pe_iop___pe11___width 1
#define reg_pinmux_rw_pe_iop___pe11___bit 11
#define reg_pinmux_rw_pe_iop___pe12___lsb 12
#define reg_pinmux_rw_pe_iop___pe12___width 1
#define reg_pinmux_rw_pe_iop___pe12___bit 12
#define reg_pinmux_rw_pe_iop___pe13___lsb 13
#define reg_pinmux_rw_pe_iop___pe13___width 1
#define reg_pinmux_rw_pe_iop___pe13___bit 13
#define reg_pinmux_rw_pe_iop___pe14___lsb 14
#define reg_pinmux_rw_pe_iop___pe14___width 1
#define reg_pinmux_rw_pe_iop___pe14___bit 14
#define reg_pinmux_rw_pe_iop___pe15___lsb 15
#define reg_pinmux_rw_pe_iop___pe15___width 1
#define reg_pinmux_rw_pe_iop___pe15___bit 15
#define reg_pinmux_rw_pe_iop___pe16___lsb 16
#define reg_pinmux_rw_pe_iop___pe16___width 1
#define reg_pinmux_rw_pe_iop___pe16___bit 16
#define reg_pinmux_rw_pe_iop___pe17___lsb 17
#define reg_pinmux_rw_pe_iop___pe17___width 1
#define reg_pinmux_rw_pe_iop___pe17___bit 17
#define reg_pinmux_rw_pe_iop_offset 36

/* Register rw_usb_phy, scope pinmux, type rw */
#define reg_pinmux_rw_usb_phy___en_usb0___lsb 0
#define reg_pinmux_rw_usb_phy___en_usb0___width 1
#define reg_pinmux_rw_usb_phy___en_usb0___bit 0
#define reg_pinmux_rw_usb_phy___en_usb1___lsb 1
#define reg_pinmux_rw_usb_phy___en_usb1___width 1
#define reg_pinmux_rw_usb_phy___en_usb1___bit 1
#define reg_pinmux_rw_usb_phy_offset 40


/* Constants */
#define regk_pinmux_no                            0x00000000
#define regk_pinmux_rw_hwprot_default             0x00000000
#define regk_pinmux_rw_pa_default                 0x00000000
#define regk_pinmux_rw_pb_gio_default             0x00000000
#define regk_pinmux_rw_pb_iop_default             0x00000000
#define regk_pinmux_rw_pc_gio_default             0x00000000
#define regk_pinmux_rw_pc_iop_default             0x00000000
#define regk_pinmux_rw_pd_gio_default             0x00000000
#define regk_pinmux_rw_pd_iop_default             0x00000000
#define regk_pinmux_rw_pe_gio_default             0x00000000
#define regk_pinmux_rw_pe_iop_default             0x00000000
#define regk_pinmux_rw_usb_phy_default            0x00000000
#define regk_pinmux_yes                           0x00000001
#endif /* __pinmux_defs_asm_h */
