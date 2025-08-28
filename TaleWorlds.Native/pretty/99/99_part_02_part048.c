/**
 * 99_part_02_part048.c - ûß§pnŒ…X¡!W
 * 
 * ,!W+20*8Ãıp;Ğ›åŸı
 * - ¹hpnÓ„ŒÍ\¡
 * - …XMŒÊ>
 * - ÈhpnÓ„Í\
 * - ¨pÄi¹ŒÍM
 * - DŒï
 * - pnA§6Œ¶¡
 * 
 * å!W/TaleWorldsÎ8Ãûß„ÍÄè:
B”(Ğ›
 * ØH„pnŒ…X¡¡
 */

/*============================================================================
  8ÏšIŒšI
============================================================================*/

/* …XùPŒ'8Ï */
#define DEFAULT_ALIGNMENT_8        8           /* Ø¤8W‚ùP */
#define DEFAULT_ALIGNMENT_16       16          /* Ø¤16W‚ùP */
#define DEFAULT_ALIGNMENT_32       32          /* Ø¤32W‚ùP */
#define DEFAULT_ALIGNMENT_64       64          /* Ø¤64W‚ùP */
#define DEFAULT_ALIGNMENT_128      128         /* Ø¤128W‚ùP */

/* ¹h'8Ï */
#define CONTAINER_HEADER_SIZE      0x28        /* ¹h4è'40W‚ */
#define CONTAINER_ELEMENT_SIZE     0x88        /* ¹hC '136W‚ */
#define CONTAINER_SMALL_SIZE       0x420       /* ¹h'1056W‚ */
#define CONTAINER_MEDIUM_SIZE      0xbc        /* -I¹h'188W‚ */
#define CONTAINER_LARGE_SIZE       0x34        /* '¹h'52W‚ */

/* Èhøs8Ï */
#define HASH_TABLE_SIZE_1024       0x400       /* Èh'1024*aî */
#define HASH_TABLE_SIZE_4096       0x1000      /* Èh'4096*aî */
#define HASH_PRIME_64BIT           0x100000001b3 /* 64MÈ(p */
#define HASH_SEED_64BIT            0xcbf29ce484222325 /* 64MÈÍP */

/* …XM8Ï */
#define MEMORY_BLOCK_SMALL         0x2000      /* …XW8KB */
#define MEMORY_BLOCK_MEDIUM        0x8000      /* -I…XW32KB */
#define MEMORY_BLOCK_LARGE         0x20000     /* '…XW128KB */
#define MEMORY_ALLOCATOR_ID        0x25        /* …XMhID */

/* ïã8Ï */
#define ERROR_INVALID_INDEX        0xffffffff  /* àH"< */
#define ERROR_NULL_POINTER         0x0         /* zˆï */
#define ERROR_MEMORY_FAILED        0x1         /* …XM1% */

/* §6×8Ï */
#define FLAG_CONTAINER_EXPAND     0x2         /* ¹hi¹× */
#define FLAG_MEMORY_LOCKED        0x4         /* …Xš× */
#define FLAG_INITIALIZED          0x8         /* ËŒ× */
#define FLAG_VALID_DATA           0x10        /* 	Hpn× */

/*============================================================================
  {‹šIŒÓ„SšI
============================================================================*/

/**
 * ¹h4èÓ„S
 * šI¹h„8ÃpnÓ„+…X¡áo
 */
typedef struct {
    void* data_start;              /* pnwË0@ */
    void* data_end;                /* pnÓ_0@ */
    void* data_capacity;           /* pn¹Ï0@ */
    uint32_t element_size;         /* C ' */
    uint32_t flags;                /* §6× */
    uint32_t reserved;             /* İYWµ */
} ContainerHeader;

/**
 * ÈhaîÓ„S
 * šIÈh„ú,pnÓ„
 */
typedef struct {
    void* key;                     /* .<ˆ */
    void* value;                   /* <ˆ */
    uint32_t hash_code;            /* È */
    uint32_t status;               /* ¶× */
} HashTableEntry;

/**
 * ¨pÄÓ„S
 * šI¨pÄ„pnÓ„
 */
typedef struct {
    void* array_data;              /* pÄpnˆ */
    size_t array_size;             /* pÄ' */
    size_t array_capacity;         /* pÄ¹Ï */
    uint32_t element_size;         /* C ' */
    uint32_t flags;                /* §6× */
} DynamicArray;

/**
 * …X¡hÓ„S
 * šI…X¡h„pnÓ„
 */
typedef struct {
    void* memory_pool;             /* …X`ˆ */
    size_t pool_size;              /* …X`' */
    size_t used_size;              /* ò(' */
    uint32_t allocator_id;         /* MhID */
    uint32_t flags;                /* §6× */
} MemoryManager;

/**
 * pnhÓ„S
 * šIpnh„pnÓ„
 */
typedef struct {
    void* input_data;              /* “epnˆ */
    void* output_data;             /* “úpnˆ */
    size_t data_size;              /* pn' */
    uint32_t processing_flags;     /* × */
    uint32_t status;               /* ¶× */
} DataProcessor;

/*============================================================================
  h@ØÏğ
============================================================================*/

/* h@…X¡h‹ */
static MemoryManager* g_global_memory_manager = NULL;

/* h@Èh‹ */
static HashTableEntry* g_global_hash_table = NULL;

/* h@¹h¡h */
static ContainerHeader* g_global_container = NULL;

/* h@pnh */
static DataProcessor* g_global_data_processor = NULL;

/* ûß¶× */
static uint32_t g_system_flags = 0;

/*============================================================================
  ıp+šI
============================================================================*/

