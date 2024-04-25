/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-3-Clause) */
/* QLogic qed NIC Driver
 * Copyright (c) 2019-2021 Marvell International Ltd.
 */

#ifndef _QED_IRO_HSI_H
#define _QED_IRO_HSI_H

#include <linux/types.h>

enum {
	IRO_YSTORM_FLOW_CONTROL_MODE_GTT,
	IRO_PSTORM_PKT_DUPLICATION_CFG,
	IRO_TSTORM_PORT_STAT,
	IRO_TSTORM_LL2_PORT_STAT,
	IRO_TSTORM_PKT_DUPLICATION_CFG,
	IRO_USTORM_VF_PF_CHANNEL_READY_GTT,
	IRO_USTORM_FLR_FINAL_ACK_GTT,
	IRO_USTORM_EQE_CONS_GTT,
	IRO_USTORM_ETH_QUEUE_ZONE_GTT,
	IRO_USTORM_COMMON_QUEUE_CONS_GTT,
	IRO_XSTORM_PQ_INFO,
	IRO_XSTORM_INTEG_TEST_DATA,
	IRO_YSTORM_INTEG_TEST_DATA,
	IRO_PSTORM_INTEG_TEST_DATA,
	IRO_TSTORM_INTEG_TEST_DATA,
	IRO_MSTORM_INTEG_TEST_DATA,
	IRO_USTORM_INTEG_TEST_DATA,
	IRO_XSTORM_OVERLAY_BUF_ADDR,
	IRO_YSTORM_OVERLAY_BUF_ADDR,
	IRO_PSTORM_OVERLAY_BUF_ADDR,
	IRO_TSTORM_OVERLAY_BUF_ADDR,
	IRO_MSTORM_OVERLAY_BUF_ADDR,
	IRO_USTORM_OVERLAY_BUF_ADDR,
	IRO_TSTORM_LL2_RX_PRODS_GTT,
	IRO_CORE_LL2_TSTORM_PER_QUEUE_STAT,
	IRO_CORE_LL2_USTORM_PER_QUEUE_STAT,
	IRO_CORE_LL2_PSTORM_PER_QUEUE_STAT,
	IRO_MSTORM_QUEUE_STAT,
	IRO_MSTORM_TPA_TIMEOUT_US,
	IRO_MSTORM_ETH_VF_PRODS,
	IRO_MSTORM_ETH_PF_PRODS_GTT,
	IRO_MSTORM_ETH_PF_STAT,
	IRO_USTORM_QUEUE_STAT,
	IRO_USTORM_ETH_PF_STAT,
	IRO_PSTORM_QUEUE_STAT,
	IRO_PSTORM_ETH_PF_STAT,
	IRO_PSTORM_CTL_FRAME_ETHTYPE_GTT,
	IRO_TSTORM_ETH_PRS_INPUT,
	IRO_ETH_RX_RATE_LIMIT,
	IRO_TSTORM_ETH_RSS_UPDATE_GTT,
	IRO_XSTORM_ETH_QUEUE_ZONE_GTT,
	IRO_YSTORM_TOE_CQ_PROD,
	IRO_USTORM_TOE_CQ_PROD,
	IRO_USTORM_TOE_GRQ_PROD,
	IRO_TSTORM_SCSI_CMDQ_CONS_GTT,
	IRO_TSTORM_SCSI_BDQ_EXT_PROD_GTT,
	IRO_MSTORM_SCSI_BDQ_EXT_PROD_GTT,
	IRO_TSTORM_ISCSI_RX_STATS,
	IRO_MSTORM_ISCSI_RX_STATS,
	IRO_USTORM_ISCSI_RX_STATS,
	IRO_XSTORM_ISCSI_TX_STATS,
	IRO_YSTORM_ISCSI_TX_STATS,
	IRO_PSTORM_ISCSI_TX_STATS,
	IRO_TSTORM_FCOE_RX_STATS,
	IRO_PSTORM_FCOE_TX_STATS,
	IRO_PSTORM_RDMA_QUEUE_STAT,
	IRO_TSTORM_RDMA_QUEUE_STAT,
	IRO_XSTORM_RDMA_ASSERT_LEVEL,
	IRO_YSTORM_RDMA_ASSERT_LEVEL,
	IRO_PSTORM_RDMA_ASSERT_LEVEL,
	IRO_TSTORM_RDMA_ASSERT_LEVEL,
	IRO_MSTORM_RDMA_ASSERT_LEVEL,
	IRO_USTORM_RDMA_ASSERT_LEVEL,
	IRO_XSTORM_IWARP_RXMIT_STATS,
	IRO_TSTORM_ROCE_EVENTS_STAT,
	IRO_YSTORM_ROCE_DCQCN_RECEIVED_STATS,
	IRO_YSTORM_ROCE_ERROR_STATS,
	IRO_PSTORM_ROCE_DCQCN_SENT_STATS,
	IRO_USTORM_ROCE_CQE_STATS,
};

