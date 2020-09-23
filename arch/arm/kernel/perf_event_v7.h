/*
 * Common ARMv7 event types
 *
 * Note: An implementation may not be able to count all of these events
 * but the encodings are considered to be `reserved' in the case that
 * they are not available.
 */
#define ARMV7_PERFCTR_PMNC_SW_INCR			0x00
#define ARMV7_PERFCTR_L1_ICACHE_REFILL			0x01
#define ARMV7_PERFCTR_ITLB_REFILL			0x02
#define ARMV7_PERFCTR_L1_DCACHE_REFILL			0x03
#define ARMV7_PERFCTR_L1_DCACHE_ACCESS			0x04
#define ARMV7_PERFCTR_DTLB_REFILL			0x05
#define ARMV7_PERFCTR_MEM_READ				0x06
#define ARMV7_PERFCTR_MEM_WRITE				0x07
#define ARMV7_PERFCTR_INSTR_EXECUTED			0x08
#define ARMV7_PERFCTR_EXC_TAKEN				0x09
#define ARMV7_PERFCTR_EXC_EXECUTED			0x0A
#define ARMV7_PERFCTR_CID_WRITE				0x0B

/*
 * ARMV7_PERFCTR_PC_WRITE is equivalent to HW_BRANCH_INSTRUCTIONS.
 * It counts:
 *  - all (taken) branch instructions,
 *  - instructions that explicitly write the PC,
 *  - exception generating instructions.
 */
#define ARMV7_PERFCTR_PC_WRITE				0x0C
#define ARMV7_PERFCTR_PC_IMM_BRANCH			0x0D
#define ARMV7_PERFCTR_PC_PROC_RETURN			0x0E
#define ARMV7_PERFCTR_MEM_UNALIGNED_ACCESS		0x0F
#define ARMV7_PERFCTR_PC_BRANCH_MIS_PRED		0x10
#define ARMV7_PERFCTR_CLOCK_CYCLES			0x11
#define ARMV7_PERFCTR_PC_BRANCH_PRED			0x12

/* These events are defined by the PMUv2 supplement (ARM DDI 0457A). */
#define ARMV7_PERFCTR_MEM_ACCESS			0x13
#define ARMV7_PERFCTR_L1_ICACHE_ACCESS			0x14
#define ARMV7_PERFCTR_L1_DCACHE_WB			0x15
#define ARMV7_PERFCTR_L2_CACHE_ACCESS			0x16
#define ARMV7_PERFCTR_L2_CACHE_REFILL			0x17
#define ARMV7_PERFCTR_L2_CACHE_WB			0x18
#define ARMV7_PERFCTR_BUS_ACCESS			0x19
#define ARMV7_PERFCTR_MEM_ERROR				0x1A
#define ARMV7_PERFCTR_INSTR_SPEC			0x1B
#define ARMV7_PERFCTR_TTBR_WRITE			0x1C
#define ARMV7_PERFCTR_BUS_CYCLES			0x1D

#define ARMV7_PERFCTR_CPU_CYCLES			0xFF

/* ARMv7 Cortex-A8 specific event types */
#define ARMV7_A8_PERFCTR_L2_CACHE_ACCESS		0x43
#define ARMV7_A8_PERFCTR_L2_CACHE_REFILL		0x44
#define ARMV7_A8_PERFCTR_L1_ICACHE_ACCESS		0x50
#define ARMV7_A8_PERFCTR_STALL_ISIDE			0x56

/* ARMv7 Cortex-A9 specific event types */
#define ARMV7_A9_PERFCTR_INSTR_CORE_RENAME		0x68
#define ARMV7_A9_PERFCTR_STALL_ICACHE			0x60
#define ARMV7_A9_PERFCTR_STALL_DISPATCH			0x66

/* ARMv7 Cortex-A5 specific event types */
#define ARMV7_A5_PERFCTR_PREFETCH_LINEFILL		0xc2
#define ARMV7_A5_PERFCTR_PREFETCH_LINEFILL_DROP		0xc3

/* ARMv7 Cortex-A15 specific event types */
#define ARMV7_A15_PERFCTR_L1_DCACHE_ACCESS_READ		0x40
#define ARMV7_A15_PERFCTR_L1_DCACHE_ACCESS_WRITE	0x41
#define ARMV7_A15_PERFCTR_L1_DCACHE_REFILL_READ		0x42
#define ARMV7_A15_PERFCTR_L1_DCACHE_REFILL_WRITE	0x43

#define ARMV7_A15_PERFCTR_DTLB_REFILL_L1_READ		0x4C
#define ARMV7_A15_PERFCTR_DTLB_REFILL_L1_WRITE		0x4D

#define ARMV7_A15_PERFCTR_L2_CACHE_ACCESS_READ		0x50
#define ARMV7_A15_PERFCTR_L2_CACHE_ACCESS_WRITE		0x51
#define ARMV7_A15_PERFCTR_L2_CACHE_REFILL_READ		0x52
#define ARMV7_A15_PERFCTR_L2_CACHE_REFILL_WRITE		0x53

#define ARMV7_A15_PERFCTR_PC_WRITE_SPEC			0x76