/* ŸËıp+šI */
#define container_data_processor       FUN_1801b97dd
#define system_empty_function_1        FUN_1801b990e
#define container_cleaner              FUN_1801b9920
#define memory_manager_cleaner         FUN_1801b9974
#define memory_block_cleaner           FUN_1801b999c
#define array_initializer              FUN_1801b99e0
#define hash_table_allocator           FUN_1801b9a40
#define memory_block_allocator        FUN_1801b9a89
#define system_empty_function_2        FUN_1801b9b2d
#define hash_table_lookup             FUN_1801b9b90
#define container_expander            FUN_1801b9c70
#define container_reallocator         FUN_1801b9cad
#define system_error_handler          FUN_1801b9d63
#define array_reallocator_12byte      FUN_1801b9da0
#define array_reallocator_52byte      FUN_1801b9eb0
#define array_reallocator_1056byte    FUN_1801b9fc0
#define array_reallocator_188byte     FUN_1801ba230
#define array_cleaner                 FUN_1801ba340
#define hash_table_entry_finder       FUN_1801ba400
#define container_iterator           FUN_1801ba4d0
#define array_element_remover         FUN_1801ba580
#define array_element_mover           FUN_1801ba5d0
#define array_expander                FUN_1801ba612
#define system_empty_function_3       FUN_1801ba6cc
#define pointer_offset_calculator     FUN_1801ba6f6
#define system_empty_function_4       FUN_1801ba708

/*============================================================================
  8Ãıp°
============================================================================*/

/**
 * ¹hpnh
 * 
 * ŸıÏğ
 * ¹h-„pnìpnŒÁlbŒX¨Í\
 * 
 * Âp
 *   param_1 - ¹h'Âp
 *   param_2 - pn×
 *   param_3 - İYÂp
 *   param_4 - ¹hpnˆ
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp/¹hpn„8Ãıp#¹h-„pnC 
 * (ÌÍª¯Ó„Œôpn/¨i¹ŒpnŒÁ
 */
void FUN_1801b97dd(int param_1, int param_2, undefined8 param_3, longlong *param_4)
{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 unaff_R12D;
    int unaff_R13D;
    int unaff_R15D;
    int iStackX_20;
    int iStackX_24;
    longlong *in_stack_00000060;
    
    iVar3 = param_1;
    do {
        while (unaff_R15D < param_1) {
            unaff_R13D = unaff_R13D + 1;
            param_1 = iVar3;
            if (param_2 < unaff_R13D) {
                return;
            }
        }
        lVar4 = (longlong)(unaff_R13D * *(int *)((longlong)param_4 + 0x24) + param_1);
        lVar1 = *param_4 + lVar4 * 0x28;
        FUN_1801bb0b0(lVar1 + 8, (longlong)*(int *)(*param_4 + lVar4 * 0x28));
        puVar7 = *(undefined4 **)(lVar1 + 0x10);
        if (puVar7 < *(undefined4 **)(lVar1 + 0x18)) {
            *(undefined4 **)(lVar1 + 0x10) = puVar7 + 1;
            *puVar7 = unaff_R12D;
        }
        else {
            puVar6 = *(undefined4 **)(lVar1 + 8);
            lVar4 = (longlong)puVar7 - (longlong)puVar6 >> 2;
            if (lVar4 == 0) {
                lVar4 = 1;
LAB_1801b9874:
                plVar2 = *(longlong **)(lVar1 + 0x20);
                uVar5 = (longlong)((int)plVar2[2] + 0xf) & 0xfffffffffffffff0;
                puVar8 = (undefined4 *)(*plVar2 + uVar5);
                *(int *)(plVar2 + 2) = (int)uVar5 + (int)lVar4 * 4;
                puVar7 = *(undefined4 **)(lVar1 + 0x10);
                puVar6 = *(undefined4 **)(lVar1 + 8);
            }
            else {
                lVar4 = lVar4 * 2;
                if (lVar4 != 0) goto LAB_1801b9874;
                puVar8 = (undefined4 *)0x0;
            }
            if (puVar6 != puVar7) {
                // WARNING: Subroutine does not return
                memmove(puVar8, puVar6, (longlong)puVar7 - (longlong)puVar6);
            }
            *puVar8 = unaff_R12D;
            *(undefined4 **)(lVar1 + 0x10) = puVar8 + 1;
            *(undefined4 **)(lVar1 + 0x18) = puVar8 + lVar4;
            *(undefined4 **)(lVar1 + 8) = puVar8;
        }
        param_4 = in_stack_00000060;
        param_1 = param_1 + 1;
        iVar3 = iStackX_20;
        param_2 = iStackX_24;
    } while( true );
}

/**
 * ûßzıp1
 * 
 * ŸıÏğ
 * ûßzıp(`MŒ¥ã|¹'
 * 
 * Âp
 *   àÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp:ûßzıp;(¥ã|¹'Œ`M(
 */
void FUN_1801b990e(void)
{
    return;
}

/**
 * ¹hh
 * 
 * ŸıÏğ
 * ¹h-„pnÊ>…XD
 * 
 * Âp
 *   param_1 - ¹hpnˆ
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#¹h-„@	pnìÊ>…XŒÍn¶
 * (ÌÍª¯Ó„Œô¹hpn
 */
void FUN_1801b9920(longlong *param_1)
{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    
    iVar5 = 0;
    if (0 < (int)param_1[4]) {
        do {
            iVar4 = 0;
            if (0 < *(int *)((longlong)param_1 + 0x24)) {
                do {
                    iVar2 = *(int *)((longlong)param_1 + 0x24) * iVar5 + iVar4;
                    iVar4 = iVar4 + 1;
                    lVar3 = (longlong)iVar2;
                    *(undefined8 *)(*param_1 + 0x10 + lVar3 * 0x28) =
                         *(undefined8 *)(*param_1 + 8 + lVar3 * 0x28);
                } while (iVar4 < *(int *)((longlong)param_1 + 0x24));
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1[4]);
    }
    if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
        if (*plVar1 != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        *plVar1 = 0;
        param_1[5] = 0;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
}

/**
 * …X¡hh
 * 
 * ŸıÏğ
 * …X¡hÊ>@	M„…XD
 * 
 * Âp
 *   àÂp(ÄXh Âp	
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#…X¡h-„@	…XDì…X`ŒøspnÓ„
 */
void FUN_1801b9974(void)
{
    longlong *plVar1;
    longlong unaff_RBX;
    longlong unaff_RSI;
    
    plVar1 = *(longlong **)(unaff_RBX + 0x28);
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        *plVar1 = unaff_RSI;
        *(longlong *)(unaff_RBX + 0x28) = unaff_RSI;
    }
    *(longlong *)(unaff_RBX + 8) = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x10) = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x18) = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x20) = unaff_RSI;
    return;
}