/* Pstorm LiteL2 queue statistics */

#define CORE_LL2_PSTORM_PER_QUEUE_STAT_OFFSET(core_tx_stats_id) \
	(IRO[IRO_CORE_LL2_PSTORM_PER_QUEUE_STAT].base           \
	+ ((core_tx_stats_id) * IRO[IRO_CORE_LL2_PSTORM_PER_QUEUE_STAT].m1))
#define CORE_LL2_PSTORM_PER_QUEUE_STAT_SIZE \
				(IRO[IRO_CORE_LL2_PSTORM_PER_QUEUE_STAT].size)

/* Tstorm LightL2 queue statistics */
#define CORE_LL2_TSTORM_PER_QUEUE_STAT_OFFSET(core_rx_queue_id) \
	(IRO[IRO_CORE_LL2_TSTORM_PER_QUEUE_STAT].base           \
	 + ((core_rx_queue_id) * IRO[IRO_CORE_LL2_TSTORM_PER_QUEUE_STAT].m1))
#define CORE_LL2_TSTORM_PER_QUEUE_STAT_SIZE \
				(IRO[IRO_CORE_LL2_TSTORM_PER_QUEUE_STAT].size)

/* Ustorm LiteL2 queue statistics */
#define CORE_LL2_USTORM_PER_QUEUE_STAT_OFFSET(core_rx_queue_id) \
	(IRO[IRO_CORE_LL2_USTORM_PER_QUEUE_STAT].base           \
	 + ((core_rx_queue_id) * IRO[IRO_CORE_LL2_USTORM_PER_QUEUE_STAT].m1))
#define CORE_LL2_USTORM_PER_QUEUE_STAT_SIZE \
				(IRO[IRO_CORE_LL2_USTORM_PER_QUEUE_STAT].size)

/* Tstorm Eth limit Rx rate */
#define ETH_RX_RATE_LIMIT_OFFSET(pf_id)  \
	(IRO[IRO_ETH_RX_RATE_LIMIT].base \
	 + ((pf_id) * IRO[IRO_ETH_RX_RATE_LIMIT].m1))
#define ETH_RX_RATE_LIMIT_SIZE (IRO[IRO_ETH_RX_RATE_LIMIT].size)

/* Mstorm ETH PF queues producers */
#define MSTORM_ETH_PF_PRODS_GTT_OFFSET(queue_id) \
	(IRO[IRO_MSTORM_ETH_PF_PRODS_GTT].base   \
	 + ((queue_id) * IRO[IRO_MSTORM_ETH_PF_PRODS_GTT].m1))
#define MSTORM_ETH_PF_PRODS_GTT_SIZE (IRO[IRO_MSTORM_ETH_PF_PRODS_GTT].size)

/* Mstorm pf statistics */
#define MSTORM_ETH_PF_STAT_OFFSET(pf_id)  \
	(IRO[IRO_MSTORM_ETH_PF_STAT].base \
	 + ((pf_id) * IRO[IRO_MSTORM_ETH_PF_STAT].m1))
#define MSTORM_ETH_PF_STAT_SIZE (IRO[IRO_MSTORM_ETH_PF_STAT].size)

/* Mstorm ETH VF queues producers offset in RAM. Used in default VF zone
 * size mode.
 */
#define MSTORM_ETH_VF_PRODS_OFFSET(vf_id, vf_queue_id) \
	(IRO[IRO_MSTORM_ETH_VF_PRODS].base             \
	 + ((vf_id) * IRO[IRO_MSTORM_ETH_VF_PRODS].m1) \
	 + ((vf_queue_id) * IRO[IRO_MSTORM_ETH_VF_PRODS].m2))
#define MSTORM_ETH_VF_PRODS_SIZE (IRO[IRO_MSTORM_ETH_VF_PRODS].size)

/* Mstorm Integration Test Data */
#define MSTORM_INTEG_TEST_DATA_OFFSET (IRO[IRO_MSTORM_INTEG_TEST_DATA].base)
#define MSTORM_INTEG_TEST_DATA_SIZE (IRO[IRO_MSTORM_INTEG_TEST_DATA].size)

/* Mstorm iSCSI RX stats */
#define MSTORM_ISCSI_RX_STATS_OFFSET(storage_func_id) \
	(IRO[IRO_MSTORM_ISCSI_RX_STATS].base          \
	 + ((storage_func_id) * IRO[IRO_MSTORM_ISCSI_RX_STATS].m1))