/* ARMv7 Cortex-A12 specific event types */
#define ARMV7_A12_PERFCTR_L1_DCACHE_ACCESS_READ		0x40
#define ARMV7_A12_PERFCTR_L1_DCACHE_ACCESS_WRITE	0x41

#define ARMV7_A12_PERFCTR_L2_CACHE_ACCESS_READ		0x50
#define ARMV7_A12_PERFCTR_L2_CACHE_ACCESS_WRITE		0x51

#define ARMV7_A12_PERFCTR_PC_WRITE_SPEC			0x76

#define ARMV7_A12_PERFCTR_PF_TLB_REFILL			0xe7

/* ARMv7 Krait specific event types */
#define KRAIT_PMRESR0_GROUP0				0xcc
#define KRAIT_PMRESR1_GROUP0				0xd0
#define KRAIT_PMRESR2_GROUP0				0xd4
#define KRAIT_VPMRESR0_GROUP0				0xd8

#define KRAIT_PERFCTR_L1_ICACHE_ACCESS			0x10011
#define KRAIT_PERFCTR_L1_ICACHE_MISS			0x10010

#define KRAIT_PERFCTR_L1_ITLB_ACCESS			0x12222
#define KRAIT_PERFCTR_L1_DTLB_ACCESS			0x12210

/* ARMv7 Scorpion specific event types */
#define SCORPION_LPM0_GROUP0				0x4c
#define SCORPION_LPM1_GROUP0				0x50
#define SCORPION_LPM2_GROUP0				0x54
#define SCORPION_L2LPM_GROUP0				0x58
#define SCORPION_VLPM_GROUP0				0x5c

#define SCORPION_ICACHE_ACCESS				0x10053
#define SCORPION_ICACHE_MISS				0x10052

#define SCORPION_DTLB_ACCESS				0x12013
#define SCORPION_DTLB_MISS				0x12012

#define SCORPION_ITLB_MISS				0x12021

/*
 * Perf Events' indices
 */
#define	ARMV7_IDX_CYCLE_COUNTER	0
#define	ARMV7_IDX_COUNTER0	1
#define	ARMV7_IDX_COUNTER_LAST(cpu_pmu) \
	(ARMV7_IDX_CYCLE_COUNTER + cpu_pmu->num_events - 1)

#define	ARMV7_MAX_COUNTERS	32
#define	ARMV7_COUNTER_MASK	(ARMV7_MAX_COUNTERS - 1)

/*
 * ARMv7 low level PMNC access
 */

/*
 * Perf Event to low level counters mapping
 */
#define	ARMV7_IDX_TO_COUNTER(x)	\
	(((x) - ARMV7_IDX_COUNTER0) & ARMV7_COUNTER_MASK)

/*
 * Per-CPU PMNC: config reg
 */
#define ARMV7_PMNC_E		(1 << 0) /* Enable all counters */
#define ARMV7_PMNC_P		(1 << 1) /* Reset all counters */
#define ARMV7_PMNC_C		(1 << 2) /* Cycle counter reset */
#define ARMV7_PMNC_D		(1 << 3) /* CCNT counts every 64th cpu cycle */
#define ARMV7_PMNC_X		(1 << 4) /* Export to ETM */
#define ARMV7_PMNC_DP		(1 << 5) /* Disable CCNT if non-invasive debug*/
#define	ARMV7_PMNC_N_SHIFT	11	 /* Number of counters supported */
#define	ARMV7_PMNC_N_MASK	0x1f
#define	ARMV7_PMNC_MASK		0x3f	 /* Mask for writable bits */

/*
 * FLAG: counters overflow flag status reg
 */
#define	ARMV7_FLAG_MASK		0xffffffff	/* Mask for writable bits */
#define	ARMV7_OVERFLOWED_MASK	ARMV7_FLAG_MASK

/*
 * PMXEVTYPER: Event selection reg
 */
#define	ARMV7_EVTYPE_MASK	0xc80000ff	/* Mask for writable bits */
#define	ARMV7_EVTYPE_EVENT	0xff		/* Mask for EVENT bits */

/*
 * Event filters for PMUv2
 */
#define	ARMV7_EXCLUDE_PL1	BIT(31)
#define	ARMV7_EXCLUDE_USER	BIT(30)
#define	ARMV7_INCLUDE_HYP	BIT(27)

/*
 * Secure debug enable reg
 */
#define ARMV7_SDER_SUNIDEN	BIT(1) /* Permit non-invasive debug */

static inline u32 armv7_pmnc_read(void)
{
	u32 val;
	asm volatile("mrc p15, 0, %0, c9, c12, 0" : "=r"(val));
	return val;
}

static inline void armv7_pmnc_write(u32 val)
{
	val &= ARMV7_PMNC_MASK;
	isb();
	asm volatile("mcr p15, 0, %0, c9, c12, 0" : : "r"(val));
}

static inline void armv7_pmnc_select_counter(int idx)
{
	u32 counter = ARMV7_IDX_TO_COUNTER(idx);
	asm volatile("mcr p15, 0, %0, c9, c12, 5" : : "r" (counter));
	isb();
}

static inline void armv7_pmnc_write_evtsel(int idx, u32 val)
{
	armv7_pmnc_select_counter(idx);
	val &= ARMV7_EVTYPE_MASK;
	asm volatile("mcr p15, 0, %0, c9, c13, 1" : : "r" (val));
}