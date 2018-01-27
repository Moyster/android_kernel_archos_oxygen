/*
 * Copyright (c) 2014 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _G3DKMD_MMCE_REG_H_
#define _G3DKMD_MMCE_REG_H_

#define CMDQ_THRx_RESET(id)                     (REG_CMDQ_THR0_RESET + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_EN(id)                        (REG_CMDQ_THR0_EN + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_SUSPEND(id)                   (REG_CMDQ_THR0_SUSPEND + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_STATUS(id)                    (REG_CMDQ_THR0_STATUS + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_IRQ_FLAG(id)                  (REG_CMDQ_THR0_IRQ_FLAG + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_IRQ_FLAG_EN(id)               (REG_CMDQ_THR0_IRQ_FLAG_EN + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_SECURITY(id)                  (REG_CMDQ_THR0_SECURITY + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_PC(id)                        (REG_CMDQ_THR0_PC + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_END_ADDR(id)                  (REG_CMDQ_THR0_END_ADDR + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_EXEC_CMDS_CNT(id)             (REG_CMDQ_THR0_EXEC_CMDS_CNT + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_WAIT_TOKEN(id)                (REG_CMDQ_THR0_WAIT_TOKEN + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_QOS(id)                       (REG_CMDQ_THR0_QOS + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_PREFETCH(id)                  (REG_CMDQ_THR0_PREFETCH + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_INSTN_TIMEOUT_CYCLES(id)      (REG_CMDQ_THR0_INSTN_TIMEOUT_CYCLES + id * MMCE_REG_GROUP_SZ)
#define CMDQ_THRx_INSTN_TIMEOUT_THRESHOLD(id)   (REG_CMDQ_THR0_INSTN_TIMEOUT_THRESHOLD + id * MMCE_REG_GROUP_SZ)

#define TOKEN_UPDATE_PAIR(id, val)              (((id) & MSK_TOKEN_ID_UPD) \
							| (((val) << SFT_TOKEN_VALUE_UPD) & MSK_TOKEN_VALUE_UPD))

/* #define MMCE_REG_BASE                       0x00000000 */
#define MMCE_REG_GROUP_SZ                   (REG_CMDQ_THR1_RESET - REG_CMDQ_THR0_RESET)

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_CORE_RESET                 0x0000
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_CORE_WARM_RST                   0x00000001
#define SFT_CORE_WARM_RST                   0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_IRQ_FLAG                   0x0010
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR_IRQ_B_FLAG                  0x00003FFF
#define SFT_THR_IRQ_B_FLAG                  0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_SECURE_IRQ_FLAG            0x0014
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR_SECURE_IRQ_B_FLAG           0x00003FFF
#define SFT_THR_SECURE_IRQ_B_FLAG           0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_LOADER_THR                 0x0018
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_LOADER_THR                      0x00003FFF
#define SFT_LOADER_THR                      0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_HAS_LOADER_THR                  0x80000000
#define SFT_HAS_LOADER_THR                  31

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR_SLOT_CYCLES            0x0030
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR_SLOT_CYCLES                 0x0FFFFFC0
#define SFT_THR_SLOT_CYCLES                 6

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR_EXEC_CYCLES            0x0034
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR_EXEC_CYCLES                 0x0FFFFFFF
#define SFT_THR_EXEC_CYCLES                 0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR_TIMER                  0x0038
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_TIMER_CLOCK                     0x0FFFFFFF
#define SFT_TIMER_CLOCK                     0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_4GB_MEM                    0x003C
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_MEM_4GB                         0x00000001
#define SFT_MEM_4GB                         0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_BUS_CTRL                   0x0040
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_ULTRA_EN                        0x00000001
#define SFT_ULTRA_EN                        0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_PREULTRA_EN                     0x00000002
#define SFT_PREULTRA_EN                     1
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_MMU_EN                          0x00000010
#define SFT_MMU_EN                          4
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_COHERENCE_EN                    0x00000020
#define SFT_COHERENCE_EN                    5

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_REG_ABORT                  0x0050
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_ABORT                           0x00000001
#define SFT_ABORT                           0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_SECURITY_DISABLE                0x00000002
#define SFT_SECURITY_DISABLE                1
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_ABORT_ADDR                      0x0FFF0000
#define SFT_ABORT_ADDR                      16
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_ABORT_IS_WRITE                  0x80000000
#define SFT_ABORT_IS_WRITE                  31

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_SYNC_TOKEN_ID              0x0060
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_TOKEN_ID                        0x000001FF
#define SFT_TOKEN_ID                        0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_SYNC_TOKEN_VALUE           0x0064
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_TOKEN_VALUE                     0x00000001
#define SFT_TOKEN_VALUE                     0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_SYNC_TOKEN_UPDATE          0x0068
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_TOKEN_ID_UPD                    0x0000FFFF
#define SFT_TOKEN_ID_UPD                    0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_TOKEN_VALUE_UPD                 0x0FFF0000
#define SFT_TOKEN_VALUE_UPD                 16

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_CAPABILITY             0x0078
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_GPR_R_NUM                       0x0000003F
#define SFT_GPR_R_NUM                       0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R0                     0x0080
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R0                              0xFFFFFFFF
#define SFT_R0                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R1                     0x0084
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R1                              0xFFFFFFFF
#define SFT_R1                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R2                     0x0088
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R2                              0xFFFFFFFF
#define SFT_R2                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R3                     0x008C
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R3                              0xFFFFFFFF
#define SFT_R3                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R4                     0x0090
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R4                              0xFFFFFFFF
#define SFT_R4                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R5                     0x0094
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R5                              0xFFFFFFFF
#define SFT_R5                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R6                     0x0098
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R6                              0xFFFFFFFF
#define SFT_R6                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R7                     0x009C
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R7                              0xFFFFFFFF
#define SFT_R7                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R8                     0x00A0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R8                              0xFFFFFFFF
#define SFT_R8                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R9                     0x00A4
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R9                              0xFFFFFFFF
#define SFT_R9                              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R10                    0x00A8
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R10                             0xFFFFFFFF
#define SFT_R10                             0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R11                    0x00AC
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R11                             0xFFFFFFFF
#define SFT_R11                             0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R12                    0x00B0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R12                             0xFFFFFFFF
#define SFT_R12                             0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R13                    0x00B4
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R13                             0xFFFFFFFF
#define SFT_R13                             0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R14                    0x00B8
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R14                             0xFFFFFFFF
#define SFT_R14                             0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_GPR_R15                    0x00BC
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_R15                             0xFFFFFFFF
#define SFT_R15                             0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_RESET                 0x0100
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_WARM_RST                   0x00000001
#define SFT_THR0_WARM_RST                   0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_EN                    0x0104
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_EN                         0x00000001
#define SFT_THR0_EN                         0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_SUSPEND               0x0108
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_SUSPEND                    0x00000001
#define SFT_THR0_SUSPEND                    0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_STATUS                0x010C
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_ACTIVE                     0x00000001
#define SFT_THR0_ACTIVE                     0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_SUSPENDED                  0x00000002
#define SFT_THR0_SUSPENDED                  1

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_IRQ_FLAG              0x0110
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_EXEC_CMD_FLAG              0x00000001
#define SFT_THR0_EXEC_CMD_FLAG              0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_INSTN_TIMEOUT_FLAG         0x00000002
#define SFT_THR0_INSTN_TIMEOUT_FLAG         1
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_INVALID_INSTN_FLAG         0x00000010
#define SFT_THR0_INVALID_INSTN_FLAG         4

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_IRQ_FLAG_EN           0x0114
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_EXEC_CMD_FLAG_EN           0x00000001
#define SFT_THR0_EXEC_CMD_FLAG_EN           0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_INSTN_TIMEOUT_FLAG_EN      0x00000002
#define SFT_THR0_INSTN_TIMEOUT_FLAG_EN      1
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_INVALID_INSTN_FLAG_EN      0x00000010
#define SFT_THR0_INVALID_INSTN_FLAG_EN      4

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_SECURITY              0x0118
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_SECURITY                   0x00000001
#define SFT_THR0_SECURITY                   0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_DOMAIN                     0x00000006
#define SFT_THR0_DOMAIN                     1
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_SECURE_IRQ_EN              0x00000008
#define SFT_THR0_SECURE_IRQ_EN              3

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_PC                    0x0120
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_PC                         0xFFFFFFFF
#define SFT_THR0_PC                         0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_END_ADDR              0x0124
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_END_ADDR                   0xFFFFFFFF
#define SFT_THR0_END_ADDR                   0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_EXEC_CMDS_CNT         0x0128
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_EXEC_CMDS_CNT              0xFFFFFFFF
#define SFT_THR0_EXEC_CMDS_CNT              0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_WAIT_TOKEN            0x0130
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_TOKEN_ID                   0x0000FFFF
#define SFT_THR0_TOKEN_ID                   0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_WAIT_VALUE                 0x0FFF0000
#define SFT_THR0_WAIT_VALUE                 16
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_WAIT_OPERATION             0x70000000
#define SFT_THR0_WAIT_OPERATION             28
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_IS_WAITING                 0x80000000
#define SFT_THR0_IS_WAITING                 31

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_QOS                   0x0140
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_QOS                        0x00000007
#define SFT_THR0_QOS                        0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_PREFETCH                  0x0144
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_PREFETCH_EN                    0x00000001
#define SFT_THR0_PREFETCH_EN                    0
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_PREFETCH_MARKER_EN             0x00000002
#define SFT_THR0_PREFETCH_MARKER_EN             1

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_INSTN_TIMEOUT_CYCLES      0x0150
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_INSTN_TIMEOUT_CYCLES           0x0000001F
#define SFT_THR0_INSTN_TIMEOUT_CYCLES           0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR0_INSTN_TIMEOUT_THRESHOLD   0x0154
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR0_INSTN_TIMEOUT_THRESHOLD        0x00000001
#define SFT_THR0_INSTN_TIMEOUT_THRESHOLD        0

/**********************************************************************************************************/
/*  */
#define REG_CMDQ_THR1_RESET                     0x0180
/*--------------------------------------------------------------------------------------------------------*/
#define MSK_THR1_WARM_RST                       0x00000001
#define SFT_THR1_WARM_RST                       0

#endif /* _G3DKMD_MMCE_REG_H_ */