#define MSTORM_ISCSI_RX_STATS_SIZE (IRO[IRO_MSTORM_ISCSI_RX_STATS].size)

/* Mstorm overlay buffer host address */
#define MSTORM_OVERLAY_BUF_ADDR_OFFSET (IRO[IRO_MSTORM_OVERLAY_BUF_ADDR].base)
#define MSTORM_OVERLAY_BUF_ADDR_SIZE (IRO[IRO_MSTORM_OVERLAY_BUF_ADDR].size)

/* Mstorm queue statistics */
#define MSTORM_QUEUE_STAT_OFFSET(stat_counter_id) \
	(IRO[IRO_MSTORM_QUEUE_STAT].base          \
	 + ((stat_counter_id) * IRO[IRO_MSTORM_QUEUE_STAT].m1))
#define MSTORM_QUEUE_STAT_SIZ (IRO[IRO_MSTORM_QUEUE_STAT].size)

/* Mstorm error level for assert */
#define MSTORM_RDMA_ASSERT_LEVEL_OFFSET(pf_id)  \
	(IRO[IRO_MSTORM_RDMA_ASSERT_LEVEL].base \
	 + ((pf_id) * IRO[IRO_MSTORM_RDMA_ASSERT_LEVEL].m1))
#define MSTORM_RDMA_ASSERT_LEVEL_SIZE (IRO[IRO_MSTORM_RDMA_ASSERT_LEVEL].size)

/* Mstorm bdq-external-producer of given BDQ resource ID, BDqueue-id */
#define MSTORM_SCSI_BDQ_EXT_PROD_GTT_OFFSET(storage_func_id, bdq_id)      \
	(IRO[IRO_MSTORM_SCSI_BDQ_EXT_PROD_GTT].base                       \
	 + ((storage_func_id) * IRO[IRO_MSTORM_SCSI_BDQ_EXT_PROD_GTT].m1) \
	 + ((bdq_id) * IRO[IRO_MSTORM_SCSI_BDQ_EXT_PROD_GTT].m2))
#define MSTORM_SCSI_BDQ_EXT_PROD_GTT_SIZE \
				(IRO[IRO_MSTORM_SCSI_BDQ_EXT_PROD_GTT].size)

/* TPA agregation timeout in us resolution (on ASIC) */
#define MSTORM_TPA_TIMEOUT_US_OFFSET (IRO[IRO_MSTORM_TPA_TIMEOUT_US].base)
#define MSTORM_TPA_TIMEOUT_US_SIZE (IRO[IRO_MSTORM_TPA_TIMEOUT_US].size)

/* Control frame's EthType configuration for TX control frame security */
#define PSTORM_CTL_FRAME_ETHTYPE_GTT_OFFSET(ethtype_id) \
	(IRO[IRO_PSTORM_CTL_FRAME_ETHTYPE_GTT].base     \
	 + ((ethtype_id) * IRO[IRO_PSTORM_CTL_FRAME_ETHTYPE_GTT].m1))
#define PSTORM_CTL_FRAME_ETHTYPE_GTT_SIZE \
				(IRO[IRO_PSTORM_CTL_FRAME_ETHTYPE_GTT].size)

/* Pstorm pf statistics */
#define PSTORM_ETH_PF_STAT_OFFSET(pf_id)  \
	(IRO[IRO_PSTORM_ETH_PF_STAT].base \
	 + ((pf_id) * IRO[IRO_PSTORM_ETH_PF_STAT].m1))
#define PSTORM_ETH_PF_STAT_SIZE (IRO[IRO_PSTORM_ETH_PF_STAT].size)

/* Pstorm FCoE TX stats */
#define PSTORM_FCOE_TX_STATS_OFFSET(pf_id)  \
	(IRO[IRO_PSTORM_FCOE_TX_STATS].base \
	 + ((pf_id) * IRO[IRO_PSTORM_FCOE_TX_STATS].m1))
#define PSTORM_FCOE_TX_STATS_SIZE (IRO[IRO_PSTORM_FCOE_TX_STATS].size)

/* Pstorm Integration Test Data */
#define PSTORM_INTEG_TEST_DATA_OFFSET (IRO[IRO_PSTORM_INTEG_TEST_DATA].base)
#define PSTORM_INTEG_TEST_DATA_SIZE (IRO[IRO_PSTORM_INTEG_TEST_DATA].size)

/* Pstorm iSCSI TX stats */
#define PSTORM_ISCSI_TX_STATS_OFFSET(storage_func_id) \
	(IRO[IRO_PSTORM_ISCSI_TX_STATS].base          \
	 + ((storage_func_id) * IRO[IRO_PSTORM_ISCSI_TX_STATS].m1))