/**
 * …XWh
 * 
 * ŸıÏğ
 * š„…XWÍn…X¶
 * 
 * Âp
 *   àÂp(ÄXh Âp	
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#š„…XW…X:ßÍn:Ë¶
 */
void FUN_1801b999c(void)
{
    longlong unaff_RBX;
    undefined8 unaff_RSI;
    
    *(undefined8 *)(unaff_RBX + 8) = unaff_RSI;
    *(undefined8 *)(unaff_RBX + 0x10) = unaff_RSI;
    *(undefined8 *)(unaff_RBX + 0x18) = unaff_RSI;
    *(undefined8 *)(unaff_RBX + 0x20) = unaff_RSI;
    return;
}

/**
 * pÄËh
 * 
 * ŸıÏğ
 * ËpÄpnÓ„M…Xv¾nË¶
 * 
 * Âp
 *   param_1 - pÄú0@
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ËpÄpnÓ„ì…XMŒ¶¾n
 * / '1024*C „pÄË
 */
void FUN_1801b99e0(longlong param_1)
{
    longlong lVar1;
    uint uVar2;
    longlong *plVar3;
    
    uVar2 = 0;
    plVar3 = (longlong *)(param_1 + 8);
    do {
        if (*plVar3 != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        lVar1 = (longlong)(int)uVar2;
        plVar3 = plVar3 + 1;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
    } while (uVar2 < 0x400);
    return;
}

/**
 * ÈhMh
 * 
 * ŸıÏğ
 * :ÈhM…XzôvËÈhÓ„
 * 
 * Âp
 *   param_1 - Èhˆ
 *   param_2 - M'
 * 
 * ÔŞ<
 *   uint - M„wË"
 * 
 * €/ô
 * åıp#:ÈhM…Xzô/¨i¹Œ¿‰hÍ\
 * (ubùP„…XMVe
 */
uint FUN_1801b9a40(uint *param_1, int param_2)
{
    uint uVar1;
    longlong lVar2;
    char *pcVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    uint *puVar8;
    bool bVar9;
    
    if (param_2 == 0) {
        return 0xffffffff;
    }
    LOCK();
    uVar1 = *param_1;
    *param_1 = *param_1 + param_2;
    UNLOCK();
    uVar5 = (ulonglong)(uVar1 >> 0xc);
    uVar6 = (ulonglong)(param_2 + -1 + uVar1 >> 0xc);
    if (uVar5 <= uVar6) {
        pcVar3 = (char *)((longlong)param_1 + uVar5 + 0x808);
        lVar7 = (uVar6 - uVar5) + 1;
        puVar8 = param_1 + (ulonglong)(uVar1 >> 0xc) * 2 + 2;
        do {
            iVar4 = (int)uVar5;
            if (*(longlong *)puVar8 == 0) {
                lVar2 = FUN_18062b420(_DAT_180c8ed18, 0x20000, 0x25);
                LOCK();
                bVar9 = *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) == 0;
                if (bVar9) {
                    *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) = lVar2;
                }
                UNLOCK();
                if (bVar9) {
                    func_0x0001801bb270(param_1, iVar4 << 0xc);
                    LOCK();
                    *(undefined1 *)((longlong)iVar4 + 0x808 + (longlong)param_1) = 0;
                    UNLOCK();
                }
                else {
                    if (lVar2 != 0) {
                        // WARNING: Subroutine does not return
                        FUN_18064e900();
                    }
                    do {
                    } while (*pcVar3 != '\0');
                }
            }
            else {
                do {
                } while (*pcVar3 != '\0');
            }
            uVar5 = (ulonglong)(iVar4 + 1);
            puVar8 = puVar8 + 2;
            pcVar3 = pcVar3 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    return uVar1;
}

/**
 * …XWMh
 * 
 * ŸıÏğ
 * M…XW/¿‰h„…XMÍ\
 * 
 * Âp
 *   param_1 - …X¡hˆ
 * 
 * ÔŞ<
 *   undefined4 - M¶
 * 
 * €/ô
 * åıp#M…XW/¿‰h„…XMŒËÍ\
 */
undefined4 FUN_1801b9a89(longlong param_1)
{
    longlong *plVar1;
    longlong in_RAX;
    longlong lVar2;
    char *pcVar3;
    longlong unaff_RBP;
    int iVar4;
    ulonglong unaff_RDI;
    undefined4 unaff_R12D;
    longlong unaff_R14;
    longlong lVar5;
    longlong *plVar6;
    bool bVar7;
    
    pcVar3 = (char *)(param_1 + 0x808 + unaff_RDI);
    lVar5 = (unaff_R14 - unaff_RDI) + 1;
    plVar6 = (longlong *)(param_1 + 8 + in_RAX * 8);
    do {
        iVar4 = (int)unaff_RDI;
        if (*plVar6 == 0) {
            lVar2 = FUN_18062b420(_DAT_180c8ed18, 0x20000, 0x25);
            plVar1 = (longlong *)(unaff_RBP + 8 + (longlong)iVar4 * 8);
            LOCK();
            bVar7 = *plVar1 == 0;
            if (bVar7) {
                *plVar1 = lVar2;
            }
            UNLOCK();
            if (bVar7) {
                func_0x0001801bb270();
                LOCK();
                *(undefined1 *)((longlong)iVar4 + 0x808 + unaff_RBP) = 0;
                UNLOCK();
            }
            else {
                if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                }
                do {
                } while (*pcVar3 != '\0');
            }
        }
        else {
            do {
            } while (*pcVar3 != '\0');
        }
        unaff_RDI = (ulonglong)(iVar4 + 1);
        plVar6 = plVar6 + 1;
        pcVar3 = pcVar3 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return unaff_R12D;
}

/**
 * ûßzıp2
 * 
 * ŸıÏğ
 * ûßzıp(`MŒ¥ã|¹'
 * 
 * Âp
 *   àÂp
 * 
 * ÔŞ<
 *   undefined4 - ÔŞ<
 * 
 * €/ô
 * åıp:ûßzıp;(¥ã|¹'Œ`M(
 */
undefined4 FUN_1801b9b2d(void)
{
    undefined4 unaff_R12D;
    
    return unaff_R12D;
}

/**
 * Èhå~h
 * 
 * ŸıÏğ
 * (Èh-å~š„.<ÔŞù”„W&<
 * 
 * Âp
 *   param_1 - Èhˆ
 *   param_2 - å~"
 * 
 * ÔŞ<
 *   char - å~0„W&<
 * 
 * €/ô
 * åıp#(Èh-å~š„.</¨…XMŒ¿‰hÍ\
 */
char FUN_1801b9b90(longlong param_1, int param_2)
{
    longlong *plVar1;
    char *pcVar2;
    char cVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;
    
    lVar5 = (longlong)param_2;
    if (*(longlong *)(param_1 + 8 + lVar5 * 8) != 0) {
        do {
            cVar3 = *(char *)(lVar5 + 0x808 + param_1);
        } while (cVar3 != '\0');
        return cVar3;
    }
    lVar4 = FUN_18062b420(_DAT_180c8ed18, 0x8000, 0x25);
    plVar1 = (longlong *)(param_1 + 8 + lVar5 * 8);
    LOCK();
    bVar6 = *plVar1 == 0;
    if (bVar6) {
        *plVar1 = lVar4;
    }
    UNLOCK();
    if (bVar6) {
        LOCK();
        pcVar2 = (char *)(lVar5 + 0x808 + param_1);
        cVar3 = *pcVar2;
        *pcVar2 = '\0';
        UNLOCK();
        return cVar3;
    }
    if (lVar4 == 0) {
        do {
            cVar3 = *(char *)(lVar5 + 0x808 + param_1);
        } while (cVar3 != '\0');
        return cVar3;
    }
    // WARNING: Subroutine does not return
    FUN_18064e900();
}

/**
 * ¹hi¹h
 * 
 * ŸıÏğ
 * iU¹h¹ÏÍ°M…Xv6pn
 * 
 * Âp
 *   param_1 - ¹hˆ
 *   param_2 - ¹hˆ
 *   param_3 - İYÂp
 *   param_4 - İYÂp
 * 
 * ÔŞ<
 *   longlong* - i¹„¹hˆ
 * 
 * €/ô
 * åıp#iU¹h¹Ï/¨i¹ŒpnÁûÍ\
 * (pi¹VeåĞØ'ı
 */
longlong * FUN_1801b9c70(longlong *param_1, longlong *param_2, undefined8 param_3, undefined8 param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plStackX_8;
    
    plVar4 = (longlong *)param_1[1];
    if (plVar4 < (longlong *)param_1[2]) {
        param_1[1] = (longlong)(plVar4 + 0x11);
        lVar6 = param_2[1] - *param_2 >> 3;
        uVar1 = *(uint *)(param_2 + 3);
        *(uint *)(plVar4 + 3) = uVar1;
        lVar3 = 0;
        lVar2 = lVar3;
        plStackX_8 = plVar4;
        if (lVar6 != 0) {
            lVar2 = FUN_18062b420(_DAT_180c8ed18, lVar6 * 8, uVar1 & 0xff, param_4, 0xfffffffffffffffe);
        }
        *plVar4 = lVar2;
        plVar4[1] = lVar2;
        plVar4[2] = lVar2 + lVar6 * 8;
        lVar2 = *param_2;
        if (lVar2 != param_2[1]) {
            // WARNING: Subroutine does not return
            memmove(*plVar4, lVar2, param_2[1] - lVar2);
        }
        plVar4[1] = *plVar4;
        plVar4[4] = param_2[4];
        lVar6 = param_2[6] - param_2[5] >> 4;
        uVar1 = *(uint *)(param_2 + 8);
        *(uint *)(plVar4 + 8) = uVar1;
        lVar2 = lVar3;
        if (lVar6 != 0) {
            lVar2 = FUN_18062b420(_DAT_180c8ed18, lVar6 << 4, uVar1 & 0xff);
        }
        plVar4[5] = lVar2;
        plVar4[6] = lVar2;
        plVar4[7] = lVar6 * 0x10 + lVar2;
        lVar2 = plVar4[5];
        lVar6 = param_2[5];
        if (lVar6 == param_2[6]) {
            plVar4[6] = lVar2;
            lVar6 = param_2[10] - param_2[9] >> 2;
            uVar1 = *(uint *)(param_2 + 0xc);
            *(uint *)(plVar4 + 0xc) = uVar1;
            lVar2 = lVar3;
            if (lVar6 != 0) {
                lVar2 = FUN_18062b420(_DAT_180c8ed18, lVar6 * 4, uVar1 & 0xff);
            }
            plVar4[9] = lVar2;
            plVar4[10] = lVar2;
            plVar4[0xb] = lVar2 + lVar6 * 4;
            lVar2 = plVar4[9];
            lVar6 = param_2[9];
            if (lVar6 == param_2[10]) {
                plVar4[10] = lVar2;
                lVar2 = (param_2[0xe] - param_2[0xd]) / 6 + (param_2[0xe] - param_2[0xd] >> 0x3f);
                lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
                uVar1 = *(uint *)(param_2 + 0x10);
                *(uint *)(plVar4 + 0x10) = uVar1;
                if (lVar2 != 0) {
                    lVar3 = FUN_18062b420(_DAT_180c8ed18, lVar2 * 0x18, uVar1 & 0xff);
                }
                plVar4[0xd] = lVar3;
                plVar4[0xe] = lVar3;
                plVar4[0xf] = lVar3 + lVar2 * 0x18;
                lVar2 = plVar4[0xd];
                lVar3 = param_2[0xd];
                if (lVar3 == param_2[0xe]) {
                    plVar4[0xe] = lVar2;
                    return plVar4;
                }
                // WARNING: Subroutine does not return
                memmove(lVar2, lVar3, param_2[0xe] - lVar3);
            }
            // WARNING: Subroutine does not return
            memmove(lVar2, lVar6, param_2[10] - lVar6);
        }
        // WARNING: Subroutine does not return
        memmove(lVar2, lVar6, param_2[6] - lVar6);
    }
    lVar2 = *param_1;
    lVar3 = ((longlong)plVar4 - lVar2) / 0x88;
    if (lVar3 == 0) {
        lVar3 = 1;
    }
    else {
        lVar3 = lVar3 * 2;
        if (lVar3 == 0) {
            lVar6 = 0;
            goto LAB_1801b9d0f;
        }
    }
    lVar6 = FUN_18062b420(_DAT_180c8ed18, lVar3 * 0x88, (char)param_1[3]);
    plVar4 = (longlong *)param_1[1];
    lVar2 = *param_1;
LAB_1801b9d0f:
    FUN_1801bd320(&plStackX_8, lVar2, plVar4, lVar6);
    FUN_18014c570(plStackX_8, param_2);
    lVar2 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar2) {
        do {
            FUN_18014c7d0(lVar5);
            lVar5 = lVar5 + 0x88;
        } while (lVar5 != lVar2);
        lVar5 = *param_1;
    }
    if (lVar5 == 0) {
        plVar4 = (longlong *)(lVar3 * 0x88 + lVar6);
        *param_1 = lVar6;
        param_1[1] = (longlong)(plStackX_8 + 0x11);
        param_1[2] = (longlong)plVar4;
        return plVar4;
    }
    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
}

