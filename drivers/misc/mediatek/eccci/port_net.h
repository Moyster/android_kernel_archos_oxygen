#ifdef CONFIG_MTK_NET_CCMNI
#define CCMNI_U
#include "ccmni.h"
extern struct ccmni_dev_ops ccmni_ops;
#endif

#define ENABLE_GRO

extern int mbim_start_xmit(struct sk_buff *skb, int ifid);