#define PSTORM_ISCSI_TX_STATS_SIZE (IRO[IRO_PSTORM_ISCSI_TX_STATS].size)

/* Pstorm overlay buffer host address */
#define PSTORM_OVERLAY_BUF_ADDR_OFFSET (IRO[IRO_PSTORM_OVERLAY_BUF_ADDR].base)
#define PSTORM_OVERLAY_BUF_ADDR_SIZE (IRO[IRO_PSTORM_OVERLAY_BUF_ADDR].size)

/* Pstorm LL2 packet duplication configuration. Use pstorm_pkt_dup_cfg
 * data type.
 */
#define PSTORM_PKT_DUPLICATION_CFG_OFFSET(pf_id) \
	(IRO[IRO_PSTORM_PKT_DUPLICATION_CFG].base \
	+ ((pf_id) * IRO[IRO_PSTORM_PKT_DUPLICATION_CFG].m1))
#define PSTORM_PKT_DUPLICATION_CFG_SIZE \
				(IRO[IRO_PSTORM_PKT_DUPLICATION_CFG].size)

/* Pstorm queue statistics */
#define PSTORM_QUEUE_STAT_OFFSET(stat_counter_id) \
	(IRO[IRO_PSTORM_QUEUE_STAT].base          \
	 + ((stat_counter_id) * IRO[IRO_PSTORM_QUEUE_STAT].m1))
#define PSTORM_QUEUE_STAT_SIZE (IRO[IRO_PSTORM_QUEUE_STAT].size)

/* Pstorm error level for assert */
#define PSTORM_RDMA_ASSERT_LEVEL_OFFSET(pf_id)  \
	(IRO[IRO_PSTORM_RDMA_ASSERT_LEVEL].base \
	 + ((pf_id) * IRO[IRO_PSTORM_RDMA_ASSERT_LEVEL].m1))
#define PSTORM_RDMA_ASSERT_LEVEL_SIZE (IRO[IRO_PSTORM_RDMA_ASSERT_LEVEL].size)

/* Pstorm RDMA queue statistics */
#define PSTORM_RDMA_QUEUE_STAT_OFFSET(rdma_stat_counter_id) \
	(IRO[IRO_PSTORM_RDMA_QUEUE_STAT].base               \
	 + ((rdma_stat_counter_id) * IRO[IRO_PSTORM_RDMA_QUEUE_STAT].m1))
#define PSTORM_RDMA_QUEUE_STAT_SIZE (IRO[IRO_PSTORM_RDMA_QUEUE_STAT].size)

/* DCQCN Sent Statistics */
#define PSTORM_ROCE_DCQCN_SENT_STATS_OFFSET(roce_pf_id) \
	(IRO[IRO_PSTORM_ROCE_DCQCN_SENT_STATS].base     \
	 + ((roce_pf_id) * IRO[IRO_PSTORM_ROCE_DCQCN_SENT_STATS].m1))
#define PSTORM_ROCE_DCQCN_SENT_STATS_SIZE \
				(IRO[IRO_PSTORM_ROCE_DCQCN_SENT_STATS].size)

/* Tstorm last parser message */
#define TSTORM_ETH_PRS_INPUT_OFFSET (IRO[IRO_TSTORM_ETH_PRS_INPUT].base)
#define TSTORM_ETH_PRS_INPUT_SIZE (IRO[IRO_TSTORM_ETH_PRS_INPUT].size)

/* RSS indirection table entry update command per PF offset in TSTORM PF BAR0.
 * Use eth_tstorm_rss_update_data for update.
 */
#define TSTORM_ETH_RSS_UPDATE_GTT_OFFSET(pf_id)  \
	(IRO[IRO_TSTORM_ETH_RSS_UPDATE_GTT].base \
	 + ((pf_id) * IRO[IRO_TSTORM_ETH_RSS_UPDATE_GTT].m1))
#define TSTORM_ETH_RSS_UPDATE_GTT_SIZE\
				(IRO[IRO_TSTORM_ETH_RSS_UPDATE_GTT].size)

/* Tstorm FCoE RX stats */
#define TSTORM_FCOE_RX_STATS_OFFSET(pf_id)  \
	(IRO[IRO_TSTORM_FCOE_RX_STATS].base \
	 + ((pf_id) * IRO[IRO_TSTORM_FCOE_RX_STATS].m1))
#define TSTORM_FCOE_RX_STATS_SIZE (IRO[IRO_TSTORM_FCOE_RX_STATS].size)

/* Tstorm Integration Test Data */
#define TSTORM_INTEG_TEST_DATA_OFFSET (IRO[IRO_TSTORM_INTEG_TEST_DATA].base)
#define TSTORM_INTEG_TEST_DATA_SIZE (IRO[IRO_TSTORM_INTEG_TEST_DATA].size)