/**
 * ¹hÍMh
 * 
 * ŸıÏğ
 * Í°M¹h…Xt¹h'
 * 
 * Âp
 *   param_1 - İYÂp
 *   param_2 - İYÂp
 *   param_3 - ¹hˆ
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#Í°M¹h…X/¨t¹h'
 */
void FUN_1801b9cad(undefined8 param_1, undefined8 param_2, longlong param_3)
{
    longlong lVar1;
    longlong lVar2;
    longlong in_RAX;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *unaff_RDI;
    longlong in_R10;
    longlong in_stack_00000050;
    
    lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10), 8);
    lVar4 = (lVar4 >> 6) - (lVar4 >> 0x3f);
    if (lVar4 == 0) {
        lVar4 = 1;
    }
    else {
        lVar4 = lVar4 * 2;
        if (lVar4 == 0) {
            lVar3 = 0;
            goto LAB_1801b9d0f;
        }
    }
    lVar3 = FUN_18062b420(_DAT_180c8ed18, lVar4 * 0x88, (char)unaff_RDI[3]);
    param_3 = unaff_RDI[1];
    in_R10 = *unaff_RDI;
LAB_1801b9d0f:
    FUN_1801bd320(&stack0x00000050, in_R10, param_3, lVar3);
    lVar2 = in_stack_00000050;
    FUN_18014c570(in_stack_00000050);
    lVar1 = unaff_RDI[1];
    lVar5 = *unaff_RDI;
    if (lVar5 != lVar1) {
        do {
            FUN_18014c7d0(lVar5);
            lVar5 = lVar5 + 0x88;
        } while (lVar5 != lVar1);
        lVar5 = *unaff_RDI;
    }
    if (lVar5 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
    }
    *unaff_RDI = lVar3;
    unaff_RDI[1] = lVar2 + 0x88;
    unaff_RDI[2] = lVar4 * 0x88 + lVar3;
    return;
}