/* Tstorm iSCSI RX stats */
#define TSTORM_ISCSI_RX_STATS_OFFSET(storage_func_id) \
	(IRO[IRO_TSTORM_ISCSI_RX_STATS].base          \
	 + ((storage_func_id) * IRO[IRO_TSTORM_ISCSI_RX_STATS].m1))
#define TSTORM_ISCSI_RX_STATS_SIZE (IRO[IRO_TSTORM_ISCSI_RX_STATS].size)

/* Tstorm ll2 port statistics */
#define TSTORM_LL2_PORT_STAT_OFFSET(port_id) \
	(IRO[IRO_TSTORM_LL2_PORT_STAT].base  \
	 + ((port_id) * IRO[IRO_TSTORM_LL2_PORT_STAT].m1))
#define TSTORM_LL2_PORT_STAT_SIZE (IRO[IRO_TSTORM_LL2_PORT_STAT].size)

/* Tstorm producers */
#define TSTORM_LL2_RX_PRODS_GTT_OFFSET(core_rx_queue_id) \
	(IRO[IRO_TSTORM_LL2_RX_PRODS_GTT].base           \
	 + ((core_rx_queue_id) * IRO[IRO_TSTORM_LL2_RX_PRODS_GTT].m1))
#define TSTORM_LL2_RX_PRODS_GTT_SIZE (IRO[IRO_TSTORM_LL2_RX_PRODS_GTT].size)

/* Tstorm overlay buffer host address */
#define TSTORM_OVERLAY_BUF_ADDR_OFFSET	(IRO[IRO_TSTORM_OVERLAY_BUF_ADDR].base)

#define TSTORM_OVERLAY_BUF_ADDR_SIZE (IRO[IRO_TSTORM_OVERLAY_BUF_ADDR].size)

/* Tstorm LL2 packet duplication configuration.
 * Use tstorm_pkt_dup_cfg data type.
 */
#define TSTORM_PKT_DUPLICATION_CFG_OFFSET(pf_id)  \
	(IRO[IRO_TSTORM_PKT_DUPLICATION_CFG].base \
	+ ((pf_id) * IRO[IRO_TSTORM_PKT_DUPLICATION_CFG].m1))
#define TSTORM_PKT_DUPLICATION_CFG_SIZE \
				(IRO[IRO_TSTORM_PKT_DUPLICATION_CFG].size)

/* Tstorm port statistics */
#define TSTORM_PORT_STAT_OFFSET(port_id) \
	(IRO[IRO_TSTORM_PORT_STAT].base  \
	 + ((port_id) * IRO[IRO_TSTORM_PORT_STAT].m1))
#define TSTORM_PORT_STAT_SIZE (IRO[IRO_TSTORM_PORT_STAT].size)

/* Tstorm error level for assert */
#define TSTORM_RDMA_ASSERT_LEVEL_OFFSET(pf_id)  \
	(IRO[IRO_TSTORM_RDMA_ASSERT_LEVEL].base \
	 + ((pf_id) * IRO[IRO_TSTORM_RDMA_ASSERT_LEVEL].m1))
#define TSTORM_RDMA_ASSERT_LEVEL_SIZE (IRO[IRO_TSTORM_RDMA_ASSERT_LEVEL].size)

/* Tstorm RDMA queue statistics */
#define TSTORM_RDMA_QUEUE_STAT_OFFSET(rdma_stat_counter_id) \
	(IRO[IRO_TSTORM_RDMA_QUEUE_STAT].base               \
	 + ((rdma_stat_counter_id) * IRO[IRO_TSTORM_RDMA_QUEUE_STAT].m1))
#define TSTORM_RDMA_QUEUE_STAT_SIZE (IRO[IRO_TSTORM_RDMA_QUEUE_STAT].size)

/* Tstorm RoCE Event Statistics */
#define TSTORM_ROCE_EVENTS_STAT_OFFSET(roce_pf_id) \
	(IRO[IRO_TSTORM_ROCE_EVENTS_STAT].base     \
	 + ((roce_pf_id) * IRO[IRO_TSTORM_ROCE_EVENTS_STAT].m1))
#define TSTORM_ROCE_EVENTS_STAT_SIZE (IRO[IRO_TSTORM_ROCE_EVENTS_STAT].size)

/* Tstorm (reflects M-Storm) bdq-external-producer of given function ID,
 * BDqueue-id.
 */
#define TSTORM_SCSI_BDQ_EXT_PROD_GTT_OFFSET(storage_func_id, bdq_id)      \
	(IRO[IRO_TSTORM_SCSI_BDQ_EXT_PROD_GTT].base                       \
	 + ((storage_func_id) * IRO[IRO_TSTORM_SCSI_BDQ_EXT_PROD_GTT].m1) \
	 + ((bdq_id) * IRO[IRO_TSTORM_SCSI_BDQ_EXT_PROD_GTT].m2))
#define TSTORM_SCSI_BDQ_EXT_PROD_GTT_SIZE \
				(IRO[IRO_TSTORM_SCSI_BDQ_EXT_PROD_GTT].size)

/* Tstorm cmdq-cons of given command queue-id */
#define TSTORM_SCSI_CMDQ_CONS_GTT_OFFSET(cmdq_queue_id) \
	(IRO[IRO_TSTORM_SCSI_CMDQ_CONS_GTT].base        \
	 + ((cmdq_queue_id) * IRO[IRO_TSTORM_SCSI_CMDQ_CONS_GTT].m1))
#define TSTORM_SCSI_CMDQ_CONS_GTT_SIZE \
				(IRO[IRO_TSTORM_SCSI_CMDQ_CONS_GTT].size)

/* Ustorm Common Queue ring consumer */
#define USTORM_COMMON_QUEUE_CONS_GTT_OFFSET(queue_zone_id) \
	(IRO[IRO_USTORM_COMMON_QUEUE_CONS_GTT].base        \
	 + ((queue_zone_id) * IRO[IRO_USTORM_COMMON_QUEUE_CONS_GTT].m1))
#define USTORM_COMMON_QUEUE_CONS_GTT_SIZE \
				(IRO[IRO_USTORM_COMMON_QUEUE_CONS_GTT].size)

/* Ustorm Event ring consumer */
#define USTORM_EQE_CONS_GTT_OFFSET(pf_id)  \
	(IRO[IRO_USTORM_EQE_CONS_GTT].base \
	 + ((pf_id) * IRO[IRO_USTORM_EQE_CONS_GTT].m1))
#define USTORM_EQE_CONS_GTT_SIZE (IRO[IRO_USTORM_EQE_CONS_GTT].size)

/* Ustorm pf statistics */
#define USTORM_ETH_PF_STAT_OFFSET(pf_id)  \
	(IRO[IRO_USTORM_ETH_PF_STAT].base \
	 + ((pf_id) * IRO[IRO_USTORM_ETH_PF_STAT].m1))
#define USTORM_ETH_PF_STAT_SIZE	(IRO[IRO_USTORM_ETH_PF_STAT].size)

/* Ustorm eth queue zone */
#define USTORM_ETH_QUEUE_ZONE_GTT_OFFSET(queue_zone_id) \
	(IRO[IRO_USTORM_ETH_QUEUE_ZONE_GTT].base        \
	 + ((queue_zone_id) * IRO[IRO_USTORM_ETH_QUEUE_ZONE_GTT].m1))
#define USTORM_ETH_QUEUE_ZONE_GTT_SIZE (IRO[IRO_USTORM_ETH_QUEUE_ZONE_GTT].size)

/* Ustorm Final flr cleanup ack */
#define USTORM_FLR_FINAL_ACK_GTT_OFFSET(pf_id)  \
	(IRO[IRO_USTORM_FLR_FINAL_ACK_GTT].base \
	 + ((pf_id) * IRO[IRO_USTORM_FLR_FINAL_ACK_GTT].m1))
#define USTORM_FLR_FINAL_ACK_GTT_SIZE (IRO[IRO_USTORM_FLR_FINAL_ACK_GTT].size)

/* Ustorm Integration Test Data */
#define USTORM_INTEG_TEST_DATA_OFFSET (IRO[IRO_USTORM_INTEG_TEST_DATA].base)
#define USTORM_INTEG_TEST_DATA_SIZE (IRO[IRO_USTORM_INTEG_TEST_DATA].size)

/* Ustorm iSCSI RX stats */
#define USTORM_ISCSI_RX_STATS_OFFSET(storage_func_id) \
	(IRO[IRO_USTORM_ISCSI_RX_STATS].base          \
	 + ((storage_func_id) * IRO[IRO_USTORM_ISCSI_RX_STATS].m1))
#define USTORM_ISCSI_RX_STATS_SIZE (IRO[IRO_USTORM_ISCSI_RX_STATS].size)

/* Ustorm overlay buffer host address */
#define USTORM_OVERLAY_BUF_ADDR_OFFSET (IRO[IRO_USTORM_OVERLAY_BUF_ADDR].base)
#define USTORM_OVERLAY_BUF_ADDR_SIZE (IRO[IRO_USTORM_OVERLAY_BUF_ADDR].size)