/**
 * ûßïh
 * 
 * ŸıÏğ
 * ûßïgLïbÍ\
 * 
 * Âp
 *   àÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ûßïgLïbŒDÍ\
 */
void FUN_1801b9d63(void)
{
    // WARNING: Subroutine does not return
    FUN_18064e900();
}

/**
 * 12W‚pÄÍMh
 * 
 * ŸıÏğ
 * ÍM12W‚C „pÄtpÄ'
 * 
 * Âp
 *   param_1 - pÄˆ
 *   param_2 - İYÂp
 *   param_3 - İYÂp
 *   param_4 - İYÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ÍM12W‚C „pÄ/¨tpÄ'
 */
void FUN_1801b9da0(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    lVar2 = param_1[1];
    lVar3 = *param_1;
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 3);
    lVar6 = lVar2 - lVar3;
    lVar5 = lVar6 / 6 + (lVar6 >> 0x3f);
    lVar5 = (lVar5 >> 1) - (lVar5 >> 0x3f);
    if (lVar5 != 0) {
        lVar4 = FUN_18062b420(_DAT_180c8ed18, lVar5 * 0xc, uVar1 & 0xff, param_4, 0xfffffffffffffffe, 0, 0, 0,
                              uVar1);
    }
    lVar5 = lVar4 + lVar5 * 0xc;
    if (lVar3 != lVar2) {
        // WARNING: Subroutine does not return
        memmove(lVar4, lVar3, lVar6, param_4, uVar7, lVar4, lVar5, lVar5);
    }
    lVar2 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    *(uint *)(param_1 + 3) = uVar1;
    if (lVar2 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 52W‚pÄÍMh
 * 
 * ŸıÏğ
 * ÍM52W‚C „pÄtpÄ'
 * 
 * Âp
 *   param_1 - pÄˆ
 *   param_2 - İYÂp
 *   param_3 - İYÂp
 *   param_4 - İYÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ÍM52W‚C „pÄ/¨tpÄ'
 */
void FUN_1801b9eb0(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    lVar2 = param_1[1];
    lVar3 = *param_1;
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 3);
    lVar6 = lVar2 - lVar3;
    lVar5 = lVar6 / 0x34;
    if (lVar5 != 0) {
        lVar4 = FUN_18062b420(_DAT_180c8ed18, lVar5 * 0x34, uVar1 & 0xff, param_4, 0xfffffffffffffffe, 0, 0, 0,
                              uVar1);
    }
    lVar5 = lVar5 * 0x34 + lVar4;
    if (lVar3 != lVar2) {
        // WARNING: Subroutine does not return
        memmove(lVar4, lVar3, lVar6, param_4, uVar7, lVar4, lVar5, lVar5);
    }
    lVar2 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    *(uint *)(param_1 + 3) = uVar1;
    if (lVar2 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 1056W‚pÄÍMh
 * 
 * ŸıÏğ
 * ÍM1056W‚C „pÄtpÄ'
 * 
 * Âp
 *   param_1 - pÄˆ
 *   param_2 - İYÂp
 *   param_3 - İYÂp
 *   param_4 - İYÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ÍM1056W‚C „pÄ/¨tpÄ'ŒpnÁû
 */
void FUN_1801b9fc0(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong *plVar1;
    int *piVar2;
    byte *pbVar3;
    uint uVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong *plVar12;
    
    plVar5 = (longlong *)param_1[1];
    plVar12 = (longlong *)*param_1;
    lVar9 = 0;
    uVar4 = *(uint *)(param_1 + 3);
    lVar10 = ((longlong)plVar5 - (longlong)plVar12) / 0x420;
    if (lVar10 != 0) {
        lVar9 = FUN_18062b420(_DAT_180c8ed18, lVar10 * 0x420, uVar4 & 0xff, param_4, 0xfffffffffffffffe, 0, 0,
                              0);
    }
    lVar10 = lVar10 * 0x420 + lVar9;
    if (plVar12 != plVar5) {
        plVar11 = (longlong *)(lVar9 + 8);
        do {
            plVar1 = plVar11 + -1;
            *plVar1 = 0;
            *plVar11 = 0;
            if (*plVar12 != 0) {
                LOCK();
                piVar2 = (int *)(*plVar12 + 0x10);
                *piVar2 = *piVar2 + 1;
                UNLOCK();
                if (*plVar1 != 0) {
                    FUN_180080060();
                }
                *plVar1 = *plVar12;
                if (*plVar11 != 0) {
                    pbVar3 = (byte *)(*plVar11 + 0xfe);
                    *pbVar3 = *pbVar3 & 0xfb;
                }
            }
            plVar11[1] = plVar12[2];
            plVar12[2] = 0;
            lVar6 = plVar12[4];
            plVar11[2] = plVar12[3];
            plVar11[3] = lVar6;
            lVar6 = plVar12[6];
            plVar11[4] = plVar12[5];
            plVar11[5] = lVar6;
            lVar6 = plVar12[8];
            plVar11[6] = plVar12[7];
            plVar11[7] = lVar6;
            lVar6 = plVar12[10];
            plVar11[8] = plVar12[9];
            plVar11[9] = lVar6;
            lVar6 = plVar12[0xc];
            plVar11[10] = plVar12[0xb];
            plVar11[0xb] = lVar6;
            lVar6 = plVar12[0xe];
            plVar11[0xc] = plVar12[0xd];
            plVar11[0xd] = lVar6;
            lVar6 = plVar12[0x10];
            plVar11[0xe] = plVar12[0xf];
            plVar11[0xf] = lVar6;
            lVar6 = plVar12[0x12];
            plVar11[0x10] = plVar12[0x11];
            plVar11[0x11] = lVar6;
            lVar6 = plVar12[0x14];
            plVar11[0x12] = plVar12[0x13];
            plVar11[0x13] = lVar6;
            lVar6 = plVar12[0x16];
            plVar11[0x14] = plVar12[0x15];
            plVar11[0x15] = lVar6;
            lVar6 = plVar12[0x18];
            plVar11[0x16] = plVar12[0x17];
            plVar11[0x17] = lVar6;
            uVar7 = *(undefined4 *)((longlong)plVar12 + 0xcc);
            lVar6 = plVar12[0x1a];
            uVar8 = *(undefined4 *)((longlong)plVar12 + 0xd4);
            *(int *)(plVar11 + 0x18) = (int)plVar12[0x19];
            *(undefined4 *)((longlong)plVar11 + 0xc4) = uVar7;
            *(int *)(plVar11 + 0x19) = (int)lVar6;
            *(undefined4 *)((longlong)plVar11 + 0xcc) = uVar8;
            plVar11[0x1a] = plVar12[0x1b];
            *(int *)(plVar11 + 0x1b) = (int)plVar12[0x1c];
            *(undefined4 *)((longlong)plVar11 + 0xdc) = *(undefined4 *)((longlong)plVar12 + 0xe4);
            FUN_1801bd980(plVar11 + 0x1d, plVar12 + 0x1e);
            plVar12 = plVar12 + 0x84;
            plVar11 = plVar11 + 0x84;
        } while (plVar12 != plVar5);
    }
    lVar6 = *param_1;
    *param_1 = lVar9;
    lVar9 = param_1[1];
    param_1[1] = lVar10;
    param_1[2] = lVar10;
    *(uint *)(param_1 + 3) = uVar4;
    for (lVar10 = lVar6; lVar10 != lVar9; lVar10 = lVar10 + 0x420) {
        FUN_1801bd090(lVar10);
    }
    if (lVar6 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900(lVar6);
    }
    return;
}

/**
 * 188W‚pÄÍMh
 * 
 * ŸıÏğ
 * ÍM188W‚C „pÄtpÄ'
 * 
 * Âp
 *   param_1 - pÄˆ
 *   param_2 - İYÂp
 *   param_3 - İYÂp
 *   param_4 - İYÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ÍM188W‚C „pÄ/¨tpÄ'
 */
void FUN_1801ba230(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    lVar2 = param_1[1];
    lVar3 = *param_1;
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 3);
    lVar6 = lVar2 - lVar3;
    lVar5 = lVar6 / 0xbc;
    if (lVar5 != 0) {
        lVar4 = FUN_18062b420(_DAT_180c8ed18, lVar5 * 0xbc, uVar1 & 0xff, param_4, 0xfffffffffffffffe, 0, 0, 0,
                              uVar1);
    }
    lVar5 = lVar5 * 0xbc + lVar4;
    if (lVar3 != lVar2) {
        // WARNING: Subroutine does not return
        memmove(lVar4, lVar3, lVar6, param_4, uVar7, lVar4, lVar5, lVar5);
    }
    lVar2 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    *(uint *)(param_1 + 3) = uVar1;
    if (lVar2 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * pÄh
 * 
 * ŸıÏğ
 * pÄpnÊ>…XD
 * 
 * Âp
 *   param_1 - pÄˆ
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#pÄpnìÊ>…XŒÍn¶
 */
void FUN_1801ba340(longlong param_1)
{
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    uVar4 = 0;
    if (uVar3 != 0) {
        do {
            puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
            if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = &UNK_18098bcb0;
                // WARNING: Subroutine does not return
                FUN_18064e900();
            }
            *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
        uVar3 = *(ulonglong *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * Èhaîå~h
 * 
 * ŸıÏğ
 * (Èh-å~aîÔŞaîMnáo
 * 
 * Âp
 *   param_1 - Èhˆ
 *   param_2 - ÓœX¨ˆ
 *   param_3 - .<ˆ
 * 
 * ÔŞ<
 *   longlong* - ÓœX¨ˆ
 * 
 * €/ô
 * åıp#(Èh-å~aî(64MÈ—ÕÛLëå~
 */
longlong * FUN_1801ba400(longlong param_1, longlong *param_2, longlong param_3)
{
    byte bVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    byte *pbVar5;
    uint uVar6;
    
    pbVar5 = &DAT_18098bc73;
    if (*(byte **)(param_3 + 8) != (byte *)0x0) {
        pbVar5 = *(byte **)(param_3 + 8);
    }
    uVar6 = 0;
    uVar2 = 0xcbf29ce484222325;
    if (*(uint *)(param_3 + 0x10) != 0) {
        do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar6 = uVar6 + 1;
            uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
        } while (uVar6 < *(uint *)(param_3 + 0x10));
    }
    lVar4 = (uVar2 % (ulonglong)*(uint *)(param_1 + 0x10)) * 8;
    lVar3 = func_0x0001801bb330((ulonglong)*(uint *)(param_1 + 0x10),
                              *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar4));
    if (lVar3 == 0) {
        lVar4 = *(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8);
    }
    else {
        lVar4 = *(longlong *)(param_1 + 8) + lVar4;
    }
    *param_2 = lVar3;
    param_2[1] = lVar4;
    return param_2;
}

/**
 * ¹híãh
 * 
 * ŸıÏğ
 * íã¹h-„C gLÍ\
 * 
 * Âp
 *   param_1 - ¹hˆ
 *   param_2 - İYÂp
 *   param_3 - İYÂp
 *   param_4 - İYÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#íã¹h-„C gLŒDÊ>Í\
 */
void FUN_1801ba4d0(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 uVar4;
    
    uVar4 = 0xfffffffffffffffe;
    plVar1 = (longlong *)param_1[1];
    for (plVar3 = (longlong *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 8) {
        plVar2 = (longlong *)plVar3[7];
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2, plVar2 != plVar3, param_3, param_4, uVar4);
            plVar3[7] = 0;
        }
    }
    if (*param_1 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * pÄC ûdh
 * 
 * ŸıÏğ
 * ÎpÄ-ûdšC tpÄÓ„
 * 
 * Âp
 *   param_1 - pÄˆ
 *   param_2 - ûd„C <
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#ÎpÄ-ûdšC /¨tpÄ'
 */
void FUN_1801ba580(ulonglong *param_1, longlong param_2)
{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    
    uVar2 = 0;
    uVar5 = *param_1;
    iVar7 = (int)((longlong)(param_1[1] - uVar5) >> 3);
    if (0 < iVar7) {
        uVar1 = uVar2;
        uVar4 = uVar2;
        while (*(longlong *)(uVar5 + uVar1 * 8) != param_2) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            uVar1 = uVar1 + 1;
            if ((longlong)iVar7 <= (longlong)uVar1) {
                return;
            }
        }
        uVar3 = (ulonglong)(iVar7 + -1);
        *(undefined8 *)(uVar5 + (longlong)(int)uVar4 * 8) = *(undefined8 *)(uVar3 * 8 + uVar5);
        uVar5 = param_1[1];
        uVar1 = *param_1;
        uVar4 = (longlong)(uVar5 - uVar1) >> 3;
        if (uVar4 < uVar3) {
            uVar6 = uVar3 - uVar4;
            if ((ulonglong)((longlong)(param_1[2] - uVar5) >> 3) < uVar6) {
                if (uVar4 == 0) {
                    uVar4 = 1;
                }
                else {
                    uVar4 = uVar4 * 2;
                }
                if (uVar4 < uVar3) {
                    uVar4 = uVar3;
                }
                if (uVar4 != 0) {
                    uVar2 = FUN_18062b420(_DAT_180c8ed18, uVar4 * 8, (char)param_1[3]);
                    uVar1 = *param_1;
                    uVar5 = param_1[1];
                }
                if (uVar1 != uVar5) {
                    // WARNING: Subroutine does not return
                    memmove(uVar2, uVar1, uVar5 - uVar1);
                }
                if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
                    memset(uVar2, 0, uVar6 * 8);
                }
                if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                }
                *param_1 = uVar2;
                param_1[2] = uVar2 + uVar4 * 8;
                param_1[1] = uVar2;
            }
            else {
                if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
                    memset(uVar5, 0, uVar6 * 8);
                }
                param_1[1] = uVar5;
            }
        }
        else {
            param_1[1] = uVar3 * 8 + uVar1;
        }
    }
    return;
}

/**
 * pÄC û¨h
 * 
 * ŸıÏğ
 * û¨pÄC tC Mn
 * 
 * Âp
 *   param_1 - û¨"
 *   param_2 - İYÂp
 *   param_3 - pÄˆ
 *   param_4 - pÄ'
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#û¨pÄC /¨tpÄÓ„Œ'
 */
void FUN_1801ba5d0(int param_1, undefined8 param_2, longlong param_3, int param_4)
{
    longlong lVar1;
    ulonglong uVar2;
    longlong *unaff_RBX;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong unaff_R14;
    
    uVar2 = (ulonglong)(param_4 + -1);
    *(undefined8 *)(param_3 + (longlong)param_1 * 8) = *(undefined8 *)(uVar2 * 8 + param_3);
    lVar4 = unaff_RBX[1];
    lVar1 = *unaff_RBX;
    uVar3 = lVar4 - lVar1 >> 3;
    if (uVar3 < uVar2) {
        uVar5 = uVar2 - uVar3;
        if ((ulonglong)(unaff_RBX[2] - lVar4 >> 3) < uVar5) {
            if (uVar3 == 0) {
                uVar3 = 1;
            }
            else {
                uVar3 = uVar3 * 2;
            }
            if (uVar3 < uVar2) {
                uVar3 = uVar2;
            }
            if (uVar3 != 0) {
                unaff_R14 = FUN_18062b420(_DAT_180c8ed18, uVar3 * 8, (char)unaff_RBX[3]);
                lVar1 = *unaff_RBX;
                lVar4 = unaff_RBX[1];
            }
            if (lVar1 != lVar4) {
                // WARNING: Subroutine does not return
                memmove(unaff_R14, lVar1, lVar4 - lVar1);
            }
            if (uVar5 != 0) {
                // WARNING: Subroutine does not return
                memset(unaff_R14, 0, uVar5 * 8);
            }
            if (*unaff_RBX != 0) {
                // WARNING: Subroutine does not return
                FUN_18064e900();
            }
            *unaff_RBX = unaff_R14;
            unaff_RBX[2] = unaff_R14 + uVar3 * 8;
            unaff_RBX[1] = unaff_R14;
        }
        else {
            if (uVar5 != 0) {
                // WARNING: Subroutine does not return
                memset(lVar4, 0, uVar5 * 8);
            }
            unaff_RBX[1] = lVar4;
        }
    }
    else {
        unaff_RBX[1] = uVar2 * 8 + lVar1;
    }
    return;
}

/**
 * pÄi¹h
 * 
 * ŸıÏğ
 * iUpÄ¹ÏÍ°M…X
 * 
 * Âp
 *   param_1 - pÄˆ
 *   param_2 - °¹Ï'
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#iUpÄ¹Ï/¨i¹Œ…XÍM
 */
void FUN_1801ba612(longlong param_1, ulonglong param_2)
{
    longlong in_RAX;
    longlong *unaff_RBX;
    longlong unaff_RBP;
    ulonglong uVar1;
    longlong unaff_RSI;
    ulonglong uVar2;
    longlong unaff_R14;
    
    uVar2 = param_2 - unaff_RBP;
    if ((ulonglong)(in_RAX - unaff_RSI >> 3) < uVar2) {
        if (unaff_RBP == 0) {
            uVar1 = 1;
        }
        else {
            uVar1 = unaff_RBP * 2;
        }
        if (uVar1 < param_2) {
            uVar1 = param_2;
        }
        if (uVar1 != 0) {
            unaff_R14 = FUN_18062b420(_DAT_180c8ed18, uVar1 * 8, (char)unaff_RBX[3]);
            param_1 = *unaff_RBX;
            unaff_RSI = unaff_RBX[1];
        }
        if (param_1 != unaff_RSI) {
            // WARNING: Subroutine does not return
            memmove(unaff_R14, param_1, unaff_RSI - param_1);
        }
        if (uVar2 != 0) {
            // WARNING: Subroutine does not return
            memset(unaff_R14, 0, uVar2 * 8);
        }
        if (*unaff_RBX != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        *unaff_RBX = unaff_R14;
        unaff_RBX[2] = unaff_R14 + uVar1 * 8;
        unaff_RBX[1] = unaff_R14;
    }
    else {
        if (uVar2 != 0) {
            // WARNING: Subroutine does not return
            memset();
        }
        unaff_RBX[1] = unaff_RSI;
    }
    return;
}

/**
 * ûßzıp3
 * 
 * ŸıÏğ
 * ûßzıp(`MŒ¥ã|¹'
 * 
 * Âp
 *   àÂp(ÄXh Âp	
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp:ûßzıp;(¥ã|¹'Œ`M(
 */
void FUN_1801ba6cc(void)
{
    longlong unaff_RBX;
    undefined8 unaff_RSI;
    longlong unaff_RDI;
    
    if (unaff_RDI != 0) {
        // WARNING: Subroutine does not return
        memset();
    }
    *(undefined8 *)(unaff_RBX + 8) = unaff_RSI;
    return;
}

/**
 * ˆOû¡—h
 * 
 * ŸıÏğ
 * ¡—ˆOûÏÔŞOû„ˆ<
 * 
 * Âp
 *   param_1 - ú@ˆ<
 *   param_2 - İYÂp
 *   param_3 - İYÂp
 *   param_4 - OûÏ
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp#¡—ˆOûÏ/ˆĞ—Œ0@¡—
 */
void FUN_1801ba6f6(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4)
{
    longlong unaff_RBX;
    
    *(longlong *)(unaff_RBX + 8) = param_4 + param_1;
    return;
}

/**
 * ûßzıp4
 * 
 * ŸıÏğ
 * ûßzıp(`MŒ¥ã|¹'
 * 
 * Âp
 *   àÂp
 * 
 * ÔŞ<
 *   void - àÔŞ<
 * 
 * €/ô
 * åıp:ûßzıp;(¥ã|¹'Œ`M(
 */
void FUN_1801ba708(void)
{
    return;
}

/*============================================================================
  !WáoŒ€/ô
============================================================================*/

/**
 * !WŸıô
 * 
 * ,!W/TaleWorldsÎ8Ãûß„ÍÄèĞ›å8ÃŸı
 * 
 * 1. ¹h¡
 *    - /Í'„¹h12W‚52W‚188W‚1056W‚	
 *    - Ğ›¹h„úi¹ÍMŒŸı
 *    - /¨i¹VeŒ…X
 * 
 * 2. …X¡
 *    - Ğ›ØH„…XMŒÊ>:6
 *    - /Í…XW'„M8KB32KB128KB	
 *    - °…X`¡Œ…XùP
 * 
 * 3. ÈhÍ\
 *    - Ğ›64MÈ—Õ/
 *    - /Èh„úå~Œi¹
 *    - °ØH„.<ùX¨ŒÀ"
 * 
 * 4. pÄÍ\
 *    - /¨pÄ„úi¹Œ
 *    - Ğ›pÄC „û  dŒû¨Ÿı
 *    - °pÄ…X„¨¡
 * 
 * 5. ï
 *    - Ğ›ß „ï:6
 *    - /DŒ¶b
 *    - °8‰h„…X¡
 * 
 * €/y¹
 * - (pi¹VeĞØ'ı
 * - /¿‰h„…XÍ\
 * - °…XùPŒubùP
 * - Ğ›Œt„ïŒD
 * - /ÍpnÓ„Œ—Õ
 * 
 * (è‹y
 * 1. @	…XMÍ\ı ÀåÔŞ<
 * 2. (¿¯ƒ-(ö èe
 * 3. …XÊ> ˆn:NULL
 * 4. ¹hi¹öïıÑpnÁû
 * 5. ÈhÍ\ QÈ²
 * 
 * 'ı
 * - (…X`Ï…XM  
 * - °yÏÍ\Ïıp(  
 * - (XË}„pnÓ„@
 * - °ößÊ>ĞØ…X)(‡
 * - (MĞ—È¡—
 */

/*============================================================================
  ‡öÓ_
============================================================================*/