/* Ustorm queue statistics */
#define USTORM_QUEUE_STAT_OFFSET(stat_counter_id) \
	(IRO[IRO_USTORM_QUEUE_STAT].base          \
	 + ((stat_counter_id) * IRO[IRO_USTORM_QUEUE_STAT].m1))
#define USTORM_QUEUE_STAT_SIZE (IRO[IRO_USTORM_QUEUE_STAT].size)

/* Ustorm error level for assert */
#define USTORM_RDMA_ASSERT_LEVEL_OFFSET(pf_id)  \
	(IRO[IRO_USTORM_RDMA_ASSERT_LEVEL].base \
	 + ((pf_id) * IRO[IRO_USTORM_RDMA_ASSERT_LEVEL].m1))
#define USTORM_RDMA_ASSERT_LEVEL_SIZE (IRO[IRO_USTORM_RDMA_ASSERT_LEVEL].size)

/* RoCE CQEs Statistics */
#define USTORM_ROCE_CQE_STATS_OFFSET(roce_pf_id) \
	(IRO[IRO_USTORM_ROCE_CQE_STATS].base     \
	 + ((roce_pf_id) * IRO[IRO_USTORM_ROCE_CQE_STATS].m1))
#define USTORM_ROCE_CQE_STATS_SIZE (IRO[IRO_USTORM_ROCE_CQE_STATS].size)

/* Ustorm cqe producer */
#define USTORM_TOE_CQ_PROD_OFFSET(rss_id) \
	(IRO[IRO_USTORM_TOE_CQ_PROD].base \
	 + ((rss_id) * IRO[IRO_USTORM_TOE_CQ_PROD].m1))
#define USTORM_TOE_CQ_PROD_SIZE (IRO[IRO_USTORM_TOE_CQ_PROD].size)

/* Ustorm grq producer */
#define USTORM_TOE_GRQ_PROD_OFFSET(pf_id)  \
	(IRO[IRO_USTORM_TOE_GRQ_PROD].base \
	 + ((pf_id) * IRO[IRO_USTORM_TOE_GRQ_PROD].m1))
#define USTORM_TOE_GRQ_PROD_SIZE (IRO[IRO_USTORM_TOE_GRQ_PROD].size)

/* Ustorm VF-PF Channel ready flag */
#define USTORM_VF_PF_CHANNEL_READY_GTT_OFFSET(vf_id)  \
	(IRO[IRO_USTORM_VF_PF_CHANNEL_READY_GTT].base \
	 + ((vf_id) * IRO[IRO_USTORM_VF_PF_CHANNEL_READY_GTT].m1))
#define USTORM_VF_PF_CHANNEL_READY_GTT_SIZE \
				(IRO[IRO_USTORM_VF_PF_CHANNEL_READY_GTT].size)

/* Xstorm queue zone */
#define XSTORM_ETH_QUEUE_ZONE_GTT_OFFSET(queue_id) \
	(IRO[IRO_XSTORM_ETH_QUEUE_ZONE_GTT].base   \
	 + ((queue_id) * IRO[IRO_XSTORM_ETH_QUEUE_ZONE_GTT].m1))
#define XSTORM_ETH_QUEUE_ZONE_GTT_SIZE (IRO[IRO_XSTORM_ETH_QUEUE_ZONE_GTT].size)

/* Xstorm Integration Test Data */
#define XSTORM_INTEG_TEST_DATA_OFFSET (IRO[IRO_XSTORM_INTEG_TEST_DATA].base)
#define XSTORM_INTEG_TEST_DATA_SIZE (IRO[IRO_XSTORM_INTEG_TEST_DATA].size)

/* Xstorm iSCSI TX stats */
#define XSTORM_ISCSI_TX_STATS_OFFSET(storage_func_id) \
	(IRO[IRO_XSTORM_ISCSI_TX_STATS].base          \
	 + ((storage_func_id) * IRO[IRO_XSTORM_ISCSI_TX_STATS].m1))
#define XSTORM_ISCSI_TX_STATS_SIZE (IRO[IRO_XSTORM_ISCSI_TX_STATS].size)

/* Xstorm iWARP rxmit stats */
#define XSTORM_IWARP_RXMIT_STATS_OFFSET(pf_id)  \
	(IRO[IRO_XSTORM_IWARP_RXMIT_STATS].base \
	 + ((pf_id) * IRO[IRO_XSTORM_IWARP_RXMIT_STATS].m1))
#define XSTORM_IWARP_RXMIT_STATS_SIZE (IRO[IRO_XSTORM_IWARP_RXMIT_STATS].size)

/* Xstorm overlay buffer host address */
#define XSTORM_OVERLAY_BUF_ADDR_OFFSET (IRO[IRO_XSTORM_OVERLAY_BUF_ADDR].base)
#define XSTORM_OVERLAY_BUF_ADDR_SIZE (IRO[IRO_XSTORM_OVERLAY_BUF_ADDR].size)

/* Xstorm common PQ info */
#define XSTORM_PQ_INFO_OFFSET(pq_id)  \
	(IRO[IRO_XSTORM_PQ_INFO].base \
	 + ((pq_id) * IRO[IRO_XSTORM_PQ_INFO].m1))
#define XSTORM_PQ_INFO_SIZE (IRO[IRO_XSTORM_PQ_INFO].size)

/* Xstorm error level for assert */
#define XSTORM_RDMA_ASSERT_LEVEL_OFFSET(pf_id)  \
	(IRO[IRO_XSTORM_RDMA_ASSERT_LEVEL].base \
	 + ((pf_id) * IRO[IRO_XSTORM_RDMA_ASSERT_LEVEL].m1))
#define XSTORM_RDMA_ASSERT_LEVEL_SIZE (IRO[IRO_XSTORM_RDMA_ASSERT_LEVEL].size)

/* Ystorm flow control mode. Use enum fw_flow_ctrl_mode */
#define YSTORM_FLOW_CONTROL_MODE_GTT_OFFSET \
				(IRO[IRO_YSTORM_FLOW_CONTROL_MODE_GTT].base)
#define YSTORM_FLOW_CONTROL_MODE_GTT_SIZE \
				(IRO[IRO_YSTORM_FLOW_CONTROL_MODE_GTT].size)

/* Ystorm Integration Test Data */
#define YSTORM_INTEG_TEST_DATA_OFFSET (IRO[IRO_YSTORM_INTEG_TEST_DATA].base)
#define YSTORM_INTEG_TEST_DATA_SIZE (IRO[IRO_YSTORM_INTEG_TEST_DATA].size)

/* Ystorm iSCSI TX stats */
#define YSTORM_ISCSI_TX_STATS_OFFSET(storage_func_id) \
	(IRO[IRO_YSTORM_ISCSI_TX_STATS].base          \
	 + ((storage_func_id) * IRO[IRO_YSTORM_ISCSI_TX_STATS].m1))
#define YSTORM_ISCSI_TX_STATS_SIZE (IRO[IRO_YSTORM_ISCSI_TX_STATS].size)

/* Ystorm overlay buffer host address */
#define YSTORM_OVERLAY_BUF_ADDR_OFFSET (IRO[IRO_YSTORM_OVERLAY_BUF_ADDR].base)
#define YSTORM_OVERLAY_BUF_ADDR_SIZE (IRO[IRO_YSTORM_OVERLAY_BUF_ADDR].size)

/* Ystorm error level for assert */
#define YSTORM_RDMA_ASSERT_LEVEL_OFFSET(pf_id)  \
	(IRO[IRO_YSTORM_RDMA_ASSERT_LEVEL].base \
	 + ((pf_id) * IRO[IRO_YSTORM_RDMA_ASSERT_LEVEL].m1))
#define YSTORM_RDMA_ASSERT_LEVEL_SIZE (IRO[IRO_YSTORM_RDMA_ASSERT_LEVEL].size)

/* DCQCN Received Statistics */
#define YSTORM_ROCE_DCQCN_RECEIVED_STATS_OFFSET(roce_pf_id) \
	(IRO[IRO_YSTORM_ROCE_DCQCN_RECEIVED_STATS].base     \
	 + ((roce_pf_id) * IRO[IRO_YSTORM_ROCE_DCQCN_RECEIVED_STATS].m1))
#define YSTORM_ROCE_DCQCN_RECEIVED_STATS_SIZE \
			(IRO[IRO_YSTORM_ROCE_DCQCN_RECEIVED_STATS].size)

/* RoCE Error Statistics */
#define YSTORM_ROCE_ERROR_STATS_OFFSET(roce_pf_id) \
	(IRO[IRO_YSTORM_ROCE_ERROR_STATS].base     \
	 + ((roce_pf_id) * IRO[IRO_YSTORM_ROCE_ERROR_STATS].m1))
#define YSTORM_ROCE_ERROR_STATS_SIZE (IRO[IRO_YSTORM_ROCE_ERROR_STATS].size)

/* Ystorm cqe producer */
#define YSTORM_TOE_CQ_PROD_OFFSET(rss_id) \
	(IRO[IRO_YSTORM_TOE_CQ_PROD].base \
	 + ((rss_id) * IRO[IRO_YSTORM_TOE_CQ_PROD].m1))
#define YSTORM_TOE_CQ_PROD_SIZE (IRO[IRO_YSTORM_TOE_CQ_PROD].size)

/* Per-chip offsets in iro_arr in dwords */
#define E4_IRO_ARR_OFFSET    0
#endif
