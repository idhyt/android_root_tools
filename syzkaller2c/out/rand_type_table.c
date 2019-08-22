/* ---------- auto generate file ---------- */


/* ---------- seccomp_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define SECCOMP_FILTER_FLAG_TSYNC 1


int seccomp_flags[] = {
	0,
	SECCOMP_FILTER_FLAG_TSYNC
};


/* ---------- pkey_flags ---------- */

#define PKEY_DISABLE_ACCESS 1
#define PKEY_DISABLE_WRITE 2


int pkey_flags[] = {
	PKEY_DISABLE_ACCESS,
	PKEY_DISABLE_WRITE
};


/* ---------- te_oper_param_type_flags ---------- */

#define TE_PARAM_TYPE_NONE 0
#define TE_PARAM_TYPE_INT_RO 1
#define TE_PARAM_TYPE_INT_RW 2
#define TE_PARAM_TYPE_MEM_RO 3
#define TE_PARAM_TYPE_MEM_RW 4
#define TE_PARAM_TYPE_PERSIST_MEM_RO 256
#define TE_PARAM_TYPE_PERSIST_MEM_RW 257
#define TE_PARAM_TYPE_FLAGS_PHYS_LIST 2147483648


int te_oper_param_type_flags[] = {
	TE_PARAM_TYPE_NONE,
	TE_PARAM_TYPE_INT_RO,
	TE_PARAM_TYPE_INT_RW,
	TE_PARAM_TYPE_MEM_RO,
	TE_PARAM_TYPE_MEM_RW,
	TE_PARAM_TYPE_PERSIST_MEM_RO,
	TE_PARAM_TYPE_PERSIST_MEM_RW,
	TE_PARAM_TYPE_FLAGS_PHYS_LIST
};


/* ---------- arp_ops ---------- */

#define ARPOP_REQUEST 1
#define ARPOP_REPLY 2
#define ARPOP_RREQUEST 3
#define ARPOP_RREPLY 4
#define ARPOP_InREQUEST 8
#define ARPOP_InREPLY 9
#define ARPOP_NAK 10


int arp_ops[] = {
	ARPOP_REQUEST,
	ARPOP_REPLY,
	ARPOP_RREQUEST,
	ARPOP_RREPLY,
	ARPOP_InREQUEST,
	ARPOP_InREPLY,
	ARPOP_NAK
};


/* ---------- kvm_dev_flags ---------- */

#define KVM_DEV_ASSIGN_ENABLE_IOMMU 1
#define KVM_DEV_ASSIGN_PCI_2_3 2
#define KVM_DEV_ASSIGN_MASK_INTX 4


int kvm_dev_flags[] = {
	KVM_DEV_ASSIGN_ENABLE_IOMMU,
	KVM_DEV_ASSIGN_PCI_2_3,
	KVM_DEV_ASSIGN_MASK_INTX
};


/* ---------- bpf_attach_type ---------- */

#define BPF_CGROUP_INET_INGRESS 0
#define BPF_CGROUP_INET_EGRESS 1


int bpf_attach_type[] = {
	BPF_CGROUP_INET_INGRESS,
	BPF_CGROUP_INET_EGRESS
};


/* ---------- tcp_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define TCPHDR_FIN 1
#define TCPHDR_SYN 2
#define TCPHDR_RST 4
#define TCPHDR_PSH 8
#define TCPHDR_ACK 16
#define TCPHDR_URG 32
#define TCPHDR_ECE 64
#define TCPHDR_CWR 128
#define TCPHDR_SYN_ECN 194


int tcp_flags[] = {
	0,
	TCPHDR_FIN,
	TCPHDR_SYN,
	TCPHDR_RST,
	TCPHDR_PSH,
	TCPHDR_ACK,
	TCPHDR_URG,
	TCPHDR_ECE,
	TCPHDR_CWR,
	TCPHDR_SYN_ECN
};


/* ---------- snd_seq_port_flags ---------- */

#define SNDRV_SEQ_PORT_FLG_GIVEN_PORT 1
#define SNDRV_SEQ_PORT_FLG_TIMESTAMP 2
#define SNDRV_SEQ_PORT_FLG_TIME_REAL 4


int snd_seq_port_flags[] = {
	SNDRV_SEQ_PORT_FLG_GIVEN_PORT,
	SNDRV_SEQ_PORT_FLG_TIMESTAMP,
	SNDRV_SEQ_PORT_FLG_TIME_REAL
};


/* ---------- splice_flags ---------- */

#define SPLICE_F_MOVE 1
#define SPLICE_F_NONBLOCK 2
#define SPLICE_F_MORE 4
#define SPLICE_F_GIFT 8


int splice_flags[] = {
	SPLICE_F_MOVE,
	SPLICE_F_NONBLOCK,
	SPLICE_F_MORE,
	SPLICE_F_GIFT
};


/* ---------- fchownat_flags ---------- */

#define AT_EMPTY_PATH 4096
#define AT_SYMLINK_NOFOLLOW 256


int fchownat_flags[] = {
	AT_EMPTY_PATH,
	AT_SYMLINK_NOFOLLOW
};


/* ---------- msgrcv_flags ---------- */

#define IPC_NOWAIT 2048
#define MSG_EXCEPT 8192
#define MSG_NOERROR 4096


int msgrcv_flags[] = {
	IPC_NOWAIT,
	MSG_EXCEPT,
	MSG_NOERROR
};


/* ---------- signalfd_flags ---------- */

#define SFD_NONBLOCK 2048
#define SFD_CLOEXEC 524288


int signalfd_flags[] = {
	SFD_NONBLOCK,
	SFD_CLOEXEC
};


/* ---------- kcmp_flags ---------- */

#define KCMP_FILE 0
#define KCMP_FILES 2
#define KCMP_FS 3
#define KCMP_IO 5
#define KCMP_SIGHAND 4
#define KCMP_SYSVSEM 6
#define KCMP_VM 1


int kcmp_flags[] = {
	KCMP_FILE,
	KCMP_FILES,
	KCMP_FS,
	KCMP_IO,
	KCMP_SIGHAND,
	KCMP_SYSVSEM,
	KCMP_VM
};


/* ---------- prctl_mm_option ---------- */

#define PR_SET_MM_START_CODE 1
#define PR_SET_MM_END_CODE 2
#define PR_SET_MM_START_DATA 3
#define PR_SET_MM_END_DATA 4
#define PR_SET_MM_START_STACK 5
#define PR_SET_MM_START_BRK 6
#define PR_SET_MM_BRK 7


int prctl_mm_option[] = {
	PR_SET_MM_START_CODE,
	PR_SET_MM_END_CODE,
	PR_SET_MM_START_DATA,
	PR_SET_MM_END_DATA,
	PR_SET_MM_START_STACK,
	PR_SET_MM_START_BRK,
	PR_SET_MM_BRK
};


/* ---------- mempolicy_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define MPOL_F_MEMS_ALLOWED 4
#define MPOL_F_ADDR 2
#define MPOL_F_NODE 1


int mempolicy_flags[] = {
	0,
	MPOL_F_MEMS_ALLOWED,
	MPOL_F_ADDR,
	MPOL_F_NODE
};


/* ---------- kvm_guest_addr_size ---------- */

#define 0x1000 Undefined in const file! Need to manually fill out !
#define 0x2000 Undefined in const file! Need to manually fill out !
#define 0x4000 Undefined in const file! Need to manually fill out !
#define 0x8000 Undefined in const file! Need to manually fill out !
#define 0x10000 Undefined in const file! Need to manually fill out !
#define 0x100000 Undefined in const file! Need to manually fill out !


int kvm_guest_addr_size[] = {
	0x1000,
	0x2000,
	0x4000,
	0x8000,
	0x10000,
	0x100000
};


/* ---------- sockopt_opt_ip_opts ---------- */

#define IP_OPTIONS 4
#define IP_PKTOPTIONS 9


int sockopt_opt_ip_opts[] = {
	IP_OPTIONS,
	IP_PKTOPTIONS
};


/* ---------- inet6_option_types_buf ---------- */

#define IPV6_2292PKTOPTIONS 6
#define IPV6_ADD_MEMBERSHIP 20
#define IPV6_DROP_MEMBERSHIP 21
#define IPV6_JOIN_ANYCAST 27
#define IPV6_LEAVE_ANYCAST 28
#define IPV6_FLOWLABEL_MGR 32
#define IPV6_IPSEC_POLICY 34
#define IPV6_XFRM_POLICY 35
#define MCAST_JOIN_GROUP 42
#define MCAST_BLOCK_SOURCE 43
#define MCAST_UNBLOCK_SOURCE 44
#define MCAST_LEAVE_GROUP 45
#define MCAST_JOIN_SOURCE_GROUP 46
#define MCAST_LEAVE_SOURCE_GROUP 47
#define MCAST_MSFILTER 48
#define IPV6_PKTINFO 50
#define IPV6_HOPOPTS 54
#define IPV6_RTHDRDSTOPTS 55
#define IPV6_RTHDR 57
#define IPV6_DSTOPTS 59
#define IPV6_PATHMTU 61
#define IP6T_SO_GET_REVISION_MATCH 68
#define IP6T_SO_GET_REVISION_TARGET 69
#define MRT6_ADD_MIF 202
#define MRT6_ADD_MFC 204
#define MRT6_DEL_MFC 205
#define MRT6_ADD_MFC_PROXY 210
#define MRT6_DEL_MFC_PROXY 211


int inet6_option_types_buf[] = {
	IPV6_2292PKTOPTIONS,
	IPV6_ADD_MEMBERSHIP,
	IPV6_DROP_MEMBERSHIP,
	IPV6_JOIN_ANYCAST,
	IPV6_LEAVE_ANYCAST,
	IPV6_FLOWLABEL_MGR,
	IPV6_IPSEC_POLICY,
	IPV6_XFRM_POLICY,
	MCAST_JOIN_GROUP,
	MCAST_BLOCK_SOURCE,
	MCAST_UNBLOCK_SOURCE,
	MCAST_LEAVE_GROUP,
	MCAST_JOIN_SOURCE_GROUP,
	MCAST_LEAVE_SOURCE_GROUP,
	MCAST_MSFILTER,
	IPV6_PKTINFO,
	IPV6_HOPOPTS,
	IPV6_RTHDRDSTOPTS,
	IPV6_RTHDR,
	IPV6_DSTOPTS,
	IPV6_PATHMTU,
	IP6T_SO_GET_REVISION_MATCH,
	IP6T_SO_GET_REVISION_TARGET,
	MRT6_ADD_MIF,
	MRT6_ADD_MFC,
	MRT6_DEL_MFC,
	MRT6_ADD_MFC_PROXY,
	MRT6_DEL_MFC_PROXY
};


/* ---------- seal_types ---------- */

#define F_SEAL_SEAL 1
#define F_SEAL_SHRINK 2
#define F_SEAL_GROW 4
#define F_SEAL_WRITE 8


int seal_types[] = {
	F_SEAL_SEAL,
	F_SEAL_SHRINK,
	F_SEAL_GROW,
	F_SEAL_WRITE
};


/* ---------- inotify_mask ---------- */

#define IN_ACCESS 1
#define IN_ATTRIB 4
#define IN_CLOSE_WRITE 8
#define IN_CLOSE_NOWRITE 16
#define IN_CREATE 256
#define IN_DELETE 512
#define IN_DELETE_SELF 1024
#define IN_MODIFY 2
#define IN_MOVE_SELF 2048
#define IN_MOVED_FROM 64
#define IN_MOVED_TO 128
#define IN_OPEN 32
#define IN_DONT_FOLLOW 33554432
#define IN_EXCL_UNLINK 67108864
#define IN_MASK_ADD 536870912
#define IN_ONESHOT 2147483648
#define IN_ONLYDIR 16777216


int inotify_mask[] = {
	IN_ACCESS,
	IN_ATTRIB,
	IN_CLOSE_WRITE,
	IN_CLOSE_NOWRITE,
	IN_CREATE,
	IN_DELETE,
	IN_DELETE_SELF,
	IN_MODIFY,
	IN_MOVE_SELF,
	IN_MOVED_FROM,
	IN_MOVED_TO,
	IN_OPEN,
	IN_DONT_FOLLOW,
	IN_EXCL_UNLINK,
	IN_MASK_ADD,
	IN_ONESHOT,
	IN_ONLYDIR
};


/* ---------- unlinkat_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define AT_REMOVEDIR 512


int unlinkat_flags[] = {
	0,
	AT_REMOVEDIR
};


/* ---------- sockopt_so_timestamping ---------- */

#define SOF_TIMESTAMPING_TX_HARDWARE 1
#define SOF_TIMESTAMPING_TX_SOFTWARE 2
#define SOF_TIMESTAMPING_RX_HARDWARE 4
#define SOF_TIMESTAMPING_RX_SOFTWARE 8
#define SOF_TIMESTAMPING_SOFTWARE 16
#define SOF_TIMESTAMPING_SYS_HARDWARE 32
#define SOF_TIMESTAMPING_RAW_HARDWARE 64
#define SOF_TIMESTAMPING_OPT_ID 128
#define SOF_TIMESTAMPING_TX_SCHED 256
#define SOF_TIMESTAMPING_TX_ACK 512
#define SOF_TIMESTAMPING_OPT_CMSG 1024
#define SOF_TIMESTAMPING_OPT_TSONLY 2048


int sockopt_so_timestamping[] = {
	SOF_TIMESTAMPING_TX_HARDWARE,
	SOF_TIMESTAMPING_TX_SOFTWARE,
	SOF_TIMESTAMPING_RX_HARDWARE,
	SOF_TIMESTAMPING_RX_SOFTWARE,
	SOF_TIMESTAMPING_SOFTWARE,
	SOF_TIMESTAMPING_SYS_HARDWARE,
	SOF_TIMESTAMPING_RAW_HARDWARE,
	SOF_TIMESTAMPING_OPT_ID,
	SOF_TIMESTAMPING_TX_SCHED,
	SOF_TIMESTAMPING_TX_ACK,
	SOF_TIMESTAMPING_OPT_CMSG,
	SOF_TIMESTAMPING_OPT_TSONLY
};


/* ---------- lio_opcode ---------- */

#define IOCB_CMD_PREAD 0
#define IOCB_CMD_PWRITE 1
#define IOCB_CMD_FSYNC 2
#define IOCB_CMD_FDSYNC 3
#define IOCB_CMD_NOOP 6
#define IOCB_CMD_PREADV 7
#define IOCB_CMD_PWRITEV 8


int lio_opcode[] = {
	IOCB_CMD_PREAD,
	IOCB_CMD_PWRITE,
	IOCB_CMD_FSYNC,
	IOCB_CMD_FDSYNC,
	IOCB_CMD_NOOP,
	IOCB_CMD_PREADV,
	IOCB_CMD_PWRITEV
};


/* ---------- ioprio_which_uid ---------- */

#define IOPRIO_WHO_USER 3


int ioprio_which_uid[] = {
	IOPRIO_WHO_USER
};


/* ---------- rusage_who ---------- */

#define RUSAGE_SELF 0
#define RUSAGE_CHILDREN 18446744073709551615
#define RUSAGE_THREAD 1


int rusage_who[] = {
	RUSAGE_SELF,
	RUSAGE_CHILDREN,
	RUSAGE_THREAD
};


/* ---------- ioctl_void ---------- */

#define FIOCLEX 21585
#define FIONCLEX 21584
#define FIFREEZE 3221510263
#define FITHAW 3221510264


int ioctl_void[] = {
	FIOCLEX,
	FIONCLEX,
	FIFREEZE,
	FITHAW
};


/* ---------- drm_ctx_flags ---------- */

#define _DRM_CONTEXT_PRESERVED 1
#define _DRM_CONTEXT_2DONLY 2


int drm_ctx_flags[] = {
	_DRM_CONTEXT_PRESERVED,
	_DRM_CONTEXT_2DONLY
};


/* ---------- snd_timer_filter ---------- */

#define SNDRV_TIMER_EVENT_RESOLUTION 0
#define SNDRV_TIMER_EVENT_TICK 1
#define SNDRV_TIMER_EVENT_START 2
#define SNDRV_TIMER_EVENT_STOP 3
#define SNDRV_TIMER_EVENT_CONTINUE 4
#define SNDRV_TIMER_EVENT_PAUSE 5
#define SNDRV_TIMER_EVENT_EARLY 6
#define SNDRV_TIMER_EVENT_SUSPEND 7
#define SNDRV_TIMER_EVENT_RESUME 8
#define SNDRV_TIMER_EVENT_MSTART 12
#define SNDRV_TIMER_EVENT_MSTOP 13
#define SNDRV_TIMER_EVENT_MCONTINUE 14
#define SNDRV_TIMER_EVENT_MPAUSE 15
#define SNDRV_TIMER_EVENT_MSUSPEND 17
#define SNDRV_TIMER_EVENT_MRESUME 18


int snd_timer_filter[] = {
	SNDRV_TIMER_EVENT_RESOLUTION,
	SNDRV_TIMER_EVENT_TICK,
	SNDRV_TIMER_EVENT_START,
	SNDRV_TIMER_EVENT_STOP,
	SNDRV_TIMER_EVENT_CONTINUE,
	SNDRV_TIMER_EVENT_PAUSE,
	SNDRV_TIMER_EVENT_EARLY,
	SNDRV_TIMER_EVENT_SUSPEND,
	SNDRV_TIMER_EVENT_RESUME,
	SNDRV_TIMER_EVENT_MSTART,
	SNDRV_TIMER_EVENT_MSTOP,
	SNDRV_TIMER_EVENT_MCONTINUE,
	SNDRV_TIMER_EVENT_MPAUSE,
	SNDRV_TIMER_EVENT_MSUSPEND,
	SNDRV_TIMER_EVENT_MRESUME
};


/* ---------- getrandom_flags ---------- */

#define GRND_NONBLOCK 1
#define GRND_RANDOM 2


int getrandom_flags[] = {
	GRND_NONBLOCK,
	GRND_RANDOM
};


/* ---------- faccessat_flags ---------- */

#define 0x100 Undefined in const file! Need to manually fill out !
#define 0x200 Undefined in const file! Need to manually fill out !
#define 0x400 Undefined in const file! Need to manually fill out !
#define 0x800 Undefined in const file! Need to manually fill out !
#define 0x1000 Undefined in const file! Need to manually fill out !


int faccessat_flags[] = {
	0x100,
	0x200,
	0x400,
	0x800,
	0x1000
};


/* ---------- icmp_time_exceeded_codes ---------- */

#define ICMP_EXC_TTL 0
#define ICMP_EXC_FRAGTIME 1


int icmp_time_exceeded_codes[] = {
	ICMP_EXC_TTL,
	ICMP_EXC_FRAGTIME
};


/* ---------- kvm_x86_tss_addr ---------- */

#define 0xd000 Undefined in const file! Need to manually fill out !


int kvm_x86_tss_addr[] = {
	0xd000
};


/* ---------- xfrm_policy_actions ---------- */

#define XFRM_POLICY_ALLOW 0
#define XFRM_POLICY_BLOCK 1


int xfrm_policy_actions[] = {
	XFRM_POLICY_ALLOW,
	XFRM_POLICY_BLOCK
};


/* ---------- netlink_family ---------- */

#define AF_NETLINK 16
#define AF_UNSPEC 0


int netlink_family[] = {
	AF_NETLINK,
	AF_UNSPEC
};


/* ---------- uffdio_zero_mode ---------- */

#define UFFDIO_ZEROPAGE_MODE_DONTWAKE 1


int uffdio_zero_mode[] = {
	UFFDIO_ZEROPAGE_MODE_DONTWAKE
};


/* ---------- ether_types ---------- */

#define ETH_P_LOOP 96
#define ETH_P_PUP 512
#define ETH_P_PUPAT 513
#define ETH_P_TSN 8944
#define ETH_P_IP 2048
#define ETH_P_X25 2053
#define ETH_P_ARP 2054
#define ETH_P_IEEEPUP 2560
#define ETH_P_IEEEPUPAT 2561
#define ETH_P_BATMAN 17157
#define ETH_P_DEC 24576
#define ETH_P_DNA_DL 24577
#define ETH_P_DNA_RC 24578
#define ETH_P_DNA_RT 24579
#define ETH_P_LAT 24580
#define ETH_P_DIAG 24581
#define ETH_P_CUST 24582
#define ETH_P_SCA 24583
#define ETH_P_TEB 25944
#define ETH_P_RARP 32821
#define ETH_P_ATALK 32923
#define ETH_P_AARP 33011
#define ETH_P_8021Q 33024
#define ETH_P_IPX 33079
#define ETH_P_IPV6 34525
#define ETH_P_PAUSE 34824
#define ETH_P_SLOW 34825
#define ETH_P_WCCP 34878
#define ETH_P_MPLS_UC 34887
#define ETH_P_MPLS_MC 34888
#define ETH_P_ATMMPOA 34892
#define ETH_P_PPP_DISC 34915
#define ETH_P_PPP_SES 34916
#define ETH_P_LINK_CTL 34924
#define ETH_P_ATMFATE 34948
#define ETH_P_PAE 34958
#define ETH_P_AOE 34978
#define ETH_P_8021AD 34984
#define ETH_P_802_EX1 34997
#define ETH_P_TIPC 35018
#define ETH_P_MACSEC 35045
#define ETH_P_8021AH 35047
#define ETH_P_MVRP 35061
#define ETH_P_1588 35063
#define ETH_P_NCSI 35064
#define ETH_P_PRP 35067
#define ETH_P_FCOE 35078
#define ETH_P_TDLS 35085
#define ETH_P_FIP 35092
#define ETH_P_80221 35095
#define ETH_P_HSR 35119
#define ETH_P_LOOPBACK 36864
#define ETH_P_QINQ1 37120
#define ETH_P_QINQ2 37376
#define ETH_P_QINQ3 37632
#define ETH_P_EDSA 56026
#define ETH_P_AF_IUCV 64507
#define ETH_P_802_3_MIN 1536


int ether_types[] = {
	ETH_P_LOOP,
	ETH_P_PUP,
	ETH_P_PUPAT,
	ETH_P_TSN,
	ETH_P_IP,
	ETH_P_X25,
	ETH_P_ARP,
	ETH_P_IEEEPUP,
	ETH_P_IEEEPUPAT,
	ETH_P_BATMAN,
	ETH_P_DEC,
	ETH_P_DNA_DL,
	ETH_P_DNA_RC,
	ETH_P_DNA_RT,
	ETH_P_LAT,
	ETH_P_DIAG,
	ETH_P_CUST,
	ETH_P_SCA,
	ETH_P_TEB,
	ETH_P_RARP,
	ETH_P_ATALK,
	ETH_P_AARP,
	ETH_P_8021Q,
	ETH_P_IPX,
	ETH_P_IPV6,
	ETH_P_PAUSE,
	ETH_P_SLOW,
	ETH_P_WCCP,
	ETH_P_MPLS_UC,
	ETH_P_MPLS_MC,
	ETH_P_ATMMPOA,
	ETH_P_PPP_DISC,
	ETH_P_PPP_SES,
	ETH_P_LINK_CTL,
	ETH_P_ATMFATE,
	ETH_P_PAE,
	ETH_P_AOE,
	ETH_P_8021AD,
	ETH_P_802_EX1,
	ETH_P_TIPC,
	ETH_P_MACSEC,
	ETH_P_8021AH,
	ETH_P_MVRP,
	ETH_P_1588,
	ETH_P_NCSI,
	ETH_P_PRP,
	ETH_P_FCOE,
	ETH_P_TDLS,
	ETH_P_FIP,
	ETH_P_80221,
	ETH_P_HSR,
	ETH_P_LOOPBACK,
	ETH_P_QINQ1,
	ETH_P_QINQ2,
	ETH_P_QINQ3,
	ETH_P_EDSA,
	ETH_P_AF_IUCV,
	ETH_P_802_3_MIN
};


/* ---------- lo_flags ---------- */

#define LO_FLAGS_READ_ONLY 1
#define LO_FLAGS_AUTOCLEAR 4
#define LO_FLAGS_PARTSCAN 8
#define LO_FLAGS_DIRECT_IO 16


int lo_flags[] = {
	LO_FLAGS_READ_ONLY,
	LO_FLAGS_AUTOCLEAR,
	LO_FLAGS_PARTSCAN,
	LO_FLAGS_DIRECT_IO
};


/* ---------- ax25_socket_types ---------- */

#define SOCK_DGRAM 2
#define SOCK_SEQPACKET 5
#define SOCK_RAW 3


int ax25_socket_types[] = {
	SOCK_DGRAM,
	SOCK_SEQPACKET,
	SOCK_RAW
};


/* ---------- kvm_ioeventfd_len ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 8 Undefined in const file! Need to manually fill out !


int kvm_ioeventfd_len[] = {
	0,
	1,
	2,
	4,
	8
};


/* ---------- drm_vblank_seq_type ---------- */

#define _DRM_VBLANK_ABSOLUTE 0
#define _DRM_VBLANK_RELATIVE 1
#define _DRM_VBLANK_HIGH_CRTC_MASK 62
#define _DRM_VBLANK_EVENT 67108864
#define _DRM_VBLANK_FLIP 134217728
#define _DRM_VBLANK_NEXTONMISS 268435456
#define _DRM_VBLANK_SECONDARY 536870912
#define _DRM_VBLANK_SIGNAL 1073741824


int drm_vblank_seq_type[] = {
	_DRM_VBLANK_ABSOLUTE,
	_DRM_VBLANK_RELATIVE,
	_DRM_VBLANK_HIGH_CRTC_MASK,
	_DRM_VBLANK_EVENT,
	_DRM_VBLANK_FLIP,
	_DRM_VBLANK_NEXTONMISS,
	_DRM_VBLANK_SECONDARY,
	_DRM_VBLANK_SIGNAL
};


/* ---------- f_owner_type ---------- */

#define F_OWNER_TID 0
#define F_OWNER_PID 1
#define F_OWNER_PGRP 2


int f_owner_type[] = {
	F_OWNER_TID,
	F_OWNER_PID,
	F_OWNER_PGRP
};


/* ---------- sockopt_opt_ip_group_source_req ---------- */

#define MCAST_JOIN_SOURCE_GROUP 46
#define MCAST_LEAVE_SOURCE_GROUP 47
#define MCAST_BLOCK_SOURCE 43
#define MCAST_UNBLOCK_SOURCE 44


int sockopt_opt_ip_group_source_req[] = {
	MCAST_JOIN_SOURCE_GROUP,
	MCAST_LEAVE_SOURCE_GROUP,
	MCAST_BLOCK_SOURCE,
	MCAST_UNBLOCK_SOURCE
};


/* ---------- key_perm ---------- */

#define KEY_POS_VIEW 16777216
#define KEY_POS_READ 33554432
#define KEY_POS_WRITE 67108864
#define KEY_POS_SEARCH 134217728
#define KEY_POS_LINK 268435456
#define KEY_POS_SETATTR 536870912
#define KEY_USR_VIEW 65536
#define KEY_USR_READ 131072
#define KEY_USR_WRITE 262144
#define KEY_USR_SEARCH 524288
#define KEY_USR_LINK 1048576
#define KEY_USR_SETATTR 2097152
#define KEY_GRP_VIEW 256
#define KEY_GRP_READ 512
#define KEY_GRP_WRITE 1024
#define KEY_GRP_SEARCH 2048
#define KEY_GRP_LINK 4096
#define KEY_GRP_SETATTR 8192
#define KEY_OTH_VIEW 1
#define KEY_OTH_READ 2
#define KEY_OTH_WRITE 4
#define KEY_OTH_SEARCH 8
#define KEY_OTH_LINK 16
#define KEY_OTH_SETATTR 32
#define KEY_PERM_UNDEF 4294967295


int key_perm[] = {
	KEY_POS_VIEW,
	KEY_POS_READ,
	KEY_POS_WRITE,
	KEY_POS_SEARCH,
	KEY_POS_LINK,
	KEY_POS_SETATTR,
	KEY_USR_VIEW,
	KEY_USR_READ,
	KEY_USR_WRITE,
	KEY_USR_SEARCH,
	KEY_USR_LINK,
	KEY_USR_SETATTR,
	KEY_GRP_VIEW,
	KEY_GRP_READ,
	KEY_GRP_WRITE,
	KEY_GRP_SEARCH,
	KEY_GRP_LINK,
	KEY_GRP_SETATTR,
	KEY_OTH_VIEW,
	KEY_OTH_READ,
	KEY_OTH_WRITE,
	KEY_OTH_SEARCH,
	KEY_OTH_LINK,
	KEY_OTH_SETATTR,
	KEY_PERM_UNDEF
};


/* ---------- ptrace_req_poke ---------- */

#define PTRACE_POKETEXT 4
#define PTRACE_POKEDATA 5


int ptrace_req_poke[] = {
	PTRACE_POKETEXT,
	PTRACE_POKEDATA
};


/* ---------- sockopt_opt_ip_mreqsrc ---------- */

#define IP_ADD_SOURCE_MEMBERSHIP 39
#define IP_BLOCK_SOURCE 38
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define IP_UNBLOCK_SOURCE 37


int sockopt_opt_ip_mreqsrc[] = {
	IP_ADD_SOURCE_MEMBERSHIP,
	IP_BLOCK_SOURCE,
	IP_DROP_SOURCE_MEMBERSHIP,
	IP_UNBLOCK_SOURCE
};


/* ---------- snd_seq_sub_flags ---------- */

#define SNDRV_SEQ_PORT_SUBS_EXCLUSIVE 1
#define SNDRV_SEQ_PORT_SUBS_TIMESTAMP 2
#define SNDRV_SEQ_PORT_SUBS_TIME_REAL 4


int snd_seq_sub_flags[] = {
	SNDRV_SEQ_PORT_SUBS_EXCLUSIVE,
	SNDRV_SEQ_PORT_SUBS_TIMESTAMP,
	SNDRV_SEQ_PORT_SUBS_TIME_REAL
};


/* ---------- icmpv6_mld_types ---------- */

#define ICMPV6_MGM_QUERY 130
#define ICMPV6_MGM_REPORT 131
#define ICMPV6_MGM_REDUCTION 132


int icmpv6_mld_types[] = {
	ICMPV6_MGM_QUERY,
	ICMPV6_MGM_REPORT,
	ICMPV6_MGM_REDUCTION
};


/* ---------- nfc_raw_type ---------- */

#define SOCK_STREAM 1
#define SOCK_RAW 3


int nfc_raw_type[] = {
	SOCK_STREAM,
	SOCK_RAW
};


/* ---------- icmpv6_param_prob_codes ---------- */

#define ICMPV6_HDR_FIELD 0
#define ICMPV6_UNK_NEXTHDR 1
#define ICMPV6_UNK_OPTION 2


int icmpv6_param_prob_codes[] = {
	ICMPV6_HDR_FIELD,
	ICMPV6_UNK_NEXTHDR,
	ICMPV6_UNK_OPTION
};


/* ---------- ff_effect_type ---------- */

#define FF_PERIODIC 81
#define FF_CONSTANT 82
#define FF_SPRING 83
#define FF_FRICTION 84
#define FF_DAMPER 85
#define FF_INERTIA 86
#define FF_RAMP 87


int ff_effect_type[] = {
	FF_PERIODIC,
	FF_CONSTANT,
	FF_SPRING,
	FF_FRICTION,
	FF_DAMPER,
	FF_INERTIA,
	FF_RAMP
};


/* ---------- pipe_flags ---------- */

#define O_NONBLOCK 2048
#define O_CLOEXEC 524288


int pipe_flags[] = {
	O_NONBLOCK,
	O_CLOEXEC
};


/* ---------- ptrace_req ---------- */

#define PTRACE_TRACEME 0
#define PTRACE_LISTEN 16904
#define PTRACE_KILL 8
#define PTRACE_INTERRUPT 16903
#define PTRACE_ATTACH 16
#define PTRACE_DETACH 17


int ptrace_req[] = {
	PTRACE_TRACEME,
	PTRACE_LISTEN,
	PTRACE_KILL,
	PTRACE_INTERRUPT,
	PTRACE_ATTACH,
	PTRACE_DETACH
};


/* ---------- bpf_map_flags ---------- */

#define BPF_ANY 0
#define BPF_NOEXIST 1
#define BPF_EXIST 2


int bpf_map_flags[] = {
	BPF_ANY,
	BPF_NOEXIST,
	BPF_EXIST
};


/* ---------- ifreq_ioctls ---------- */

#define SIOCGIFNAME 35088
#define SIOCSIFLINK 35089
#define SIOCGIFFLAGS 35091
#define SIOCSIFFLAGS 35092
#define SIOCGIFADDR 35093
#define SIOCSIFADDR 35094
#define SIOCGIFDSTADDR 35095
#define SIOCSIFDSTADDR 35096
#define SIOCGIFBRDADDR 35097
#define SIOCSIFBRDADDR 35098
#define SIOCGIFNETMASK 35099
#define SIOCSIFNETMASK 35100
#define SIOCGIFMETRIC 35101
#define SIOCSIFMETRIC 35102
#define SIOCGIFMEM 35103
#define SIOCSIFMEM 35104
#define SIOCGIFMTU 35105
#define SIOCSIFMTU 35106
#define SIOCSIFNAME 35107
#define SIOCSIFHWADDR 35108
#define SIOCGIFENCAP 35109
#define SIOCSIFENCAP 35110
#define SIOCGIFHWADDR 35111
#define SIOCGIFSLAVE 35113
#define SIOCSIFSLAVE 35120
#define SIOCADDMULTI 35121
#define SIOCDELMULTI 35122
#define SIOCGIFINDEX 35123
#define SIOCSIFPFLAGS 35124
#define SIOCGIFPFLAGS 35125
#define SIOCDIFADDR 35126
#define SIOCSIFHWBROADCAST 35127
#define SIOCGIFCOUNT 35128
#define SIOCGIFTXQLEN 35138
#define SIOCSIFTXQLEN 35139
#define SIOCETHTOOL 35142
#define SIOCGMIIPHY 35143
#define SIOCGMIIREG 35144
#define SIOCSMIIREG 35145
#define SIOCWANDEV 35146
#define SIOCGIFMAP 35184
#define SIOCSIFMAP 35185
#define SIOCBONDENSLAVE 35216
#define SIOCBONDRELEASE 35217
#define SIOCBONDSETHWADDR 35218
#define SIOCBONDSLAVEINFOQUERY 35219
#define SIOCBONDINFOQUERY 35220
#define SIOCBONDCHANGEACTIVE 35221
#define SIOCBRADDIF 35234
#define SIOCBRDELIF 35235
#define SIOCSHWTSTAMP 35248
#define SIOCGHWTSTAMP 35249


int ifreq_ioctls[] = {
	SIOCGIFNAME,
	SIOCSIFLINK,
	SIOCGIFFLAGS,
	SIOCSIFFLAGS,
	SIOCGIFADDR,
	SIOCSIFADDR,
	SIOCGIFDSTADDR,
	SIOCSIFDSTADDR,
	SIOCGIFBRDADDR,
	SIOCSIFBRDADDR,
	SIOCGIFNETMASK,
	SIOCSIFNETMASK,
	SIOCGIFMETRIC,
	SIOCSIFMETRIC,
	SIOCGIFMEM,
	SIOCSIFMEM,
	SIOCGIFMTU,
	SIOCSIFMTU,
	SIOCSIFNAME,
	SIOCSIFHWADDR,
	SIOCGIFENCAP,
	SIOCSIFENCAP,
	SIOCGIFHWADDR,
	SIOCGIFSLAVE,
	SIOCSIFSLAVE,
	SIOCADDMULTI,
	SIOCDELMULTI,
	SIOCGIFINDEX,
	SIOCSIFPFLAGS,
	SIOCGIFPFLAGS,
	SIOCDIFADDR,
	SIOCSIFHWBROADCAST,
	SIOCGIFCOUNT,
	SIOCGIFTXQLEN,
	SIOCSIFTXQLEN,
	SIOCETHTOOL,
	SIOCGMIIPHY,
	SIOCGMIIREG,
	SIOCSMIIREG,
	SIOCWANDEV,
	SIOCGIFMAP,
	SIOCSIFMAP,
	SIOCBONDENSLAVE,
	SIOCBONDRELEASE,
	SIOCBONDSETHWADDR,
	SIOCBONDSLAVEINFOQUERY,
	SIOCBONDINFOQUERY,
	SIOCBONDCHANGEACTIVE,
	SIOCBRADDIF,
	SIOCBRDELIF,
	SIOCSHWTSTAMP,
	SIOCGHWTSTAMP
};


/* ---------- sap_snap_values ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define LLC_SAP_SNAP 170


int sap_snap_values[] = {
	1,
	LLC_SAP_SNAP
};


/* ---------- nfc_llcp_type ---------- */

#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_RAW 3


int nfc_llcp_type[] = {
	SOCK_STREAM,
	SOCK_DGRAM,
	SOCK_RAW
};


/* ---------- flr_actions ---------- */

#define IPV6_FL_A_GET 0
#define IPV6_FL_A_PUT 1
#define IPV6_FL_A_RENEW 2


int flr_actions[] = {
	IPV6_FL_A_GET,
	IPV6_FL_A_PUT,
	IPV6_FL_A_RENEW
};


/* ---------- kvm_irq_routing_entry_type ---------- */

#define KVM_IRQ_ROUTING_IRQCHIP 1
#define KVM_IRQ_ROUTING_MSI 2
#define KVM_IRQ_ROUTING_S390_ADAPTER 3
#define KVM_IRQ_ROUTING_HV_SINT 4


int kvm_irq_routing_entry_type[] = {
	KVM_IRQ_ROUTING_IRQCHIP,
	KVM_IRQ_ROUTING_MSI,
	KVM_IRQ_ROUTING_S390_ADAPTER,
	KVM_IRQ_ROUTING_HV_SINT
};


/* ---------- fcntl_status ---------- */

#define O_APPEND 1024
#define FASYNC 8192
#define O_DIRECT 65536
#define O_NOATIME 262144
#define O_NONBLOCK 2048


int fcntl_status[] = {
	O_APPEND,
	FASYNC,
	O_DIRECT,
	O_NOATIME,
	O_NONBLOCK
};


/* ---------- flr_shares ---------- */

#define IPV6_FL_S_NONE 0
#define IPV6_FL_S_EXCL 1
#define IPV6_FL_S_PROCESS 2
#define IPV6_FL_S_USER 3
#define IPV6_FL_S_ANY 255


int flr_shares[] = {
	IPV6_FL_S_NONE,
	IPV6_FL_S_EXCL,
	IPV6_FL_S_PROCESS,
	IPV6_FL_S_USER,
	IPV6_FL_S_ANY
};


/* ---------- ax25_option_types_buf ---------- */

#define SO_BINDTODEVICE 25


int ax25_option_types_buf[] = {
	SO_BINDTODEVICE
};


/* ---------- ifru_flags ---------- */

#define IFF_TUN 1
#define IFF_TAP 2
#define IFF_NO_PI 4096
#define IFF_ONE_QUEUE 8192
#define IFF_VNET_HDR 16384
#define IFF_TUN_EXCL 32768
#define IFF_MULTI_QUEUE 256
#define IFF_ATTACH_QUEUE 512
#define IFF_DETACH_QUEUE 1024
#define IFF_PERSIST 2048
#define IFF_NOFILTER 4096


int ifru_flags[] = {
	IFF_TUN,
	IFF_TAP,
	IFF_NO_PI,
	IFF_ONE_QUEUE,
	IFF_VNET_HDR,
	IFF_TUN_EXCL,
	IFF_MULTI_QUEUE,
	IFF_ATTACH_QUEUE,
	IFF_DETACH_QUEUE,
	IFF_PERSIST,
	IFF_NOFILTER
};


/* ---------- sockopt_opt_sock_timeval ---------- */

#define SO_RCVTIMEO 20
#define SO_SNDTIMEO 21


int sockopt_opt_sock_timeval[] = {
	SO_RCVTIMEO,
	SO_SNDTIMEO
};


/* ---------- x25_frame_types ---------- */

#define X25_CALL_REQUEST 11
#define X25_CALL_ACCEPTED 15
#define X25_CLEAR_REQUEST 19
#define X25_CLEAR_CONFIRMATION 23
#define X25_DATA 0
#define X25_INTERRUPT 35
#define X25_INTERRUPT_CONFIRMATION 39
#define X25_RR 1
#define X25_RNR 5
#define X25_REJ 9
#define X25_RESET_REQUEST 27
#define X25_RESET_CONFIRMATION 31
#define X25_REGISTRATION_REQUEST 243
#define X25_REGISTRATION_CONFIRMATION 247
#define X25_RESTART_REQUEST 251
#define X25_RESTART_CONFIRMATION 255
#define X25_DIAGNOSTIC 241
#define X25_ILLEGAL 253


int x25_frame_types[] = {
	X25_CALL_REQUEST,
	X25_CALL_ACCEPTED,
	X25_CLEAR_REQUEST,
	X25_CLEAR_CONFIRMATION,
	X25_DATA,
	X25_INTERRUPT,
	X25_INTERRUPT_CONFIRMATION,
	X25_RR,
	X25_RNR,
	X25_REJ,
	X25_RESET_REQUEST,
	X25_RESET_CONFIRMATION,
	X25_REGISTRATION_REQUEST,
	X25_REGISTRATION_CONFIRMATION,
	X25_RESTART_REQUEST,
	X25_RESTART_CONFIRMATION,
	X25_DIAGNOSTIC,
	X25_ILLEGAL
};


/* ---------- icmpv6_ni_types ---------- */

#define ICMPV6_NI_QUERY 139
#define ICMPV6_NI_REPLY 140


int icmpv6_ni_types[] = {
	ICMPV6_NI_QUERY,
	ICMPV6_NI_REPLY
};


/* ---------- xfrm_policy_flags ---------- */

#define XFRM_STATE_NOECN 1
#define XFRM_STATE_DECAP_DSCP 2
#define XFRM_STATE_NOPMTUDISC 4
#define XFRM_STATE_WILDRECV 8
#define XFRM_STATE_ICMP 16
#define XFRM_STATE_AF_UNSPEC 32
#define XFRM_STATE_ALIGN4 64
#define XFRM_STATE_ESN 128


int xfrm_policy_flags[] = {
	XFRM_STATE_NOECN,
	XFRM_STATE_DECAP_DSCP,
	XFRM_STATE_NOPMTUDISC,
	XFRM_STATE_WILDRECV,
	XFRM_STATE_ICMP,
	XFRM_STATE_AF_UNSPEC,
	XFRM_STATE_ALIGN4,
	XFRM_STATE_ESN
};


/* ---------- kvm_mcg_status ---------- */

#define MCG_STATUS_RIPV 1
#define MCG_STATUS_EIPV 2
#define MCG_STATUS_MCIP 4
#define MCG_STATUS_LMCES 8


int kvm_mcg_status[] = {
	MCG_STATUS_RIPV,
	MCG_STATUS_EIPV,
	MCG_STATUS_MCIP,
	MCG_STATUS_LMCES
};


/* ---------- arch_prctl_code ---------- */

#define ARCH_SET_FS 4098
#define ARCH_GET_FS 4099
#define ARCH_SET_GS 4097
#define ARCH_GET_GS 4100


int arch_prctl_code[] = {
	ARCH_SET_FS,
	ARCH_GET_FS,
	ARCH_SET_GS,
	ARCH_GET_GS
};


/* ---------- kvm_setup_flags ---------- */

#define KVM_SETUP_PAGING 1
#define KVM_SETUP_PAE 2
#define KVM_SETUP_PROTECTED 4
#define KVM_SETUP_CPL3 8
#define KVM_SETUP_VIRT86 16
#define KVM_SETUP_SMM 32
#define KVM_SETUP_VM 64


int kvm_setup_flags[] = {
	KVM_SETUP_PAGING,
	KVM_SETUP_PAE,
	KVM_SETUP_PROTECTED,
	KVM_SETUP_CPL3,
	KVM_SETUP_VIRT86,
	KVM_SETUP_SMM,
	KVM_SETUP_VM
};


/* ---------- drm_buf_flags ---------- */

#define _DRM_PAGE_ALIGN 1
#define _DRM_AGP_BUFFER 2
#define _DRM_SG_BUFFER 4
#define _DRM_FB_BUFFER 8
#define _DRM_PCI_BUFFER_RO 16


int drm_buf_flags[] = {
	_DRM_PAGE_ALIGN,
	_DRM_AGP_BUFFER,
	_DRM_SG_BUFFER,
	_DRM_FB_BUFFER,
	_DRM_PCI_BUFFER_RO
};


/* ---------- eventfd_flags ---------- */

#define EFD_CLOEXEC 524288
#define EFD_NONBLOCK 2048
#define EFD_SEMAPHORE 1


int eventfd_flags[] = {
	EFD_CLOEXEC,
	EFD_NONBLOCK,
	EFD_SEMAPHORE
};


/* ---------- perf_sample_type ---------- */

#define PERF_SAMPLE_IP 1
#define PERF_SAMPLE_TID 2
#define PERF_SAMPLE_TIME 4
#define PERF_SAMPLE_ADDR 8
#define PERF_SAMPLE_READ 16
#define PERF_SAMPLE_CALLCHAIN 32
#define PERF_SAMPLE_ID 64
#define PERF_SAMPLE_CPU 128
#define PERF_SAMPLE_PERIOD 256
#define PERF_SAMPLE_STREAM_ID 512
#define PERF_SAMPLE_RAW 1024
#define PERF_SAMPLE_BRANCH_STACK 2048
#define PERF_SAMPLE_REGS_USER 4096
#define PERF_SAMPLE_STACK_USER 8192
#define PERF_SAMPLE_WEIGHT 16384
#define PERF_SAMPLE_DATA_SRC 32768
#define PERF_SAMPLE_IDENTIFIER 65536
#define PERF_SAMPLE_TRANSACTION 131072
#define PERF_SAMPLE_REGS_INTR 262144


int perf_sample_type[] = {
	PERF_SAMPLE_IP,
	PERF_SAMPLE_TID,
	PERF_SAMPLE_TIME,
	PERF_SAMPLE_ADDR,
	PERF_SAMPLE_READ,
	PERF_SAMPLE_CALLCHAIN,
	PERF_SAMPLE_ID,
	PERF_SAMPLE_CPU,
	PERF_SAMPLE_PERIOD,
	PERF_SAMPLE_STREAM_ID,
	PERF_SAMPLE_RAW,
	PERF_SAMPLE_BRANCH_STACK,
	PERF_SAMPLE_REGS_USER,
	PERF_SAMPLE_STACK_USER,
	PERF_SAMPLE_WEIGHT,
	PERF_SAMPLE_DATA_SRC,
	PERF_SAMPLE_IDENTIFIER,
	PERF_SAMPLE_TRANSACTION,
	PERF_SAMPLE_REGS_INTR
};


/* ---------- snd_timer_flags ---------- */

#define SNDRV_TIMER_PSFLG_AUTO 1
#define SNDRV_TIMER_PSFLG_EXCLUSIVE 2
#define SNDRV_TIMER_PSFLG_EARLY_EVENT 4


int snd_timer_flags[] = {
	SNDRV_TIMER_PSFLG_AUTO,
	SNDRV_TIMER_PSFLG_EXCLUSIVE,
	SNDRV_TIMER_PSFLG_EARLY_EVENT
};


/* ---------- clock_id ---------- */

#define CLOCK_REALTIME 0
#define CLOCK_REALTIME_COARSE 5
#define CLOCK_MONOTONIC 1
#define CLOCK_MONOTONIC_COARSE 6
#define CLOCK_MONOTONIC_RAW 4
#define CLOCK_BOOTTIME 7
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID 3


int clock_id[] = {
	CLOCK_REALTIME,
	CLOCK_REALTIME_COARSE,
	CLOCK_MONOTONIC,
	CLOCK_MONOTONIC_COARSE,
	CLOCK_MONOTONIC_RAW,
	CLOCK_BOOTTIME,
	CLOCK_PROCESS_CPUTIME_ID,
	CLOCK_THREAD_CPUTIME_ID
};


/* ---------- virtio_net_types ---------- */

#define VIRTIO_NET_HDR_GSO_NONE 0
#define VIRTIO_NET_HDR_GSO_TCPV4 1
#define VIRTIO_NET_HDR_GSO_UDP 3
#define VIRTIO_NET_HDR_GSO_TCPV6 4
#define VIRTIO_NET_HDR_GSO_ECN 128


int virtio_net_types[] = {
	VIRTIO_NET_HDR_GSO_NONE,
	VIRTIO_NET_HDR_GSO_TCPV4,
	VIRTIO_NET_HDR_GSO_UDP,
	VIRTIO_NET_HDR_GSO_TCPV6,
	VIRTIO_NET_HDR_GSO_ECN
};


/* ---------- kvm_mp_state ---------- */

#define KVM_MP_STATE_RUNNABLE 0
#define KVM_MP_STATE_UNINITIALIZED 1
#define KVM_MP_STATE_INIT_RECEIVED 2
#define KVM_MP_STATE_HALTED 3
#define KVM_MP_STATE_SIPI_RECEIVED 4
#define KVM_MP_STATE_STOPPED 5
#define KVM_MP_STATE_CHECK_STOP 6
#define KVM_MP_STATE_OPERATING 7
#define KVM_MP_STATE_LOAD 8


int kvm_mp_state[] = {
	KVM_MP_STATE_RUNNABLE,
	KVM_MP_STATE_UNINITIALIZED,
	KVM_MP_STATE_INIT_RECEIVED,
	KVM_MP_STATE_HALTED,
	KVM_MP_STATE_SIPI_RECEIVED,
	KVM_MP_STATE_STOPPED,
	KVM_MP_STATE_CHECK_STOP,
	KVM_MP_STATE_OPERATING,
	KVM_MP_STATE_LOAD
};


/* ---------- syz_length_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !


int syz_length_flags[] = {
	0,
	1
};


/* ---------- mremap_flags ---------- */

#define MREMAP_MAYMOVE 1
#define MREMAP_FIXED 2


int mremap_flags[] = {
	MREMAP_MAYMOVE,
	MREMAP_FIXED
};


/* ---------- sockopt_opt_ipv6_group_source_req ---------- */

#define MCAST_JOIN_SOURCE_GROUP 46
#define MCAST_LEAVE_SOURCE_GROUP 47
#define MCAST_BLOCK_SOURCE 43
#define MCAST_UNBLOCK_SOURCE 44


int sockopt_opt_ipv6_group_source_req[] = {
	MCAST_JOIN_SOURCE_GROUP,
	MCAST_LEAVE_SOURCE_GROUP,
	MCAST_BLOCK_SOURCE,
	MCAST_UNBLOCK_SOURCE
};


/* ---------- prctl_code_void ---------- */

#define PR_GET_DUMPABLE 3
#define PR_GET_KEEPCAPS 7
#define PR_GET_NO_NEW_PRIVS 39
#define PR_GET_SECCOMP 21
#define PR_GET_SECUREBITS 27
#define PR_GET_TIMERSLACK 30
#define PR_GET_TIMING 13
#define PR_TASK_PERF_EVENTS_DISABLE 31
#define PR_TASK_PERF_EVENTS_ENABLE 32
#define PR_MCE_KILL_GET 34


int prctl_code_void[] = {
	PR_GET_DUMPABLE,
	PR_GET_KEEPCAPS,
	PR_GET_NO_NEW_PRIVS,
	PR_GET_SECCOMP,
	PR_GET_SECUREBITS,
	PR_GET_TIMERSLACK,
	PR_GET_TIMING,
	PR_TASK_PERF_EVENTS_DISABLE,
	PR_TASK_PERF_EVENTS_ENABLE,
	PR_MCE_KILL_GET
};


/* ---------- send_flags ---------- */

#define MSG_CONFIRM 2048
#define MSG_DONTROUTE 4
#define MSG_DONTWAIT 64
#define MSG_EOR 128
#define MSG_MORE 32768
#define MSG_NOSIGNAL 16384
#define MSG_OOB 1
#define MSG_PROBE 16
#define MSG_BATCH 262144
#define MSG_FASTOPEN 536870912


int send_flags[] = {
	MSG_CONFIRM,
	MSG_DONTROUTE,
	MSG_DONTWAIT,
	MSG_EOR,
	MSG_MORE,
	MSG_NOSIGNAL,
	MSG_OOB,
	MSG_PROBE,
	MSG_BATCH,
	MSG_FASTOPEN
};


/* ---------- snd_timer_name ---------- */

#define "timer0" Undefined in const file! Need to manually fill out !
#define "timer1" Undefined in const file! Need to manually fill out !


char* snd_timer_name[] = {
	"timer0",
	"timer1"
};


/* ---------- snd_timer_class ---------- */

#define SNDRV_TIMER_CLASS_NONE 18446744073709551615
#define SNDRV_TIMER_CLASS_SLAVE 0
#define SNDRV_TIMER_CLASS_GLOBAL 1
#define SNDRV_TIMER_CLASS_CARD 2
#define SNDRV_TIMER_CLASS_PCM 3


int snd_timer_class[] = {
	SNDRV_TIMER_CLASS_NONE,
	SNDRV_TIMER_CLASS_SLAVE,
	SNDRV_TIMER_CLASS_GLOBAL,
	SNDRV_TIMER_CLASS_CARD,
	SNDRV_TIMER_CLASS_PCM
};


/* ---------- perf_attr_flags ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 8 Undefined in const file! Need to manually fill out !


int perf_attr_flags[] = {
	1,
	2,
	4,
	8
};


/* ---------- kvm_x86_cr4 ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 8 Undefined in const file! Need to manually fill out !
#define 16 Undefined in const file! Need to manually fill out !
#define 32 Undefined in const file! Need to manually fill out !
#define 64 Undefined in const file! Need to manually fill out !
#define 128 Undefined in const file! Need to manually fill out !
#define 256 Undefined in const file! Need to manually fill out !
#define 512 Undefined in const file! Need to manually fill out !
#define 1024 Undefined in const file! Need to manually fill out !
#define 8192 Undefined in const file! Need to manually fill out !
#define 16384 Undefined in const file! Need to manually fill out !
#define 65536 Undefined in const file! Need to manually fill out !
#define 131072 Undefined in const file! Need to manually fill out !
#define 262144 Undefined in const file! Need to manually fill out !
#define 1048576 Undefined in const file! Need to manually fill out !
#define 2097152 Undefined in const file! Need to manually fill out !
#define 4194304 Undefined in const file! Need to manually fill out !


int kvm_x86_cr4[] = {
	1,
	2,
	4,
	8,
	16,
	32,
	64,
	128,
	256,
	512,
	1024,
	8192,
	16384,
	65536,
	131072,
	262144,
	1048576,
	2097152,
	4194304
};


/* ---------- arp_htypes ---------- */

#define ARPHRD_NETROM 0
#define ARPHRD_ETHER 1
#define ARPHRD_EETHER 2
#define ARPHRD_AX25 3
#define ARPHRD_PRONET 4
#define ARPHRD_CHAOS 5
#define ARPHRD_IEEE802 6
#define ARPHRD_ARCNET 7
#define ARPHRD_APPLETLK 8
#define ARPHRD_DLCI 15
#define ARPHRD_ATM 19
#define ARPHRD_METRICOM 23
#define ARPHRD_IEEE1394 24
#define ARPHRD_EUI64 27
#define ARPHRD_INFINIBAND 32
#define ARPHRD_SLIP 256
#define ARPHRD_CSLIP 257
#define ARPHRD_SLIP6 258
#define ARPHRD_CSLIP6 259
#define ARPHRD_RSRVD 260
#define ARPHRD_ADAPT 264
#define ARPHRD_ROSE 270
#define ARPHRD_X25 271
#define ARPHRD_HWX25 272
#define ARPHRD_CAN 280
#define ARPHRD_PPP 512
#define ARPHRD_CISCO 513
#define ARPHRD_HDLC 513
#define ARPHRD_LAPB 516
#define ARPHRD_DDCMP 517
#define ARPHRD_RAWHDLC 518
#define ARPHRD_TUNNEL 768
#define ARPHRD_TUNNEL6 769
#define ARPHRD_FRAD 770
#define ARPHRD_SKIP 771
#define ARPHRD_LOOPBACK 772
#define ARPHRD_LOCALTLK 773
#define ARPHRD_FDDI 774
#define ARPHRD_BIF 775
#define ARPHRD_SIT 776
#define ARPHRD_IPDDP 777
#define ARPHRD_IPGRE 778
#define ARPHRD_PIMREG 779
#define ARPHRD_HIPPI 780
#define ARPHRD_ASH 781
#define ARPHRD_ECONET 782
#define ARPHRD_IRDA 783
#define ARPHRD_FCPP 784
#define ARPHRD_FCAL 785
#define ARPHRD_FCPL 786
#define ARPHRD_FCFABRIC 787
#define ARPHRD_IEEE802_TR 800
#define ARPHRD_IEEE80211 801
#define ARPHRD_IEEE80211_PRISM 802
#define ARPHRD_IEEE80211_RADIOTAP 803
#define ARPHRD_IEEE802154 804
#define ARPHRD_IEEE802154_MONITOR 805
#define ARPHRD_PHONET 820
#define ARPHRD_PHONET_PIPE 821
#define ARPHRD_CAIF 822
#define ARPHRD_IP6GRE 823
#define ARPHRD_NETLINK 824
#define ARPHRD_6LOWPAN 825
#define ARPHRD_VOID 65535
#define ARPHRD_NONE 65534


int arp_htypes[] = {
	ARPHRD_NETROM,
	ARPHRD_ETHER,
	ARPHRD_EETHER,
	ARPHRD_AX25,
	ARPHRD_PRONET,
	ARPHRD_CHAOS,
	ARPHRD_IEEE802,
	ARPHRD_ARCNET,
	ARPHRD_APPLETLK,
	ARPHRD_DLCI,
	ARPHRD_ATM,
	ARPHRD_METRICOM,
	ARPHRD_IEEE1394,
	ARPHRD_EUI64,
	ARPHRD_INFINIBAND,
	ARPHRD_SLIP,
	ARPHRD_CSLIP,
	ARPHRD_SLIP6,
	ARPHRD_CSLIP6,
	ARPHRD_RSRVD,
	ARPHRD_ADAPT,
	ARPHRD_ROSE,
	ARPHRD_X25,
	ARPHRD_HWX25,
	ARPHRD_CAN,
	ARPHRD_PPP,
	ARPHRD_CISCO,
	ARPHRD_HDLC,
	ARPHRD_LAPB,
	ARPHRD_DDCMP,
	ARPHRD_RAWHDLC,
	ARPHRD_TUNNEL,
	ARPHRD_TUNNEL6,
	ARPHRD_FRAD,
	ARPHRD_SKIP,
	ARPHRD_LOOPBACK,
	ARPHRD_LOCALTLK,
	ARPHRD_FDDI,
	ARPHRD_BIF,
	ARPHRD_SIT,
	ARPHRD_IPDDP,
	ARPHRD_IPGRE,
	ARPHRD_PIMREG,
	ARPHRD_HIPPI,
	ARPHRD_ASH,
	ARPHRD_ECONET,
	ARPHRD_IRDA,
	ARPHRD_FCPP,
	ARPHRD_FCAL,
	ARPHRD_FCPL,
	ARPHRD_FCFABRIC,
	ARPHRD_IEEE802_TR,
	ARPHRD_IEEE80211,
	ARPHRD_IEEE80211_PRISM,
	ARPHRD_IEEE80211_RADIOTAP,
	ARPHRD_IEEE802154,
	ARPHRD_IEEE802154_MONITOR,
	ARPHRD_PHONET,
	ARPHRD_PHONET_PIPE,
	ARPHRD_CAIF,
	ARPHRD_IP6GRE,
	ARPHRD_NETLINK,
	ARPHRD_6LOWPAN,
	ARPHRD_VOID,
	ARPHRD_NONE
};


/* ---------- icmp_dest_unreach_codes ---------- */

#define ICMP_NET_UNREACH 0
#define ICMP_HOST_UNREACH 1
#define ICMP_PROT_UNREACH 2
#define ICMP_PORT_UNREACH 3
#define ICMP_FRAG_NEEDED 4
#define ICMP_SR_FAILED 5
#define ICMP_NET_UNKNOWN 6
#define ICMP_HOST_UNKNOWN 7
#define ICMP_HOST_ISOLATED 8
#define ICMP_NET_ANO 9
#define ICMP_HOST_ANO 10
#define ICMP_NET_UNR_TOS 11
#define ICMP_HOST_UNR_TOS 12
#define ICMP_PKT_FILTERED 13
#define ICMP_PREC_VIOLATION 14
#define ICMP_PREC_CUTOFF 15


int icmp_dest_unreach_codes[] = {
	ICMP_NET_UNREACH,
	ICMP_HOST_UNREACH,
	ICMP_PROT_UNREACH,
	ICMP_PORT_UNREACH,
	ICMP_FRAG_NEEDED,
	ICMP_SR_FAILED,
	ICMP_NET_UNKNOWN,
	ICMP_HOST_UNKNOWN,
	ICMP_HOST_ISOLATED,
	ICMP_NET_ANO,
	ICMP_HOST_ANO,
	ICMP_NET_UNR_TOS,
	ICMP_HOST_UNR_TOS,
	ICMP_PKT_FILTERED,
	ICMP_PREC_VIOLATION,
	ICMP_PREC_CUTOFF
};


/* ---------- ip_msfilter_mode ---------- */

#define MCAST_INCLUDE 1
#define MCAST_EXCLUDE 0


int ip_msfilter_mode[] = {
	MCAST_INCLUDE,
	MCAST_EXCLUDE
};


/* ---------- kvm_vm_caps ---------- */

#define KVM_CAP_DISABLE_QUIRKS 116
#define KVM_CAP_SPLIT_IRQCHIP 121
#define KVM_CAP_X2APIC_API 129


int kvm_vm_caps[] = {
	KVM_CAP_DISABLE_QUIRKS,
	KVM_CAP_SPLIT_IRQCHIP,
	KVM_CAP_X2APIC_API
};


/* ---------- sctp_socket_type ---------- */

#define SOCK_STREAM 1
#define SOCK_SEQPACKET 5


int sctp_socket_type[] = {
	SOCK_STREAM,
	SOCK_SEQPACKET
};


/* ---------- inet_option_types_buf ---------- */

#define IP_OPTIONS 4
#define IP_PKTOPTIONS 9
#define IP_IPSEC_POLICY 16
#define IP_XFRM_POLICY 17
#define IP_MULTICAST_IF 32
#define IP_ADD_MEMBERSHIP 35
#define IP_DROP_MEMBERSHIP 36
#define IP_UNBLOCK_SOURCE 37
#define IP_BLOCK_SOURCE 38
#define IP_ADD_SOURCE_MEMBERSHIP 39
#define IP_DROP_SOURCE_MEMBERSHIP 40
#define IP_MSFILTER 41
#define MCAST_JOIN_GROUP 42
#define MCAST_BLOCK_SOURCE 43
#define MCAST_UNBLOCK_SOURCE 44
#define MCAST_LEAVE_GROUP 45
#define MCAST_JOIN_SOURCE_GROUP 46
#define MCAST_LEAVE_SOURCE_GROUP 47
#define MCAST_MSFILTER 48


int inet_option_types_buf[] = {
	IP_OPTIONS,
	IP_PKTOPTIONS,
	IP_IPSEC_POLICY,
	IP_XFRM_POLICY,
	IP_MULTICAST_IF,
	IP_ADD_MEMBERSHIP,
	IP_DROP_MEMBERSHIP,
	IP_UNBLOCK_SOURCE,
	IP_BLOCK_SOURCE,
	IP_ADD_SOURCE_MEMBERSHIP,
	IP_DROP_SOURCE_MEMBERSHIP,
	IP_MSFILTER,
	MCAST_JOIN_GROUP,
	MCAST_BLOCK_SOURCE,
	MCAST_UNBLOCK_SOURCE,
	MCAST_LEAVE_GROUP,
	MCAST_JOIN_SOURCE_GROUP,
	MCAST_LEAVE_SOURCE_GROUP,
	MCAST_MSFILTER
};


/* ---------- rtmsg_flags ---------- */

#define RTF_UP 1
#define RTF_GATEWAY 2
#define RTF_HOST 4
#define RTF_REINSTATE 8
#define RTF_DYNAMIC 16
#define RTF_MODIFIED 32
#define RTF_MTU 64
#define RTF_WINDOW 128
#define RTF_IRTT 256
#define RTF_REJECT 512
#define RTF_DEFAULT 65536
#define RTF_ALLONLINK 131072
#define RTF_ADDRCONF 262144
#define RTF_PREFIX_RT 524288
#define RTF_ANYCAST 1048576
#define RTF_NONEXTHOP 2097152
#define RTF_EXPIRES 4194304
#define RTF_ROUTEINFO 8388608
#define RTF_CACHE 16777216
#define RTF_FLOW 33554432
#define RTF_POLICY 67108864
#define RTF_PCPU 1073741824
#define RTF_LOCAL 2147483648


int rtmsg_flags[] = {
	RTF_UP,
	RTF_GATEWAY,
	RTF_HOST,
	RTF_REINSTATE,
	RTF_DYNAMIC,
	RTF_MODIFIED,
	RTF_MTU,
	RTF_WINDOW,
	RTF_IRTT,
	RTF_REJECT,
	RTF_DEFAULT,
	RTF_ALLONLINK,
	RTF_ADDRCONF,
	RTF_PREFIX_RT,
	RTF_ANYCAST,
	RTF_NONEXTHOP,
	RTF_EXPIRES,
	RTF_ROUTEINFO,
	RTF_CACHE,
	RTF_FLOW,
	RTF_POLICY,
	RTF_PCPU,
	RTF_LOCAL
};


/* ---------- fanotify_flags ---------- */

#define FAN_CLASS_PRE_CONTENT 8
#define FAN_CLASS_CONTENT 4
#define FAN_CLASS_NOTIF 0
#define FAN_CLOEXEC 1
#define FAN_NONBLOCK 2
#define FAN_UNLIMITED_QUEUE 16
#define FAN_UNLIMITED_MARKS 32


int fanotify_flags[] = {
	FAN_CLASS_PRE_CONTENT,
	FAN_CLASS_CONTENT,
	FAN_CLASS_NOTIF,
	FAN_CLOEXEC,
	FAN_NONBLOCK,
	FAN_UNLIMITED_QUEUE,
	FAN_UNLIMITED_MARKS
};


/* ---------- reqkey_keyring ---------- */

#define KEY_REQKEY_DEFL_NO_CHANGE 18446744073709551615
#define KEY_REQKEY_DEFL_DEFAULT 0
#define KEY_REQKEY_DEFL_THREAD_KEYRING 1
#define KEY_REQKEY_DEFL_PROCESS_KEYRING 2
#define KEY_REQKEY_DEFL_SESSION_KEYRING 3
#define KEY_REQKEY_DEFL_USER_KEYRING 4
#define KEY_REQKEY_DEFL_USER_SESSION_KEYRING 5
#define KEY_REQKEY_DEFL_GROUP_KEYRING 6
#define KEY_REQKEY_DEFL_REQUESTOR_KEYRING 7


int reqkey_keyring[] = {
	KEY_REQKEY_DEFL_NO_CHANGE,
	KEY_REQKEY_DEFL_DEFAULT,
	KEY_REQKEY_DEFL_THREAD_KEYRING,
	KEY_REQKEY_DEFL_PROCESS_KEYRING,
	KEY_REQKEY_DEFL_SESSION_KEYRING,
	KEY_REQKEY_DEFL_USER_KEYRING,
	KEY_REQKEY_DEFL_USER_SESSION_KEYRING,
	KEY_REQKEY_DEFL_GROUP_KEYRING,
	KEY_REQKEY_DEFL_REQUESTOR_KEYRING
};


/* ---------- sigev_notify ---------- */

#define SIGEV_NONE 1
#define SIGEV_SIGNAL 0
#define SIGEV_THREAD 2
#define SIGEV_THREAD_ID 4


int sigev_notify[] = {
	SIGEV_NONE,
	SIGEV_SIGNAL,
	SIGEV_THREAD,
	SIGEV_THREAD_ID
};


/* ---------- kvm_assigned_irq_flags ---------- */

#define KVM_DEV_IRQ_HOST_INTX 1
#define KVM_DEV_IRQ_HOST_MSI 2
#define KVM_DEV_IRQ_HOST_MSIX 4
#define KVM_DEV_IRQ_GUEST_INTX 256
#define KVM_DEV_IRQ_GUEST_MSI 512
#define KVM_DEV_IRQ_GUEST_MSIX 1024


int kvm_assigned_irq_flags[] = {
	KVM_DEV_IRQ_HOST_INTX,
	KVM_DEV_IRQ_HOST_MSI,
	KVM_DEV_IRQ_HOST_MSIX,
	KVM_DEV_IRQ_GUEST_INTX,
	KVM_DEV_IRQ_GUEST_MSI,
	KVM_DEV_IRQ_GUEST_MSIX
};


/* ---------- shmat_flags ---------- */

#define SHM_RND 8192
#define SHM_RDONLY 4096
#define SHM_REMAP 16384


int shmat_flags[] = {
	SHM_RND,
	SHM_RDONLY,
	SHM_REMAP
};


/* ---------- fcntl_lock ---------- */

#define F_SETLK 6
#define F_SETLKW 7
#define F_GETLK 5


int fcntl_lock[] = {
	F_SETLK,
	F_SETLKW,
	F_GETLK
};


/* ---------- icmp_types ---------- */

#define ICMP_ECHOREPLY 0
#define ICMP_DEST_UNREACH 3
#define ICMP_SOURCE_QUENCH 4
#define ICMP_REDIRECT 5
#define ICMP_ECHO 8
#define ICMP_TIME_EXCEEDED 11
#define ICMP_PARAMETERPROB 12
#define ICMP_TIMESTAMP 13
#define ICMP_TIMESTAMPREPLY 14
#define ICMP_INFO_REQUEST 15
#define ICMP_INFO_REPLY 16
#define ICMP_ADDRESS 17
#define ICMP_ADDRESSREPLY 18


int icmp_types[] = {
	ICMP_ECHOREPLY,
	ICMP_DEST_UNREACH,
	ICMP_SOURCE_QUENCH,
	ICMP_REDIRECT,
	ICMP_ECHO,
	ICMP_TIME_EXCEEDED,
	ICMP_PARAMETERPROB,
	ICMP_TIMESTAMP,
	ICMP_TIMESTAMPREPLY,
	ICMP_INFO_REQUEST,
	ICMP_INFO_REPLY,
	ICMP_ADDRESS,
	ICMP_ADDRESSREPLY
};


/* ---------- inet6_option_types_int ---------- */

#define IPV6_ADDRFORM 1
#define IPV6_2292PKTINFO 2
#define IPV6_2292HOPOPTS 3
#define IPV6_2292DSTOPTS 4
#define IPV6_2292RTHDR 5
#define IPV6_CHECKSUM 7
#define IPV6_2292HOPLIMIT 8
#define IPV6_NEXTHOP 9
#define IPV6_AUTHHDR 10
#define IPV6_FLOWINFO 11
#define IPV6_UNICAST_HOPS 16
#define IPV6_MULTICAST_IF 17
#define IPV6_MULTICAST_HOPS 18
#define IPV6_MULTICAST_LOOP 19
#define IPV6_ROUTER_ALERT 22
#define IPV6_MTU_DISCOVER 23
#define IPV6_MTU 24
#define IPV6_RECVERR 25
#define IPV6_V6ONLY 26
#define IPV6_FLOWINFO_SEND 33
#define IPV6_HDRINCL 36
#define IPV6_RECVPKTINFO 49
#define IPV6_RECVHOPLIMIT 51
#define IPV6_HOPLIMIT 52
#define IPV6_RECVHOPOPTS 53
#define IPV6_RECVRTHDR 56
#define IPV6_RECVDSTOPTS 58
#define IPV6_RECVPATHMTU 60
#define IPV6_DONTFRAG 62
#define IPV6_RECVTCLASS 66
#define IPV6_TCLASS 67
#define IP6T_SO_ORIGINAL_DST 80
#define IPV6_AUTOFLOWLABEL 70
#define IPV6_ADDR_PREFERENCES 72
#define IPV6_MINHOPCOUNT 73
#define IPV6_RECVORIGDSTADDR 74
#define IPV6_TRANSPARENT 75
#define IPV6_UNICAST_IF 76
#define MRT6_INIT 200
#define MRT6_DONE 201
#define MRT6_DEL_MIF 203
#define MRT6_VERSION 206
#define MRT6_ASSERT 207
#define MRT6_PIM 208
#define MRT6_TABLE 209


int inet6_option_types_int[] = {
	IPV6_ADDRFORM,
	IPV6_2292PKTINFO,
	IPV6_2292HOPOPTS,
	IPV6_2292DSTOPTS,
	IPV6_2292RTHDR,
	IPV6_CHECKSUM,
	IPV6_2292HOPLIMIT,
	IPV6_NEXTHOP,
	IPV6_AUTHHDR,
	IPV6_FLOWINFO,
	IPV6_UNICAST_HOPS,
	IPV6_MULTICAST_IF,
	IPV6_MULTICAST_HOPS,
	IPV6_MULTICAST_LOOP,
	IPV6_ROUTER_ALERT,
	IPV6_MTU_DISCOVER,
	IPV6_MTU,
	IPV6_RECVERR,
	IPV6_V6ONLY,
	IPV6_FLOWINFO_SEND,
	IPV6_HDRINCL,
	IPV6_RECVPKTINFO,
	IPV6_RECVHOPLIMIT,
	IPV6_HOPLIMIT,
	IPV6_RECVHOPOPTS,
	IPV6_RECVRTHDR,
	IPV6_RECVDSTOPTS,
	IPV6_RECVPATHMTU,
	IPV6_DONTFRAG,
	IPV6_RECVTCLASS,
	IPV6_TCLASS,
	IP6T_SO_ORIGINAL_DST,
	IPV6_AUTOFLOWLABEL,
	IPV6_ADDR_PREFERENCES,
	IPV6_MINHOPCOUNT,
	IPV6_RECVORIGDSTADDR,
	IPV6_TRANSPARENT,
	IPV6_UNICAST_IF,
	MRT6_INIT,
	MRT6_DONE,
	MRT6_DEL_MIF,
	MRT6_VERSION,
	MRT6_ASSERT,
	MRT6_PIM,
	MRT6_TABLE
};


/* ---------- kvm_device_type ---------- */

#define KVM_DEV_TYPE_FSL_MPIC_20 1
#define KVM_DEV_TYPE_FSL_MPIC_42 2
#define KVM_DEV_TYPE_XICS 3
#define KVM_DEV_TYPE_VFIO 4
#define KVM_DEV_TYPE_FLIC 6


int kvm_device_type[] = {
	KVM_DEV_TYPE_FSL_MPIC_20,
	KVM_DEV_TYPE_FSL_MPIC_42,
	KVM_DEV_TYPE_XICS,
	KVM_DEV_TYPE_VFIO,
	KVM_DEV_TYPE_FLIC
};


/* ---------- bt_l2cap_type ---------- */

#define SOCK_SEQPACKET 5
#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_RAW 3


int bt_l2cap_type[] = {
	SOCK_SEQPACKET,
	SOCK_STREAM,
	SOCK_DGRAM,
	SOCK_RAW
};


/* ---------- bpf_prog_type ---------- */

#define BPF_PROG_TYPE_SOCKET_FILTER 1
#define BPF_PROG_TYPE_KPROBE 2
#define BPF_PROG_TYPE_SCHED_CLS 3
#define BPF_PROG_TYPE_SCHED_ACT 4
#define BPF_PROG_TYPE_TRACEPOINT 5
#define BPF_PROG_TYPE_XDP 6
#define BPF_PROG_TYPE_PERF_EVENT 7
#define BPF_PROG_TYPE_CGROUP_SKB 8


int bpf_prog_type[] = {
	BPF_PROG_TYPE_SOCKET_FILTER,
	BPF_PROG_TYPE_KPROBE,
	BPF_PROG_TYPE_SCHED_CLS,
	BPF_PROG_TYPE_SCHED_ACT,
	BPF_PROG_TYPE_TRACEPOINT,
	BPF_PROG_TYPE_XDP,
	BPF_PROG_TYPE_PERF_EVENT,
	BPF_PROG_TYPE_CGROUP_SKB
};


/* ---------- ipx_packet_types ---------- */

#define IPX_TYPE_UNKNOWN 0
#define IPX_TYPE_RIP 1
#define IPX_TYPE_SAP 4
#define IPX_TYPE_SPX 5
#define IPX_TYPE_NCP 17
#define IPX_TYPE_PPROP 20


int ipx_packet_types[] = {
	IPX_TYPE_UNKNOWN,
	IPX_TYPE_RIP,
	IPX_TYPE_SAP,
	IPX_TYPE_SPX,
	IPX_TYPE_NCP,
	IPX_TYPE_PPROP
};


/* ---------- setxattr_flags ---------- */

#define XATTR_CREATE 1
#define XATTR_REPLACE 2


int setxattr_flags[] = {
	XATTR_CREATE,
	XATTR_REPLACE
};


/* ---------- timer_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define TIMER_ABSTIME 1


int timer_flags[] = {
	0,
	TIMER_ABSTIME
};


/* ---------- dccp_option_types_int ---------- */

#define DCCP_SOCKOPT_PACKET_SIZE 1
#define DCCP_SOCKOPT_CHANGE_L 3
#define DCCP_SOCKOPT_CHANGE_R 4
#define DCCP_SOCKOPT_GET_CUR_MPS 5
#define DCCP_SOCKOPT_SERVER_TIMEWAIT 6
#define DCCP_SOCKOPT_SEND_CSCOV 10
#define DCCP_SOCKOPT_RECV_CSCOV 11
#define DCCP_SOCKOPT_QPOLICY_ID 16
#define DCCP_SOCKOPT_QPOLICY_TXQLEN 17


int dccp_option_types_int[] = {
	DCCP_SOCKOPT_PACKET_SIZE,
	DCCP_SOCKOPT_CHANGE_L,
	DCCP_SOCKOPT_CHANGE_R,
	DCCP_SOCKOPT_GET_CUR_MPS,
	DCCP_SOCKOPT_SERVER_TIMEWAIT,
	DCCP_SOCKOPT_SEND_CSCOV,
	DCCP_SOCKOPT_RECV_CSCOV,
	DCCP_SOCKOPT_QPOLICY_ID,
	DCCP_SOCKOPT_QPOLICY_TXQLEN
};


/* ---------- fanotify_events ---------- */

#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
#define O_LARGEFILE 131072
#define O_CLOEXEC 524288
#define O_APPEND 1024
#define O_DSYNC 4096
#define O_NOATIME 262144
#define O_NONBLOCK 2048
#define O_SYNC 1052672


int fanotify_events[] = {
	O_RDONLY,
	O_WRONLY,
	O_RDWR,
	O_LARGEFILE,
	O_CLOEXEC,
	O_APPEND,
	O_DSYNC,
	O_NOATIME,
	O_NONBLOCK,
	O_SYNC
};


/* ---------- delete_module_flags ---------- */

#define O_NONBLOCK 2048
#define O_TRUNC 512


int delete_module_flags[] = {
	O_NONBLOCK,
	O_TRUNC
};


/* ---------- socket_type ---------- */

#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_RAW 3
#define SOCK_RDM 4
#define SOCK_SEQPACKET 5
#define SOCK_DCCP 6
#define SOCK_PACKET 10
#define SOCK_NONBLOCK 2048
#define SOCK_CLOEXEC 524288


int socket_type[] = {
	SOCK_STREAM,
	SOCK_DGRAM,
	SOCK_RAW,
	SOCK_RDM,
	SOCK_SEQPACKET,
	SOCK_DCCP,
	SOCK_PACKET,
	SOCK_NONBLOCK,
	SOCK_CLOEXEC
};


/* ---------- drm_agp_mem_type ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define AGP_USER_MEMORY 65536
#define AGP_USER_CACHED_MEMORY 65537


int drm_agp_mem_type[] = {
	0,
	1,
	2,
	AGP_USER_MEMORY,
	AGP_USER_CACHED_MEMORY
};


/* ---------- ff_periodic_effect_wave ---------- */

#define FF_SQUARE 88
#define FF_TRIANGLE 89
#define FF_SINE 90
#define FF_SAW_UP 91
#define FF_SAW_DOWN 92
#define FF_CUSTOM 93


int ff_periodic_effect_wave[] = {
	FF_SQUARE,
	FF_TRIANGLE,
	FF_SINE,
	FF_SAW_UP,
	FF_SAW_DOWN,
	FF_CUSTOM
};


/* ---------- tcp_option_types ---------- */

#define TCPOPT_NOP 1
#define TCPOPT_EOL 0
#define TCPOPT_MSS 2
#define TCPOPT_WINDOW 3
#define TCPOPT_SACK_PERM 4
#define TCPOPT_SACK 5
#define TCPOPT_TIMESTAMP 8
#define TCPOPT_MD5SIG 19
#define TCPOPT_FASTOPEN 34
#define TCPOPT_EXP 254


int tcp_option_types[] = {
	TCPOPT_NOP,
	TCPOPT_EOL,
	TCPOPT_MSS,
	TCPOPT_WINDOW,
	TCPOPT_SACK_PERM,
	TCPOPT_SACK,
	TCPOPT_TIMESTAMP,
	TCPOPT_MD5SIG,
	TCPOPT_FASTOPEN,
	TCPOPT_EXP
};


/* ---------- recv_flags ---------- */

#define MSG_CMSG_CLOEXEC 1073741824
#define MSG_DONTWAIT 64
#define MSG_ERRQUEUE 8192
#define MSG_OOB 1
#define MSG_PEEK 2
#define MSG_TRUNC 32
#define MSG_WAITALL 256
#define MSG_WAITFORONE 65536


int recv_flags[] = {
	MSG_CMSG_CLOEXEC,
	MSG_DONTWAIT,
	MSG_ERRQUEUE,
	MSG_OOB,
	MSG_PEEK,
	MSG_TRUNC,
	MSG_WAITALL,
	MSG_WAITFORONE
};


/* ---------- msync_flags ---------- */

#define MS_ASYNC 1
#define MS_SYNC 4
#define MS_INVALIDATE 2


int msync_flags[] = {
	MS_ASYNC,
	MS_SYNC,
	MS_INVALIDATE
};


/* ---------- kexec_load_flags ---------- */

#define KEXEC_ON_CRASH 1
#define KEXEC_PRESERVE_CONTEXT 2
#define KEXEC_ARCH_386 196608
#define KEXEC_ARCH_X86_64 4063232
#define KEXEC_ARCH_PPC 1310720
#define KEXEC_ARCH_PPC64 1376256
#define KEXEC_ARCH_IA_64 3276800
#define KEXEC_ARCH_ARM 2621440
#define KEXEC_ARCH_S390 1441792
#define KEXEC_ARCH_SH 2752512
#define KEXEC_ARCH_MIPS 524288
#define KEXEC_ARCH_MIPS_LE 655360


int kexec_load_flags[] = {
	KEXEC_ON_CRASH,
	KEXEC_PRESERVE_CONTEXT,
	KEXEC_ARCH_386,
	KEXEC_ARCH_X86_64,
	KEXEC_ARCH_PPC,
	KEXEC_ARCH_PPC64,
	KEXEC_ARCH_IA_64,
	KEXEC_ARCH_ARM,
	KEXEC_ARCH_S390,
	 KEXEC_ARCH_SH,
	 KEXEC_ARCH_MIPS,
	KEXEC_ARCH_MIPS_LE
};


/* ---------- kvm_x86_efer ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 256 Undefined in const file! Need to manually fill out !
#define 1024 Undefined in const file! Need to manually fill out !
#define 2048 Undefined in const file! Need to manually fill out !
#define 4096 Undefined in const file! Need to manually fill out !
#define 8192 Undefined in const file! Need to manually fill out !
#define 16384 Undefined in const file! Need to manually fill out !
#define 32768 Undefined in const file! Need to manually fill out !


int kvm_x86_efer[] = {
	1,
	256,
	1024,
	2048,
	4096,
	8192,
	16384,
	32768
};


/* ---------- icmp_redirect_codes ---------- */

#define ICMP_REDIR_NET 0
#define ICMP_REDIR_HOST 1
#define ICMP_REDIR_NETTOS 2
#define ICMP_REDIR_HOSTTOS 3


int icmp_redirect_codes[] = {
	ICMP_REDIR_NET,
	ICMP_REDIR_HOST,
	ICMP_REDIR_NETTOS,
	ICMP_REDIR_HOSTTOS
};


/* ---------- open_mode ---------- */

#define S_IRUSR 256
#define S_IWUSR 128
#define S_IXUSR 64
#define S_IRGRP 32
#define S_IWGRP 16
#define S_IXGRP 8
#define S_IROTH 4
#define S_IWOTH 2
#define S_IXOTH 1


int open_mode[] = {
	S_IRUSR,
	S_IWUSR,
	S_IXUSR,
	S_IRGRP,
	S_IWGRP,
	S_IXGRP,
	S_IROTH,
	S_IWOTH,
	S_IXOTH
};


/* ---------- tcp_repair_opt_codes ---------- */

#define TCPOPT_MSS 2
#define TCPOPT_WINDOW 3
#define TCPOPT_SACK_PERM 4
#define TCPOPT_TIMESTAMP 8


int tcp_repair_opt_codes[] = {
	TCPOPT_MSS,
	TCPOPT_WINDOW,
	TCPOPT_SACK_PERM,
	TCPOPT_TIMESTAMP
};


/* ---------- ipv4_option_cipso_tag_types ---------- */

#define CIPSO_V4_TAG_INVALID 0
#define CIPSO_V4_TAG_RBITMAP 1
#define CIPSO_V4_TAG_ENUM 2
#define CIPSO_V4_TAG_RANGE 5
#define CIPSO_V4_TAG_PBITMAP 6
#define CIPSO_V4_TAG_FREEFORM 7


int ipv4_option_cipso_tag_types[] = {
	CIPSO_V4_TAG_INVALID,
	CIPSO_V4_TAG_RBITMAP,
	CIPSO_V4_TAG_ENUM,
	CIPSO_V4_TAG_RANGE,
	CIPSO_V4_TAG_PBITMAP,
	CIPSO_V4_TAG_FREEFORM
};


/* ---------- semop_flags ---------- */

#define IPC_NOWAIT 2048
#define SEM_UNDO 4096


int semop_flags[] = {
	IPC_NOWAIT,
	SEM_UNDO
};


/* ---------- unix_socket_family ---------- */

#define AF_UNIX 1
#define AF_UNSPEC 0


int unix_socket_family[] = {
	AF_UNIX,
	AF_UNSPEC
};


/* ---------- syz_end_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !


int syz_end_flags[] = {
	0,
	1
};


/* ---------- kvm_vcpu_features_arm64 ---------- */

#define KVM_ARM_VCPU_POWER_OFF 0
#define KVM_ARM_VCPU_EL1_32BIT 1
#define KVM_ARM_VCPU_PSCI_0_2 2
#define KVM_ARM_VCPU_PMU_V3 3


int kvm_vcpu_features_arm64[] = {
	KVM_ARM_VCPU_POWER_OFF,
	KVM_ARM_VCPU_EL1_32BIT,
	KVM_ARM_VCPU_PSCI_0_2,
	KVM_ARM_VCPU_PMU_V3
};


/* ---------- sockopt_opt_sock_int ---------- */

#define SO_ACCEPTCONN 30
#define SO_BROADCAST 6
#define SO_DEBUG 1
#define SO_DOMAIN 39
#define SO_ERROR 4
#define SO_DONTROUTE 5
#define SO_KEEPALIVE 9
#define SO_PEEK_OFF 42
#define SO_PRIORITY 12
#define SO_PROTOCOL 38
#define SO_RCVBUF 8
#define SO_RCVBUFFORCE 33
#define SO_RCVLOWAT 18
#define SO_SNDLOWAT 19
#define SO_REUSEADDR 2
#define SO_SNDBUF 7
#define SO_SNDBUFFORCE 32
#define SO_TIMESTAMP 29
#define SO_TYPE 3
#define SO_REUSEPORT 15
#define SO_OOBINLINE 10
#define SO_NO_CHECK 11
#define SO_PASSCRED 16
#define SO_TIMESTAMPNS 35
#define SO_LOCK_FILTER 44
#define SO_PASSSEC 34
#define SO_RXQ_OVFL 40
#define SO_WIFI_STATUS 41
#define SO_NOFCS 43
#define SO_SELECT_ERR_QUEUE 45
#define SO_BUSY_POLL 46
#define SO_MAX_PACING_RATE 47


int sockopt_opt_sock_int[] = {
	SO_ACCEPTCONN,
	SO_BROADCAST,
	SO_DEBUG,
	SO_DOMAIN,
	SO_ERROR,
	SO_DONTROUTE,
	SO_KEEPALIVE,
	SO_PEEK_OFF,
	SO_PRIORITY,
	SO_PROTOCOL,
	SO_RCVBUF,
	SO_RCVBUFFORCE,
	SO_RCVLOWAT,
	SO_SNDLOWAT,
	SO_REUSEADDR,
	SO_SNDBUF,
	SO_SNDBUFFORCE,
	SO_TIMESTAMP,
	SO_TYPE,
	SO_REUSEPORT,
	SO_OOBINLINE,
	SO_NO_CHECK,
	SO_PASSCRED,
	SO_TIMESTAMPNS,
	SO_LOCK_FILTER,
	SO_PASSSEC,
	SO_RXQ_OVFL,
	SO_WIFI_STATUS,
	SO_NOFCS,
	SO_SELECT_ERR_QUEUE,
	SO_BUSY_POLL,
	SO_MAX_PACING_RATE
};


/* ---------- sockaddr_ethernet_family ---------- */

#define ARPHRD_ETHER 1
#define ARPHRD_FDDI 774
#define ARPHRD_IEEE802 6


int sockaddr_ethernet_family[] = {
	ARPHRD_ETHER,
	ARPHRD_FDDI,
	ARPHRD_IEEE802
};


/* ---------- fcntl_notify ---------- */

#define DN_MULTISHOT 2147483648
#define DN_ACCESS 1
#define DN_MODIFY 2
#define DN_CREATE 4
#define DN_DELETE 8
#define DN_RENAME 16
#define DN_ATTRIB 32


int fcntl_notify[] = {
	DN_MULTISHOT,
	DN_ACCESS,
	DN_MODIFY,
	DN_CREATE,
	DN_DELETE,
	DN_RENAME,
	DN_ATTRIB
};


/* ---------- drm_control_type ---------- */

#define DRM_ADD_COMMAND 0
#define DRM_RM_COMMAND 1
#define DRM_INST_HANDLER 2
#define DRM_UNINST_HANDLER 3


int drm_control_type[] = {
	DRM_ADD_COMMAND,
	DRM_RM_COMMAND,
	DRM_INST_HANDLER,
	DRM_UNINST_HANDLER
};


/* ---------- uffdio_copy_mode ---------- */

#define UFFDIO_COPY_MODE_DONTWAKE 1


int uffdio_copy_mode[] = {
	UFFDIO_COPY_MODE_DONTWAKE
};


/* ---------- tcp_congestion_control_alg_names ---------- */

#define "cubic" Undefined in const file! Need to manually fill out !
#define "reno" Undefined in const file! Need to manually fill out !
#define "bic" Undefined in const file! Need to manually fill out !
#define "cdg" Undefined in const file! Need to manually fill out !
#define "dctcp" Undefined in const file! Need to manually fill out !
#define "westwood" Undefined in const file! Need to manually fill out !
#define "highspeed" Undefined in const file! Need to manually fill out !
#define "hybla" Undefined in const file! Need to manually fill out !
#define "htcp" Undefined in const file! Need to manually fill out !
#define "vegas" Undefined in const file! Need to manually fill out !
#define "nv" Undefined in const file! Need to manually fill out !
#define "veno" Undefined in const file! Need to manually fill out !
#define "scalable" Undefined in const file! Need to manually fill out !
#define "lp" Undefined in const file! Need to manually fill out !
#define "yeah" Undefined in const file! Need to manually fill out !
#define "illinois" Undefined in const file! Need to manually fill out !


char* tcp_congestion_control_alg_names[] = {
	"cubic",
	"reno",
	"bic",
	"cdg",
	"dctcp",
	"westwood",
	"highspeed",
	"hybla",
	"htcp",
	"vegas",
	"nv",
	"veno",
	"scalable",
	"lp",
	"yeah",
	"illinois"
};


/* ---------- drm_map_flags ---------- */

#define _DRM_RESTRICTED 1
#define _DRM_READ_ONLY 2
#define _DRM_LOCKED 4
#define _DRM_KERNEL 8
#define _DRM_WRITE_COMBINING 16
#define _DRM_CONTAINS_LOCK 32
#define _DRM_REMOVABLE 64
#define _DRM_DRIVER 128


int drm_map_flags[] = {
	_DRM_RESTRICTED,
	_DRM_READ_ONLY,
	_DRM_LOCKED,
	_DRM_KERNEL,
	_DRM_WRITE_COMBINING,
	_DRM_CONTAINS_LOCK,
	_DRM_REMOVABLE,
	_DRM_DRIVER
};


/* ---------- sched_attr_flags2 ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define SCHED_FLAG_RESET_ON_FORK 1


int sched_attr_flags2[] = {
	0,
	SCHED_FLAG_RESET_ON_FORK
};


/* ---------- sched_attr_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !


int sched_attr_flags[] = {
	0
};


/* ---------- arp_flags ---------- */

#define ATF_COM 2
#define ATF_PERM 4
#define ATF_PUBL 8
#define ATF_USETRAILERS 16
#define ATF_NETMASK 32
#define ATF_DONTPUB 64


int arp_flags[] = {
	ATF_COM,
	ATF_PERM,
	ATF_PUBL,
	ATF_USETRAILERS,
	ATF_NETMASK,
	ATF_DONTPUB
};


/* ---------- ptrace_req_getregs ---------- */

#define PTRACE_GETREGS 12
#define PTRACE_GETFPREGS 14


int ptrace_req_getregs[] = {
	PTRACE_GETREGS,
	PTRACE_GETFPREGS
};


/* ---------- unix_socket_type ---------- */

#define SOCK_STREAM 1
#define SOCK_DGRAM 2
#define SOCK_SEQPACKET 5


int unix_socket_type[] = {
	SOCK_STREAM,
	SOCK_DGRAM,
	SOCK_SEQPACKET
};


/* ---------- mmap_prot ---------- */

#define PROT_EXEC 4
#define PROT_READ 1
#define PROT_WRITE 2
#define PROT_SEM 8
#define PROT_GROWSDOWN 16777216
#define PROT_GROWSUP 33554432


int mmap_prot[] = {
	PROT_EXEC,
	PROT_READ,
	PROT_WRITE,
	PROT_SEM,
	PROT_GROWSDOWN,
	PROT_GROWSUP
};


/* ---------- flock_op ---------- */

#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_UN 8
#define LOCK_NB 4


int flock_op[] = {
	LOCK_SH,
	LOCK_EX,
	LOCK_UN,
	LOCK_NB
};


/* ---------- snd_seq_port_name ---------- */

#define "port0" Undefined in const file! Need to manually fill out !
#define "port1" Undefined in const file! Need to manually fill out !


char* snd_seq_port_name[] = {
	"port0",
	"port1"
};


/* ---------- perf_flags ---------- */

#define PERF_FLAG_FD_NO_GROUP 1
#define PERF_FLAG_FD_OUTPUT 2
#define PERF_FLAG_PID_CGROUP 4
#define PERF_FLAG_FD_CLOEXEC 8


int perf_flags[] = {
	PERF_FLAG_FD_NO_GROUP,
	PERF_FLAG_FD_OUTPUT,
	PERF_FLAG_PID_CGROUP,
	PERF_FLAG_FD_CLOEXEC
};


/* ---------- msgbuf_type ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 3 Undefined in const file! Need to manually fill out !


int msgbuf_type[] = {
	0,
	1,
	2,
	3
};


/* ---------- kvm_mem_region_flags ---------- */

#define KVM_MEM_LOG_DIRTY_PAGES 1
#define KVM_MEM_READONLY 2


int kvm_mem_region_flags[] = {
	KVM_MEM_LOG_DIRTY_PAGES,
	KVM_MEM_READONLY
};


/* ---------- x25_iface_types ---------- */

#define X25_IFACE_DATA 0
#define X25_IFACE_CONNECT 1
#define X25_IFACE_DISCONNECT 2
#define X25_IFACE_PARAMS 3


int x25_iface_types[] = {
	X25_IFACE_DATA,
	X25_IFACE_CONNECT,
	X25_IFACE_DISCONNECT,
	X25_IFACE_PARAMS
};


/* ---------- ip_mtu_discover ---------- */

#define IP_PMTUDISC_DONT 0
#define IP_PMTUDISC_WANT 1
#define IP_PMTUDISC_DO 2
#define IP_PMTUDISC_PROBE 3
#define IP_PMTUDISC_INTERFACE 4
#define IP_PMTUDISC_OMIT 5


int ip_mtu_discover[] = {
	IP_PMTUDISC_DONT,
	IP_PMTUDISC_WANT,
	IP_PMTUDISC_DO,
	IP_PMTUDISC_PROBE,
	IP_PMTUDISC_INTERFACE,
	IP_PMTUDISC_OMIT
};


/* ---------- socket_domain ---------- */

#define AF_UNIX 1
#define AF_INET 2
#define AF_INET6 10
#define AF_IPX 4
#define AF_NETLINK 16
#define AF_X25 9
#define AF_AX25 3
#define AF_ATMPVC 8
#define AF_APPLETALK 5
#define AF_PACKET 17


int socket_domain[] = {
	AF_UNIX,
	AF_INET,
	AF_INET6,
	AF_IPX,
	AF_NETLINK,
	AF_X25,
	AF_AX25,
	AF_ATMPVC,
	AF_APPLETALK,
	AF_PACKET
};


/* ---------- igmp_types ---------- */

#define IGMP_HOST_MEMBERSHIP_QUERY 17
#define IGMP_HOST_MEMBERSHIP_REPORT 18
#define IGMP_DVMRP 19
#define IGMP_PIM 20
#define IGMP_TRACE 21
#define IGMPV2_HOST_MEMBERSHIP_REPORT 22
#define IGMP_HOST_LEAVE_MESSAGE 23
#define IGMPV3_HOST_MEMBERSHIP_REPORT 34
#define IGMP_MTRACE_RESP 30
#define IGMP_MTRACE 31


int igmp_types[] = {
	IGMP_HOST_MEMBERSHIP_QUERY,
	IGMP_HOST_MEMBERSHIP_REPORT,
	IGMP_DVMRP,
	IGMP_PIM,
	IGMP_TRACE,
	IGMPV2_HOST_MEMBERSHIP_REPORT,
	IGMP_HOST_LEAVE_MESSAGE,
	IGMPV3_HOST_MEMBERSHIP_REPORT,
	IGMP_MTRACE_RESP,
	IGMP_MTRACE
};


/* ---------- fadvise_flags ---------- */

#define POSIX_FADV_NORMAL 0
#define POSIX_FADV_SEQUENTIAL 2
#define POSIX_FADV_RANDOM 1
#define POSIX_FADV_NOREUSE 5
#define POSIX_FADV_WILLNEED 3
#define POSIX_FADV_DONTNEED 4


int fadvise_flags[] = {
	POSIX_FADV_NORMAL,
	POSIX_FADV_SEQUENTIAL,
	POSIX_FADV_RANDOM,
	POSIX_FADV_NOREUSE,
	POSIX_FADV_WILLNEED,
	POSIX_FADV_DONTNEED
};


/* ---------- utimensat_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define AT_SYMLINK_NOFOLLOW 256


int utimensat_flags[] = {
	0,
	AT_SYMLINK_NOFOLLOW
};


/* ---------- seccomp_op ---------- */

#define SECCOMP_SET_MODE_STRICT 0
#define SECCOMP_SET_MODE_FILTER 1


int seccomp_op[] = {
	SECCOMP_SET_MODE_STRICT,
	SECCOMP_SET_MODE_FILTER
};


/* ---------- inet_option_types_int ---------- */

#define IP_TOS 1
#define IP_TTL 2
#define IP_HDRINCL 3
#define IP_ROUTER_ALERT 5
#define IP_RECVOPTS 6
#define IP_RETOPTS 7
#define IP_PKTINFO 8
#define IP_MTU_DISCOVER 10
#define IP_RECVERR 11
#define IP_RECVTTL 12
#define IP_RECVTOS 13
#define IP_MTU 14
#define IP_FREEBIND 15
#define IP_PASSSEC 18
#define IP_TRANSPARENT 19
#define IP_RECVORIGDSTADDR 20
#define IP_MINTTL 21
#define IP_NODEFRAG 22
#define IP_CHECKSUM 23
#define IP_BIND_ADDRESS_NO_PORT 24
#define IP_MULTICAST_TTL 33
#define IP_MULTICAST_LOOP 34
#define IP_MULTICAST_ALL 49
#define IP_UNICAST_IF 50


int inet_option_types_int[] = {
	IP_TOS,
	IP_TTL,
	IP_HDRINCL,
	IP_ROUTER_ALERT,
	IP_RECVOPTS,
	IP_RETOPTS,
	IP_PKTINFO,
	IP_MTU_DISCOVER,
	IP_RECVERR,
	IP_RECVTTL,
	IP_RECVTOS,
	IP_MTU,
	IP_FREEBIND,
	IP_PASSSEC,
	IP_TRANSPARENT,
	IP_RECVORIGDSTADDR,
	IP_MINTTL,
	IP_NODEFRAG,
	IP_CHECKSUM,
	IP_BIND_ADDRESS_NO_PORT,
	IP_MULTICAST_TTL,
	IP_MULTICAST_LOOP,
	IP_MULTICAST_ALL,
	IP_UNICAST_IF
};


/* ---------- udp_option_types_int ---------- */

#define UDP_CORK 1
#define UDP_ENCAP 100
#define UDP_NO_CHECK6_TX 101
#define UDP_NO_CHECK6_RX 102


int udp_option_types_int[] = {
	UDP_CORK,
	UDP_ENCAP,
	UDP_NO_CHECK6_TX,
	UDP_NO_CHECK6_RX
};


/* ---------- kvm_mce_flags ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !


int kvm_mce_flags[] = {
	1,
	2,
	4
};


/* ---------- sigaction_flags ---------- */

#define SA_NOCLDSTOP 1
#define SA_NOCLDWAIT 2
#define SA_NODEFER 1073741824
#define SA_ONSTACK 134217728
#define SA_RESETHAND 2147483648
#define SA_RESTART 268435456
#define SA_SIGINFO 4


int sigaction_flags[] = {
	SA_NOCLDSTOP,SA_NOCLDWAIT,
	SA_NODEFER,
	SA_ONSTACK,
	SA_RESETHAND,
	SA_RESTART,
	SA_SIGINFO
};


/* ---------- sockopt_opt_ip_mreq ---------- */

#define IP_ADD_MEMBERSHIP 35
#define IP_DROP_MEMBERSHIP 36
#define IP_MULTICAST_IF 32


int sockopt_opt_ip_mreq[] = {
	IP_ADD_MEMBERSHIP,
	IP_DROP_MEMBERSHIP,
	IP_MULTICAST_IF
};


/* ---------- perf_event_type ---------- */

#define PERF_TYPE_HARDWARE 0
#define PERF_TYPE_SOFTWARE 1
#define PERF_TYPE_TRACEPOINT 2
#define PERF_TYPE_HW_CACHE 3
#define PERF_TYPE_RAW 4
#define PERF_TYPE_BREAKPOINT 5


int perf_event_type[] = {
	PERF_TYPE_HARDWARE,
	PERF_TYPE_SOFTWARE,
	PERF_TYPE_TRACEPOINT,
	PERF_TYPE_HW_CACHE,
	PERF_TYPE_RAW,
	PERF_TYPE_BREAKPOINT
};


/* ---------- dccp_types ---------- */

#define DCCP_PKT_REQUEST 0
#define DCCP_PKT_RESPONSE 1
#define DCCP_PKT_DATA 2
#define DCCP_PKT_ACK 3
#define DCCP_PKT_DATAACK 4
#define DCCP_PKT_CLOSEREQ 5
#define DCCP_PKT_CLOSE 6
#define DCCP_PKT_RESET 7
#define DCCP_PKT_SYNC 8
#define DCCP_PKT_SYNCACK 9
#define DCCP_PKT_INVALID 10


int dccp_types[] = {
	DCCP_PKT_REQUEST,
	DCCP_PKT_RESPONSE,
	DCCP_PKT_DATA,
	DCCP_PKT_ACK,
	DCCP_PKT_DATAACK,
	DCCP_PKT_CLOSEREQ,
	DCCP_PKT_CLOSE,
	DCCP_PKT_RESET,
	DCCP_PKT_SYNC,
	DCCP_PKT_SYNCACK,
	DCCP_PKT_INVALID
};


/* ---------- bt_hci_sockopt ---------- */

#define HCI_DATA_DIR 1
#define HCI_TIME_STAMP 3
#define HCI_FILTER 2


int bt_hci_sockopt[] = {
	HCI_DATA_DIR,
	HCI_TIME_STAMP,
	HCI_FILTER
};


/* ---------- finit_module_flags ---------- */

#define MODULE_INIT_IGNORE_MODVERSIONS 1
#define MODULE_INIT_IGNORE_VERMAGIC 2


int finit_module_flags[] = {
	MODULE_INIT_IGNORE_MODVERSIONS,
	MODULE_INIT_IGNORE_VERMAGIC
};


/* ---------- ax25_option_types_int ---------- */

#define AX25_WINDOW 1
#define AX25_T1 2
#define AX25_T2 5
#define AX25_N2 3
#define AX25_T3 4
#define AX25_IDLE 9
#define AX25_BACKOFF 6
#define AX25_EXTSEQ 7
#define AX25_PIDINCL 8
#define AX25_IAMDIGI 12
#define AX25_PACLEN 10


int ax25_option_types_int[] = {
	AX25_WINDOW,
	AX25_T1,
	AX25_T2,
	AX25_N2,
	AX25_T3,
	AX25_IDLE,
	AX25_BACKOFF,
	AX25_EXTSEQ,
	AX25_PIDINCL,
	AX25_IAMDIGI,
	AX25_PACLEN
};


/* ---------- kvm_ioeventfd_flags ---------- */

#define KVM_IOEVENTFD_FLAG_DATAMATCH 1
#define KVM_IOEVENTFD_FLAG_PIO 2
#define KVM_IOEVENTFD_FLAG_DEASSIGN 4
#define KVM_IOEVENTFD_FLAG_VIRTIO_CCW_NOTIFY 8


int kvm_ioeventfd_flags[] = {
	KVM_IOEVENTFD_FLAG_DATAMATCH,
	KVM_IOEVENTFD_FLAG_PIO,
	KVM_IOEVENTFD_FLAG_DEASSIGN,
	KVM_IOEVENTFD_FLAG_VIRTIO_CCW_NOTIFY
};


/* ---------- prctl_code_getreaper ---------- */

#define PR_GET_CHILD_SUBREAPER 37
#define PR_GET_ENDIAN 19
#define PR_GET_FPEMU 9
#define PR_GET_FPEXC 11
#define PR_GET_PDEATHSIG 2
#define PR_GET_TID_ADDRESS 40
#define PR_GET_TSC 25
#define PR_GET_UNALIGN 5


int prctl_code_getreaper[] = {
	PR_GET_CHILD_SUBREAPER,
	PR_GET_ENDIAN,
	PR_GET_FPEMU,
	PR_GET_FPEXC,
	PR_GET_PDEATHSIG,
	PR_GET_TID_ADDRESS,
	PR_GET_TSC,
	PR_GET_UNALIGN
};


/* ---------- iocb_key ---------- */

#define 0 Undefined in const file! Need to manually fill out !


int iocb_key[] = {
	0
};


/* ---------- kcm_socket_type ---------- */

#define SOCK_DGRAM 2
#define SOCK_SEQPACKET 5


int kcm_socket_type[] = {
	SOCK_DGRAM,
	SOCK_SEQPACKET
};


/* ---------- bt_l2cap_lm ---------- */

#define L2CAP_LM_MASTER 1
#define L2CAP_LM_AUTH 2
#define L2CAP_LM_ENCRYPT 4
#define L2CAP_LM_TRUSTED 8
#define L2CAP_LM_RELIABLE 16
#define L2CAP_LM_SECURE 32
#define L2CAP_LM_FIPS 64


int bt_l2cap_lm[] = {
	L2CAP_LM_MASTER,
	L2CAP_LM_AUTH,
	L2CAP_LM_ENCRYPT,
	L2CAP_LM_TRUSTED,
	L2CAP_LM_RELIABLE,
	L2CAP_LM_SECURE,
	L2CAP_LM_FIPS
};


/* ---------- seek_whence ---------- */

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_DATA 3
#define SEEK_HOLE 4


int seek_whence[] = {
	SEEK_SET,
	SEEK_CUR,
	SEEK_END,
	SEEK_DATA,
	SEEK_HOLE
};


/* ---------- key_type ---------- */

#define "user" Undefined in const file! Need to manually fill out !
#define "keyring" Undefined in const file! Need to manually fill out !
#define "logon" Undefined in const file! Need to manually fill out !
#define "trusted" Undefined in const file! Need to manually fill out !
#define "big_key" Undefined in const file! Need to manually fill out !
#define "dead" Undefined in const file! Need to manually fill out !
#define ".request_key_auth" Undefined in const file! Need to manually fill out !
#define "syzkaller" Undefined in const file! Need to manually fill out !


char* key_type[] = {
	"user",
	"keyring",
	"logon",
	"trusted",
	"big_key",
	"dead",
	".request_key_auth",
	"syzkaller"
};


/* ---------- clone_flags ---------- */

#define CLONE_CHILD_CLEARTID 2097152
#define CLONE_CHILD_SETTID 16777216
#define CLONE_FILES 1024
#define CLONE_FS 512
#define CLONE_IO 2147483648
#define CLONE_NEWIPC 134217728
#define CLONE_NEWNET 1073741824
#define CLONE_NEWNS 131072
#define CLONE_NEWPID 536870912
#define CLONE_NEWUTS 67108864
#define CLONE_PARENT 32768
#define CLONE_PARENT_SETTID 1048576
#define CLONE_PTRACE 8192
#define CLONE_SETTLS 524288
#define CLONE_SIGHAND 2048
#define CLONE_SYSVSEM 262144
#define CLONE_THREAD 65536
#define CLONE_UNTRACED 8388608
#define CLONE_VFORK 16384
#define CLONE_VM 256
#define CLONE_NEWCGROUP 33554432


int clone_flags[] = {
	CLONE_CHILD_CLEARTID,
	CLONE_CHILD_SETTID,
	CLONE_FILES,
	CLONE_FS,
	CLONE_IO,
	CLONE_NEWIPC,
	CLONE_NEWNET,
	CLONE_NEWNS,
	CLONE_NEWPID,
	CLONE_NEWUTS,
	CLONE_PARENT,
	CLONE_PARENT_SETTID,
	CLONE_PTRACE,
	CLONE_SETTLS,
	CLONE_SIGHAND,
	CLONE_SYSVSEM,
	CLONE_THREAD,
	CLONE_UNTRACED,
	CLONE_VFORK,
	CLONE_VM,
	CLONE_NEWCGROUP
};


/* ---------- snd_seq_queue_name ---------- */

#define "queue0" Undefined in const file! Need to manually fill out !
#define "queue1" Undefined in const file! Need to manually fill out !


char* snd_seq_queue_name[] = {
	"queue0",
	"queue1"
};


/* ---------- snd_timer_id_str ---------- */

#define "id0" Undefined in const file! Need to manually fill out !
#define "id1" Undefined in const file! Need to manually fill out !


char* snd_timer_id_str[] = {
	"id0",
	"id1"
};


/* ---------- sockopt_opt_sock_void ---------- */

#define SO_DETACH_FILTER 27
#define SO_MARK 36


int sockopt_opt_sock_void[] = {
	SO_DETACH_FILTER,
	SO_MARK
};


/* ---------- input_mask_type ---------- */

#define EV_SYN 0
#define EV_KEY 1
#define EV_REL 2
#define EV_ABS 3
#define EV_MSC 4
#define EV_SW 5
#define EV_LED 17
#define EV_SND 18
#define EV_FF 21


int input_mask_type[] = {
	EV_SYN,
	EV_KEY,
	EV_REL,
	EV_ABS,
	EV_MSC,
	EV_SW,
	EV_LED,
	EV_SND,
	EV_FF
};


/* ---------- xfrm_policy_shares ---------- */

#define XFRM_SHARE_ANY 0
#define XFRM_SHARE_SESSION 1
#define XFRM_SHARE_USER 2
#define XFRM_SHARE_UNIQUE 3


int xfrm_policy_shares[] = {
	XFRM_SHARE_ANY,
	XFRM_SHARE_SESSION,
	XFRM_SHARE_USER,
	XFRM_SHARE_UNIQUE
};


/* ---------- fcntl_getflags ---------- */

#define F_GETFD 1
#define F_GETFL 3
#define F_GETSIG 11
#define F_GETLEASE 1025
#define F_GETPIPE_SZ 1032
#define F_GET_SEALS 1034


int fcntl_getflags[] = {
	F_GETFD,
	F_GETFL,
	F_GETSIG,
	F_GETLEASE,
	F_GETPIPE_SZ,
	F_GET_SEALS
};


/* ---------- udp_encap_option_values ---------- */

#define UDP_ENCAP_ESPINUDP_NON_IKE 1
#define UDP_ENCAP_ESPINUDP 2
#define UDP_ENCAP_L2TPINUDP 3
#define UDP_ENCAP_GTP0 4
#define UDP_ENCAP_GTP1U 5


int udp_encap_option_values[] = {
	UDP_ENCAP_ESPINUDP_NON_IKE,
	UDP_ENCAP_ESPINUDP,
	UDP_ENCAP_L2TPINUDP,
	UDP_ENCAP_GTP0,
	UDP_ENCAP_GTP1U
};


/* ---------- drm_dma_flags ---------- */

#define _DRM_DMA_BLOCK 1
#define _DRM_DMA_WHILE_LOCKED 2
#define _DRM_DMA_PRIORITY 4
#define _DRM_DMA_WAIT 16
#define _DRM_DMA_SMALLER_OK 32
#define _DRM_DMA_LARGER_OK 64


int drm_dma_flags[] = {
	_DRM_DMA_BLOCK,
	_DRM_DMA_WHILE_LOCKED,
	_DRM_DMA_PRIORITY,
	_DRM_DMA_WAIT,
	_DRM_DMA_SMALLER_OK,
	_DRM_DMA_LARGER_OK
};


/* ---------- kvm_guest_debug_flags ---------- */

#define KVM_GUESTDBG_ENABLE 1
#define KVM_GUESTDBG_SINGLESTEP 2
#define KVM_GUESTDBG_USE_SW_BP 65536
#define KVM_GUESTDBG_USE_HW_BP 131072
#define KVM_GUESTDBG_INJECT_DB 262144
#define KVM_GUESTDBG_INJECT_BP 524288


int kvm_guest_debug_flags[] = {
	KVM_GUESTDBG_ENABLE,
	KVM_GUESTDBG_SINGLESTEP,
	KVM_GUESTDBG_USE_SW_BP,
	KVM_GUESTDBG_USE_HW_BP,
	KVM_GUESTDBG_INJECT_DB,
	KVM_GUESTDBG_INJECT_BP
};


/* ---------- mount_flags ---------- */

#define MS_BIND 4096
#define MS_DIRSYNC 128
#define MS_MANDLOCK 64
#define MS_MOVE 8192
#define MS_NOATIME 1024
#define MS_NODEV 4
#define MS_NODIRATIME 2048
#define MS_NOEXEC 8
#define MS_NOSUID 2
#define MS_RDONLY 1
#define MS_RELATIME 2097152
#define MS_REMOUNT 32
#define MS_SILENT 32768
#define MS_STRICTATIME 16777216
#define MS_SYNCHRONOUS 16
#define MS_REC 16384
#define MS_POSIXACL 65536
#define MS_UNBINDABLE 131072
#define MS_PRIVATE 262144
#define MS_SLAVE 524288
#define MS_SHARED 1048576
#define MS_I_VERSION 8388608
#define MS_LAZYTIME 33554432


int mount_flags[] = {
	MS_BIND,
	MS_DIRSYNC,
	MS_MANDLOCK,
	MS_MOVE,
	MS_NOATIME,
	MS_NODEV,
	MS_NODIRATIME,
	MS_NOEXEC,
	MS_NOSUID,
	MS_RDONLY,
	MS_RELATIME,
	MS_REMOUNT,
	MS_SILENT,
	MS_STRICTATIME,
	MS_SYNCHRONOUS,
	MS_REC,
	MS_POSIXACL,
	MS_UNBINDABLE,
	MS_PRIVATE,
	MS_SLAVE,
	MS_SHARED,
	MS_I_VERSION,
	MS_LAZYTIME
};


/* ---------- sockopt_opt_sock_buf ---------- */

#define SO_PEERNAME 28
#define SO_PEERSEC 31
#define SO_GET_FILTER 26


int sockopt_opt_sock_buf[] = {
	SO_PEERNAME,
	SO_PEERSEC,
	SO_GET_FILTER
};


/* ---------- userfaultfd_flags ---------- */

#define O_NONBLOCK 2048
#define O_CLOEXEC 524288


int userfaultfd_flags[] = {
	O_NONBLOCK,
	O_CLOEXEC
};


/* ---------- fanotify_mark ---------- */

#define FAN_MARK_ADD 1
#define FAN_MARK_REMOVE 2
#define FAN_MARK_FLUSH 128
#define FAN_MARK_DONT_FOLLOW 4
#define FAN_MARK_ONLYDIR 8
#define FAN_MARK_MOUNT 16
#define FAN_MARK_IGNORED_MASK 32
#define FAN_MARK_IGNORED_SURV_MODIFY 64


int fanotify_mark[] = {
	FAN_MARK_ADD,
	FAN_MARK_REMOVE,
	FAN_MARK_FLUSH,
	FAN_MARK_DONT_FOLLOW,
	FAN_MARK_ONLYDIR,
	FAN_MARK_MOUNT,
	FAN_MARK_IGNORED_MASK,
	FAN_MARK_IGNORED_SURV_MODIFY
};


/* ---------- kvm_cpu_funciton ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 6 Undefined in const file! Need to manually fill out !
#define 7 Undefined in const file! Need to manually fill out !
#define 10 Undefined in const file! Need to manually fill out !
#define 11 Undefined in const file! Need to manually fill out !
#define 13 Undefined in const file! Need to manually fill out !
#define KVM_CPUID_SIGNATURE 1073741824
#define KVM_CPUID_FEATURES 1073741825
#define 0x80000000 Undefined in const file! Need to manually fill out !
#define 0x80000001 Undefined in const file! Need to manually fill out !
#define 0x80000007 Undefined in const file! Need to manually fill out !
#define 0x80000008 Undefined in const file! Need to manually fill out !
#define 0x80000019 Undefined in const file! Need to manually fill out !
#define 0xC0000000 Undefined in const file! Need to manually fill out !
#define 0xC0000001 Undefined in const file! Need to manually fill out !


int kvm_cpu_funciton[] = {
	0,
	1,
	2,
	4,
	6,
	7,
	10,
	11,
	13,
	KVM_CPUID_SIGNATURE,
	KVM_CPUID_FEATURES,
	0x80000000,
	0x80000001,
	0x80000007,
	0x80000008,
	0x80000019,
	0xC0000000,
	0xC0000001
};


/* ---------- cap_version ---------- */

#define 0x19980330 Undefined in const file! Need to manually fill out !
#define 0x20071026 Undefined in const file! Need to manually fill out !
#define 0x20080522 Undefined in const file! Need to manually fill out !


int cap_version[] = {
	0x19980330,
	0x20071026,
	0x20080522
};


/* ---------- ax25_protocols ---------- */

#define AX25_P_ROSE 1
#define AX25_P_VJCOMP 6
#define AX25_P_VJUNCOMP 7
#define AX25_P_SEGMENT 8
#define AX25_P_TEXNET 195
#define AX25_P_LQ 196
#define AX25_P_ATALK 202
#define AX25_P_ATALK_ARP 203
#define AX25_P_IP 204
#define AX25_P_ARP 205
#define AX25_P_FLEXNET 206
#define AX25_P_NETROM 207
#define AX25_P_TEXT 240


int ax25_protocols[] = {
	AX25_P_ROSE,
	AX25_P_VJCOMP,
	AX25_P_VJUNCOMP,
	AX25_P_SEGMENT,
	AX25_P_TEXNET,
	AX25_P_LQ,
	AX25_P_ATALK,
	AX25_P_ATALK_ARP,
	AX25_P_IP,
	AX25_P_ARP,
	AX25_P_FLEXNET,
	AX25_P_NETROM,
	AX25_P_TEXT
};


/* ---------- fanotify_mask ---------- */

#define FAN_ACCESS 1
#define FAN_MODIFY 2
#define FAN_CLOSE_WRITE 8
#define FAN_CLOSE_NOWRITE 16
#define FAN_OPEN 32
#define FAN_OPEN_PERM 65536
#define FAN_ACCESS_PERM 131072
#define FAN_ONDIR 1073741824
#define FAN_EVENT_ON_CHILD 134217728


int fanotify_mask[] = {
	FAN_ACCESS,
	FAN_MODIFY,
	FAN_CLOSE_WRITE,
	FAN_CLOSE_NOWRITE,
	FAN_OPEN,
	FAN_OPEN_PERM,
	FAN_ACCESS_PERM,
	FAN_ONDIR,
	FAN_EVENT_ON_CHILD
};


/* ---------- te_ss_cmd_flags ---------- */

#define TE_IOCTL_SS_CMD_GET_NEW_REQ 1
#define TE_IOCTL_SS_CMD_REQ_COMPLETE 2


int te_ss_cmd_flags[] = {
	TE_IOCTL_SS_CMD_GET_NEW_REQ,
	TE_IOCTL_SS_CMD_REQ_COMPLETE
};


/* ---------- icmpv6_time_exceed_codes ---------- */

#define ICMPV6_EXC_HOPLIMIT 0
#define ICMPV6_EXC_FRAGTIME 1


int icmpv6_time_exceed_codes[] = {
	ICMPV6_EXC_HOPLIMIT,
	ICMPV6_EXC_FRAGTIME
};


/* ---------- accept_flags ---------- */

#define SOCK_NONBLOCK 2048
#define SOCK_CLOEXEC 524288


int accept_flags[] = {
	SOCK_NONBLOCK,
	SOCK_CLOEXEC
};


/* ---------- kvm_x86_cr0 ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 8 Undefined in const file! Need to manually fill out !
#define 16 Undefined in const file! Need to manually fill out !
#define 32 Undefined in const file! Need to manually fill out !
#define 65536 Undefined in const file! Need to manually fill out !
#define 262144 Undefined in const file! Need to manually fill out !
#define 536870912 Undefined in const file! Need to manually fill out !
#define 1073741824 Undefined in const file! Need to manually fill out !
#define 2147483648 Undefined in const file! Need to manually fill out !


int kvm_x86_cr0[] = {
	1,
	2,
	4,
	8,
	16,
	32,
	65536,
	262144,
	536870912,
	1073741824,
	2147483648
};


/* ---------- nfc_proto ---------- */

#define NFC_PROTO_JEWEL 1
#define NFC_PROTO_MIFARE 2
#define NFC_PROTO_FELICA 3
#define NFC_PROTO_ISO14443 4
#define NFC_PROTO_NFC_DEP 5
#define NFC_PROTO_ISO14443_B 6
#define NFC_PROTO_ISO15693 7


int nfc_proto[] = {
	NFC_PROTO_JEWEL,
	NFC_PROTO_MIFARE,
	NFC_PROTO_FELICA,
	NFC_PROTO_ISO14443,
	NFC_PROTO_NFC_DEP,
	NFC_PROTO_ISO14443_B,
	NFC_PROTO_ISO15693
};


/* ---------- lo_encrypt_type ---------- */

#define LO_CRYPT_NONE 0
#define LO_CRYPT_XOR 1
#define LO_CRYPT_DES 2
#define LO_CRYPT_FISH2 3
#define LO_CRYPT_BLOW 4
#define LO_CRYPT_CAST128 5
#define LO_CRYPT_IDEA 6
#define LO_CRYPT_DUMMY 9
#define LO_CRYPT_SKIPJACK 10
#define LO_CRYPT_CRYPTOAPI 18


int lo_encrypt_type[] = {
	LO_CRYPT_NONE,
	LO_CRYPT_XOR,
	LO_CRYPT_DES,
	LO_CRYPT_FISH2,
	LO_CRYPT_BLOW,
	LO_CRYPT_CAST128,
	LO_CRYPT_IDEA,
	LO_CRYPT_DUMMY,
	LO_CRYPT_SKIPJACK,
	LO_CRYPT_CRYPTOAPI
};


/* ---------- mif6c_flags ---------- */

#define MIFF_REGISTER 1


int mif6c_flags[] = {
	MIFF_REGISTER
};


/* ---------- clock_type ---------- */

#define CLOCK_REALTIME 0
#define CLOCK_REALTIME_COARSE 5
#define CLOCK_MONOTONIC 1
#define CLOCK_MONOTONIC_COARSE 6
#define CLOCK_MONOTONIC_RAW 4
#define CLOCK_BOOTTIME 7
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID 3


int clock_type[] = {
	CLOCK_REALTIME,
	CLOCK_REALTIME_COARSE,
	CLOCK_MONOTONIC,
	CLOCK_MONOTONIC_COARSE,
	CLOCK_MONOTONIC_RAW,
	CLOCK_BOOTTIME,
	CLOCK_PROCESS_CPUTIME_ID,
	CLOCK_THREAD_CPUTIME_ID
};


/* ---------- prctl_endian ---------- */

#define PR_ENDIAN_BIG 0
#define PR_ENDIAN_LITTLE 1
#define PR_ENDIAN_PPC_LITTLE 2


int prctl_endian[] = {
	PR_ENDIAN_BIG,
	PR_ENDIAN_LITTLE,
	PR_ENDIAN_PPC_LITTLE
};


/* ---------- fiemap_extent_flags ---------- */

#define FIEMAP_EXTENT_LAST 1
#define FIEMAP_EXTENT_UNKNOWN 2
#define FIEMAP_EXTENT_DELALLOC 4
#define FIEMAP_EXTENT_ENCODED 8
#define FIEMAP_EXTENT_DATA_ENCRYPTED 128
#define FIEMAP_EXTENT_NOT_ALIGNED 256
#define FIEMAP_EXTENT_DATA_INLINE 512
#define FIEMAP_EXTENT_DATA_TAIL 1024
#define FIEMAP_EXTENT_UNWRITTEN 2048
#define FIEMAP_EXTENT_MERGED 4096
#define FIEMAP_EXTENT_SHARED 8192


int fiemap_extent_flags[] = {
	FIEMAP_EXTENT_LAST,
	FIEMAP_EXTENT_UNKNOWN,
	FIEMAP_EXTENT_DELALLOC,
	FIEMAP_EXTENT_ENCODED,
	FIEMAP_EXTENT_DATA_ENCRYPTED,
	FIEMAP_EXTENT_NOT_ALIGNED,
	FIEMAP_EXTENT_DATA_INLINE,
	FIEMAP_EXTENT_DATA_TAIL,
	FIEMAP_EXTENT_UNWRITTEN,
	FIEMAP_EXTENT_MERGED,
	FIEMAP_EXTENT_SHARED
};


/* ---------- kvm_guest_selector ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 3 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 8 Undefined in const file! Need to manually fill out !
#define 9 Undefined in const file! Need to manually fill out !
#define 10 Undefined in const file! Need to manually fill out !
#define 11 Undefined in const file! Need to manually fill out !
#define 12 Undefined in const file! Need to manually fill out !
#define 13 Undefined in const file! Need to manually fill out !
#define 14 Undefined in const file! Need to manually fill out !
#define 15 Undefined in const file! Need to manually fill out !
#define 16 Undefined in const file! Need to manually fill out !


int kvm_guest_selector[] = {
	0,
	3,
	4,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16
};


/* ---------- map_flags ---------- */

#define BPF_F_NO_PREALLOC 1
#define BPF_F_NO_COMMON_LRU 2


int map_flags[] = {
	BPF_F_NO_PREALLOC,
	BPF_F_NO_COMMON_LRU
};


/* ---------- snd_timer_dev ---------- */

#define SNDRV_TIMER_GLOBAL_SYSTEM 0
#define SNDRV_TIMER_GLOBAL_RTC 1
#define SNDRV_TIMER_GLOBAL_HPET 2
#define SNDRV_TIMER_GLOBAL_HRTIMER 3


int snd_timer_dev[] = {
	SNDRV_TIMER_GLOBAL_SYSTEM,
	SNDRV_TIMER_GLOBAL_RTC,
	SNDRV_TIMER_GLOBAL_HPET,
	SNDRV_TIMER_GLOBAL_HRTIMER
};


/* ---------- mbind_flags ---------- */

#define MPOL_MF_STRICT 1
#define MPOL_MF_MOVE 2
#define MPOL_MF_MOVE_ALL 4


int mbind_flags[] = {
	MPOL_MF_STRICT,
	MPOL_MF_MOVE,
	MPOL_MF_MOVE_ALL
};


/* ---------- sem_sem_id ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 3 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !


int sem_sem_id[] = {
	0,
	1,
	2,
	3,
	4
};


/* ---------- tcp_option_types_buf ---------- */

#define TCP_INFO 11
#define TCP_CONGESTION 13
#define TCP_MD5SIG 14
#define TCP_REPAIR_OPTIONS 22
#define TCP_CC_INFO 26
#define TCP_SAVED_SYN 28
#define TCP_REPAIR_WINDOW 29


int tcp_option_types_buf[] = {
	TCP_INFO,
	TCP_CONGESTION,
	TCP_MD5SIG,
	TCP_REPAIR_OPTIONS,
	TCP_CC_INFO,
	TCP_SAVED_SYN,
	TCP_REPAIR_WINDOW
};


/* ---------- pollfd_events ---------- */

#define POLLIN 1
#define POLLPRI 2
#define POLLOUT 4
#define POLLERR 8
#define POLLHUP 16
#define POLLNVAL 32
#define POLLRDNORM 64
#define POLLRDBAND 128
#define POLLWRNORM 256
#define POLLWRBAND 512
#define POLLMSG 1024
#define POLLREMOVE 4096
#define POLLRDHUP 8192
#define POLLFREE 16384
#define POLL_BUSY_LOOP 32768


int pollfd_events[] = {
	POLLIN,
	POLLPRI,
	POLLOUT,
	POLLERR,
	POLLHUP,
	POLLNVAL,
	POLLRDNORM,
	POLLRDBAND,
	POLLWRNORM,
	POLLWRBAND,
	POLLMSG,
	POLLREMOVE,
	POLLRDHUP,
	POLLFREE,
	POLL_BUSY_LOOP
};


/* ---------- bpf_map_type ---------- */

#define BPF_MAP_TYPE_HASH 1
#define BPF_MAP_TYPE_ARRAY 2
#define BPF_MAP_TYPE_PROG_ARRAY 3
#define BPF_MAP_TYPE_PERF_EVENT_ARRAY 4
#define BPF_MAP_TYPE_STACK_TRACE 7
#define BPF_MAP_TYPE_CGROUP_ARRAY 8
#define BPF_MAP_TYPE_PERCPU_HASH 5
#define BPF_MAP_TYPE_PERCPU_ARRAY 6
#define BPF_MAP_TYPE_LRU_HASH 9
#define BPF_MAP_TYPE_LRU_PERCPU_HASH 10


int bpf_map_type[] = {
	BPF_MAP_TYPE_HASH,
	BPF_MAP_TYPE_ARRAY,
	BPF_MAP_TYPE_PROG_ARRAY,
	BPF_MAP_TYPE_PERF_EVENT_ARRAY,
	BPF_MAP_TYPE_STACK_TRACE,
	BPF_MAP_TYPE_CGROUP_ARRAY,
	BPF_MAP_TYPE_PERCPU_HASH,
	BPF_MAP_TYPE_PERCPU_ARRAY,
	BPF_MAP_TYPE_LRU_HASH,
	BPF_MAP_TYPE_LRU_PERCPU_HASH
};


/* ---------- nfc_llcp_opts ---------- */

#define NFC_LLCP_RW 0
#define NFC_LLCP_MIUX 1
#define NFC_LLCP_REMOTE_MIU 2
#define NFC_LLCP_REMOTE_LTO 3
#define NFC_LLCP_REMOTE_RW 4


int nfc_llcp_opts[] = {
	NFC_LLCP_RW,
	NFC_LLCP_MIUX,
	NFC_LLCP_REMOTE_MIU,
	NFC_LLCP_REMOTE_LTO,
	NFC_LLCP_REMOTE_RW
};


/* ---------- rlimit_type ---------- */

#define RLIMIT_AS 9
#define RLIMIT_CORE 4
#define RLIMIT_CPU 0
#define RLIMIT_DATA 2
#define RLIMIT_FSIZE 1
#define RLIMIT_LOCKS 10
#define RLIMIT_MEMLOCK 8
#define RLIMIT_MSGQUEUE 12
#define RLIMIT_NICE 13
#define RLIMIT_NOFILE 7
#define RLIMIT_NPROC 6
#define RLIMIT_RSS 5
#define RLIMIT_RTPRIO 14
#define RLIMIT_RTTIME 15
#define RLIMIT_SIGPENDING 11
#define RLIMIT_STACK 3


int rlimit_type[] = {
	RLIMIT_AS,
	RLIMIT_CORE,
	RLIMIT_CPU,
	RLIMIT_DATA,
	RLIMIT_FSIZE,
	RLIMIT_LOCKS,
	RLIMIT_MEMLOCK,
	RLIMIT_MSGQUEUE,
	RLIMIT_NICE,
	RLIMIT_NOFILE,
	RLIMIT_NPROC,
	RLIMIT_RSS,
	RLIMIT_RTPRIO,
	RLIMIT_RTTIME,
	RLIMIT_SIGPENDING,
	RLIMIT_STACK
};


/* ---------- prctl_fpexc ---------- */

#define PR_FP_EXC_SW_ENABLE 128
#define PR_FP_EXC_DIV 65536
#define PR_FP_EXC_OVF 131072
#define PR_FP_EXC_UND 262144
#define PR_FP_EXC_RES 524288
#define PR_FP_EXC_INV 1048576
#define PR_FP_EXC_DISABLED 0
#define PR_FP_EXC_NONRECOV 1
#define PR_FP_EXC_ASYNC 2
#define PR_FP_EXC_PRECISE 3


int prctl_fpexc[] = {
	PR_FP_EXC_SW_ENABLE,
	PR_FP_EXC_DIV,
	PR_FP_EXC_OVF,
	PR_FP_EXC_UND,
	PR_FP_EXC_RES,
	PR_FP_EXC_INV,
	PR_FP_EXC_DISABLED,
	PR_FP_EXC_NONRECOV,
	PR_FP_EXC_ASYNC,
	PR_FP_EXC_PRECISE
};


/* ---------- devnames ---------- */

#define "lo" Undefined in const file! Need to manually fill out !
#define "tunl0" Undefined in const file! Need to manually fill out !
#define "gre0" Undefined in const file! Need to manually fill out !
#define "gretap0" Undefined in const file! Need to manually fill out !
#define "ip_vti0" Undefined in const file! Need to manually fill out !
#define "ip6_vti0" Undefined in const file! Need to manually fill out !
#define "sit0" Undefined in const file! Need to manually fill out !
#define "ip6tnl0" Undefined in const file! Need to manually fill out !
#define "ip6gre0" Undefined in const file! Need to manually fill out !
#define "bond0" Undefined in const file! Need to manually fill out !
#define "dummy0" Undefined in const file! Need to manually fill out !
#define "eql" Undefined in const file! Need to manually fill out !
#define "ifb0" Undefined in const file! Need to manually fill out !
#define "ipddp0" Undefined in const file! Need to manually fill out !
#define "yam0" Undefined in const file! Need to manually fill out !
#define "bcsf0" Undefined in const file! Need to manually fill out !
#define "bcsh0" Undefined in const file! Need to manually fill out !
#define "teql0" Undefined in const file! Need to manually fill out !
#define "nr0" Undefined in const file! Need to manually fill out !
#define "rose0" Undefined in const file! Need to manually fill out !
#define "irlan0" Undefined in const file! Need to manually fill out !
#define "bpq0" Undefined in const file! Need to manually fill out !


char* devnames[] = {
	"lo",
	"tunl0",
	"gre0",
	"gretap0",
	"ip_vti0",
	"ip6_vti0",
	"sit0",
	"ip6tnl0",
	"ip6gre0",
	"bond0",
	"dummy0",
	"eql",
	"ifb0",
	"ipddp0",
	"yam0",
	"bcsf0",
	"bcsh0",
	"teql0",
	"nr0",
	"rose0",
	"irlan0",
	"bpq0"
};


/* ---------- kvm_x86_rflags ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 16 Undefined in const file! Need to manually fill out !
#define 64 Undefined in const file! Need to manually fill out !
#define 128 Undefined in const file! Need to manually fill out !
#define 256 Undefined in const file! Need to manually fill out !
#define 512 Undefined in const file! Need to manually fill out !
#define 1024 Undefined in const file! Need to manually fill out !
#define 2048 Undefined in const file! Need to manually fill out !
#define 4096 Undefined in const file! Need to manually fill out !
#define 8192 Undefined in const file! Need to manually fill out !
#define 16384 Undefined in const file! Need to manually fill out !
#define 32768 Undefined in const file! Need to manually fill out !
#define 65536 Undefined in const file! Need to manually fill out !
#define 131072 Undefined in const file! Need to manually fill out !
#define 262144 Undefined in const file! Need to manually fill out !
#define 524288 Undefined in const file! Need to manually fill out !
#define 1048576 Undefined in const file! Need to manually fill out !
#define 2097152 Undefined in const file! Need to manually fill out !


int kvm_x86_rflags[] = {
	1,
	2,
	4,
	16,
	64,
	128,
	256,
	512,
	1024,
	2048,
	4096,
	8192,
	16384,
	32768,
	65536,
	131072,
	262144,
	524288,
	1048576,
	2097152
};


/* ---------- bt_chi_chan ---------- */

#define HCI_CHANNEL_RAW 0
#define HCI_CHANNEL_USER 1
#define HCI_CHANNEL_MONITOR 2
#define HCI_CHANNEL_CONTROL 3


int bt_chi_chan[] = {
	HCI_CHANNEL_RAW,
	HCI_CHANNEL_USER,
	HCI_CHANNEL_MONITOR,
	HCI_CHANNEL_CONTROL
};


/* ---------- linkat_flags ---------- */

#define AT_EMPTY_PATH 4096
#define AT_SYMLINK_FOLLOW 1024


int linkat_flags[] = {
	AT_EMPTY_PATH,
	AT_SYMLINK_FOLLOW
};


/* ---------- timerfd_settime_flags ---------- */

#define TFD_TIMER_ABSTIME 1


int timerfd_settime_flags[] = {
	TFD_TIMER_ABSTIME
};


/* ---------- sched_policy ---------- */

#define SCHED_NORMAL 0
#define SCHED_BATCH 3
#define SCHED_IDLE 5
#define SCHED_FIFO 1
#define SCHED_RR 2
#define SCHED_DEADLINE 6


int sched_policy[] = {
	SCHED_NORMAL,
	SCHED_BATCH,
	SCHED_IDLE,
	SCHED_FIFO,
	SCHED_RR,
	SCHED_DEADLINE
};


/* ---------- af_alg_type ---------- */

#define CRYPTO_ALG_TYPE_MASK 15
#define CRYPTO_ALG_TYPE_CIPHER 1
#define CRYPTO_ALG_TYPE_COMPRESS 2
#define CRYPTO_ALG_TYPE_AEAD 3
#define CRYPTO_ALG_TYPE_BLKCIPHER 4
#define CRYPTO_ALG_TYPE_ABLKCIPHER 5
#define CRYPTO_ALG_TYPE_GIVCIPHER 6
#define CRYPTO_ALG_TYPE_DIGEST 14
#define CRYPTO_ALG_TYPE_HASH 14
#define CRYPTO_ALG_TYPE_SHASH 14
#define CRYPTO_ALG_TYPE_AHASH 15
#define CRYPTO_ALG_TYPE_RNG 12
#define CRYPTO_ALG_TYPE_AKCIPHER 13
#define CRYPTO_ALG_TYPE_PCOMPRESS 15
#define CRYPTO_ALG_LARVAL 16
#define CRYPTO_ALG_DEAD 32
#define CRYPTO_ALG_DYING 64
#define CRYPTO_ALG_ASYNC 128
#define CRYPTO_ALG_NEED_FALLBACK 256
#define CRYPTO_ALG_GENIV 512
#define CRYPTO_ALG_TESTED 1024
#define CRYPTO_ALG_INSTANCE 2048
#define CRYPTO_ALG_KERN_DRIVER_ONLY 4096
#define CRYPTO_ALG_INTERNAL 8192


int af_alg_type[] = {
	CRYPTO_ALG_TYPE_MASK,
	CRYPTO_ALG_TYPE_CIPHER,
	CRYPTO_ALG_TYPE_COMPRESS,
	CRYPTO_ALG_TYPE_AEAD,
	CRYPTO_ALG_TYPE_BLKCIPHER,
	CRYPTO_ALG_TYPE_ABLKCIPHER,
	CRYPTO_ALG_TYPE_GIVCIPHER,
	CRYPTO_ALG_TYPE_DIGEST,
	CRYPTO_ALG_TYPE_HASH,
	CRYPTO_ALG_TYPE_SHASH,
	CRYPTO_ALG_TYPE_AHASH,
	CRYPTO_ALG_TYPE_RNG,
	CRYPTO_ALG_TYPE_AKCIPHER,
	CRYPTO_ALG_TYPE_PCOMPRESS,
	CRYPTO_ALG_LARVAL,
	CRYPTO_ALG_DEAD,
	CRYPTO_ALG_DYING,
	CRYPTO_ALG_ASYNC,
	CRYPTO_ALG_NEED_FALLBACK,
	CRYPTO_ALG_GENIV,
	CRYPTO_ALG_TESTED,
	CRYPTO_ALG_INSTANCE,
	CRYPTO_ALG_KERN_DRIVER_ONLY,
	CRYPTO_ALG_INTERNAL
};


/* ---------- ipv6_routing_types ---------- */

#define IPV6_SRCRT_STRICT 1
#define IPV6_SRCRT_TYPE_0 0
#define IPV6_SRCRT_TYPE_2 2


int ipv6_routing_types[] = {
	IPV6_SRCRT_STRICT,
	IPV6_SRCRT_TYPE_0,
	IPV6_SRCRT_TYPE_2
};


/* ---------- icmpv6_dest_unreach_codes ---------- */

#define ICMPV6_NOROUTE 0
#define ICMPV6_ADM_PROHIBITED 1
#define ICMPV6_NOT_NEIGHBOUR 2
#define ICMPV6_ADDR_UNREACH 3
#define ICMPV6_PORT_UNREACH 4
#define ICMPV6_POLICY_FAIL 5
#define ICMPV6_REJECT_ROUTE 6


int icmpv6_dest_unreach_codes[] = {
	ICMPV6_NOROUTE,
	ICMPV6_ADM_PROHIBITED,
	ICMPV6_NOT_NEIGHBOUR,
	ICMPV6_ADDR_UNREACH,
	ICMPV6_PORT_UNREACH,
	ICMPV6_POLICY_FAIL,
	ICMPV6_REJECT_ROUTE
};


/* ---------- xfrm_modes ---------- */

#define XFRM_MODE_TRANSPORT 0
#define XFRM_MODE_TUNNEL 1
#define XFRM_MODE_ROUTEOPTIMIZATION 2
#define XFRM_MODE_IN_TRIGGER 3
#define XFRM_MODE_BEET 4


int xfrm_modes[] = {
	XFRM_MODE_TRANSPORT,
	XFRM_MODE_TUNNEL,
	XFRM_MODE_ROUTEOPTIMIZATION,
	XFRM_MODE_IN_TRIGGER,
	XFRM_MODE_BEET
};


/* ---------- mlock_flags ---------- */

#define MLOCK_ONFAULT 1


int mlock_flags[] = {
	MLOCK_ONFAULT
};


/* ---------- bt_ioctl ---------- */

#define TIOCOUTQ 21521
#define TIOCINQ 21531
#define SIOCGSTAMP 35078
#define SIOCGSTAMPNS 35079


int bt_ioctl[] = {
	TIOCOUTQ,
	TIOCINQ,
	SIOCGSTAMP,
	SIOCGSTAMPNS
};


/* ---------- snd_seq_filter ---------- */

#define SNDRV_SEQ_FILTER_BROADCAST 1
#define SNDRV_SEQ_FILTER_MULTICAST 2
#define SNDRV_SEQ_FILTER_BOUNCE 4
#define SNDRV_SEQ_FILTER_USE_EVENT 18446744071562067968


int snd_seq_filter[] = {
	SNDRV_SEQ_FILTER_BROADCAST,
	SNDRV_SEQ_FILTER_MULTICAST,
	SNDRV_SEQ_FILTER_BOUNCE,
	SNDRV_SEQ_FILTER_USE_EVENT
};


/* ---------- epoll_op ---------- */

#define EPOLL_CTL_ADD 1
#define EPOLL_CTL_MOD 3
#define EPOLL_CTL_DEL 2


int epoll_op[] = {
	EPOLL_CTL_ADD,
	EPOLL_CTL_MOD,
	EPOLL_CTL_DEL
};


/* ---------- personality_flags ---------- */

#define PER_LINUX 0
#define PER_SVR4 68157441
#define PER_SVR3 83886082
#define PER_OSR5 100663299
#define PER_WYSEV386 83886084
#define PER_ISCR4 67108869
#define PER_BSD 6
#define PER_XENIX 83886087
#define PER_LINUX32 8
#define PER_IRIX32 67108873
#define PER_IRIXN32 67108874
#define PER_IRIX64 67108875
#define PER_RISCOS 12
#define PER_SOLARIS 67108877
#define PER_UW7 68157454
#define PER_OSF4 15
#define PER_HPUX 16
#define ADDR_NO_RANDOMIZE 262144
#define MMAP_PAGE_ZERO 1048576
#define ADDR_COMPAT_LAYOUT 2097152
#define READ_IMPLIES_EXEC 4194304
#define ADDR_LIMIT_32BIT 8388608
#define SHORT_INODE 16777216
#define WHOLE_SECONDS 33554432
#define STICKY_TIMEOUTS 67108864
#define ADDR_LIMIT_3GB 134217728


int personality_flags[] = {
	PER_LINUX,
	PER_SVR4,
	PER_SVR3,
	PER_OSR5,
	PER_WYSEV386,
	PER_ISCR4,
	PER_BSD,
	PER_XENIX,
	PER_LINUX32,
	PER_IRIX32,
	PER_IRIXN32,
	PER_IRIX64,
	PER_RISCOS,
	PER_SOLARIS,
	PER_UW7,
	PER_OSF4,
	PER_HPUX,
	ADDR_NO_RANDOMIZE,
	MMAP_PAGE_ZERO,
	ADDR_COMPAT_LAYOUT,
	READ_IMPLIES_EXEC,
	ADDR_LIMIT_32BIT,
	SHORT_INODE,
	WHOLE_SECONDS,
	STICKY_TIMEOUTS,
	ADDR_LIMIT_3GB
};


/* ---------- fcntl_flags ---------- */

#define FD_CLOEXEC 1


int fcntl_flags[] = {
	FD_CLOEXEC
};


/* ---------- getitimer_which ---------- */

#define ITIMER_REAL 0
#define ITIMER_VIRTUAL 1
#define ITIMER_PROF 2


int getitimer_which[] = {
	ITIMER_REAL,
	ITIMER_VIRTUAL,
	ITIMER_PROF
};


/* ---------- sockopt_opt_ipv6_mreq ---------- */

#define IPV6_ADD_MEMBERSHIP 20
#define IPV6_DROP_MEMBERSHIP 21
#define IPV6_JOIN_ANYCAST 27
#define IPV6_LEAVE_ANYCAST 28


int sockopt_opt_ipv6_mreq[] = {
	IPV6_ADD_MEMBERSHIP,
	IPV6_DROP_MEMBERSHIP,
	IPV6_JOIN_ANYCAST,
	IPV6_LEAVE_ANYCAST
};


/* ---------- name_to_handle_at_flags ---------- */

#define AT_EMPTY_PATH 4096
#define AT_SYMLINK_FOLLOW 1024


int name_to_handle_at_flags[] = {
	AT_EMPTY_PATH,
	AT_SYMLINK_FOLLOW
};


/* ---------- rtmsg_metrics ---------- */

#define IP6_RT_PRIO_USER 1024
#define IP6_RT_PRIO_ADDRCONF 256


int rtmsg_metrics[] = {
	IP6_RT_PRIO_USER,
	IP6_RT_PRIO_ADDRCONF
};


/* ---------- kvm_chip_id ---------- */

#define KVM_IRQCHIP_PIC_MASTER 0
#define KVM_IRQCHIP_PIC_SLAVE 1
#define KVM_IRQCHIP_IOAPIC 2


int kvm_chip_id[] = {
	KVM_IRQCHIP_PIC_MASTER,
	KVM_IRQCHIP_PIC_SLAVE,
	KVM_IRQCHIP_IOAPIC
};


/* ---------- snd_timer_sclass ---------- */

#define SNDRV_TIMER_SCLASS_NONE 0
#define SNDRV_TIMER_SCLASS_APPLICATION 1
#define SNDRV_TIMER_SCLASS_SEQUENCER 2
#define SNDRV_TIMER_SCLASS_OSS_SEQUENCER 3


int snd_timer_sclass[] = {
	SNDRV_TIMER_SCLASS_NONE,
	SNDRV_TIMER_SCLASS_APPLICATION,
	SNDRV_TIMER_SCLASS_SEQUENCER,
	SNDRV_TIMER_SCLASS_OSS_SEQUENCER
};


/* ---------- netlink_msg_flags ---------- */

#define NLM_F_REQUEST 1
#define NLM_F_MULTI 2
#define NLM_F_ACK 4
#define NLM_F_ECHO 8
#define NLM_F_DUMP_INTR 16
#define NLM_F_DUMP_FILTERED 32
#define NLM_F_ROOT 256
#define NLM_F_MATCH 512
#define NLM_F_ATOMIC 1024
#define NLM_F_DUMP 768
#define NLM_F_REPLACE 256
#define NLM_F_EXCL 512
#define NLM_F_CREATE 1024
#define NLM_F_APPEND 2048


int netlink_msg_flags[] = {
	NLM_F_REQUEST,
	NLM_F_MULTI,
	NLM_F_ACK,
	NLM_F_ECHO,
	NLM_F_DUMP_INTR,
	NLM_F_DUMP_FILTERED,
	NLM_F_ROOT,
	NLM_F_MATCH,
	NLM_F_ATOMIC,
	NLM_F_DUMP,
	NLM_F_REPLACE,
	NLM_F_EXCL,
	NLM_F_CREATE,
	NLM_F_APPEND
};


/* ---------- kvm_cpuid_flags ---------- */

#define KVM_CPUID_FLAG_SIGNIFCANT_INDEX 1
#define KVM_CPUID_FLAG_STATEFUL_FUNC 2
#define KVM_CPUID_FLAG_STATE_READ_NEXT 4


int kvm_cpuid_flags[] = {
	KVM_CPUID_FLAG_SIGNIFCANT_INDEX,
	KVM_CPUID_FLAG_STATEFUL_FUNC,
	KVM_CPUID_FLAG_STATE_READ_NEXT
};


/* ---------- dccp_option_types_buf ---------- */

#define DCCP_SOCKOPT_SERVICE 2
#define DCCP_SOCKOPT_AVAILABLE_CCIDS 12
#define DCCP_SOCKOPT_CCID 13
#define DCCP_SOCKOPT_TX_CCID 14
#define DCCP_SOCKOPT_RX_CCID 15
#define DCCP_SOCKOPT_CCID_RX_INFO 128
#define DCCP_SOCKOPT_CCID_TX_INFO 192


int dccp_option_types_buf[] = {
	DCCP_SOCKOPT_SERVICE,
	DCCP_SOCKOPT_AVAILABLE_CCIDS,
	DCCP_SOCKOPT_CCID,
	DCCP_SOCKOPT_TX_CCID,
	DCCP_SOCKOPT_RX_CCID,
	DCCP_SOCKOPT_CCID_RX_INFO,
	DCCP_SOCKOPT_CCID_TX_INFO
};


/* ---------- sigprocmask_how ---------- */

#define SIG_BLOCK 0
#define SIG_UNBLOCK 1
#define SIG_SETMASK 2


int sigprocmask_how[] = {
	SIG_BLOCK,
	SIG_UNBLOCK,
	SIG_SETMASK
};


/* ---------- ptrace_options ---------- */

#define PTRACE_O_EXITKILL 1048576
#define PTRACE_O_TRACECLONE 8
#define PTRACE_O_TRACEEXEC 16
#define PTRACE_O_TRACEEXIT 64
#define PTRACE_O_TRACEFORK 2
#define PTRACE_O_TRACESYSGOOD 1
#define PTRACE_O_TRACEVFORK 4
#define PTRACE_O_TRACEVFORKDONE 32


int ptrace_options[] = {
	PTRACE_O_EXITKILL,
	PTRACE_O_TRACECLONE,
	PTRACE_O_TRACEEXEC,
	PTRACE_O_TRACEEXIT,
	PTRACE_O_TRACEFORK,
	PTRACE_O_TRACESYSGOOD,
	PTRACE_O_TRACEVFORK,
	PTRACE_O_TRACEVFORKDONE
};


/* ---------- salg_type ---------- */

#define "aead" Undefined in const file! Need to manually fill out !
#define "hash" Undefined in const file! Need to manually fill out !
#define "rng" Undefined in const file! Need to manually fill out !
#define "skcipher" Undefined in const file! Need to manually fill out !


char* salg_type[] = {
	"aead",
	"hash",
	"rng",
	"skcipher"
};


/* ---------- kvm_guest_addrs ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 0x1000 Undefined in const file! Need to manually fill out !
#define 0x2000 Undefined in const file! Need to manually fill out !
#define 0x3000 Undefined in const file! Need to manually fill out !
#define 0x4000 Undefined in const file! Need to manually fill out !
#define 0x5000 Undefined in const file! Need to manually fill out !
#define 0x6000 Undefined in const file! Need to manually fill out !
#define 0xd000 Undefined in const file! Need to manually fill out !
#define 0xf000 Undefined in const file! Need to manually fill out !
#define 0x100000 Undefined in const file! Need to manually fill out !
#define 0x10000 Undefined in const file! Need to manually fill out !


int kvm_guest_addrs[] = {
	0,
	1,
	2,
	4,
	0x1000,
	0x2000,
	0x3000,
	0x4000,
	0x5000,
	0x6000,
	0xd000,
	0xf000,
	0x100000,
	0x10000
};


/* ---------- prctl_code_intptr ---------- */

#define PR_CAPBSET_READ 23
#define PR_CAPBSET_DROP 24
#define PR_SET_CHILD_SUBREAPER 36
#define PR_SET_DUMPABLE 4
#define PR_SET_FPEMU 10
#define PR_SET_KEEPCAPS 8
#define PR_SET_NO_NEW_PRIVS 38
#define PR_SET_PDEATHSIG 1
#define PR_SET_SECUREBITS 28
#define PR_SET_TIMERSLACK 29
#define PR_SET_TIMING 14
#define PR_SET_TSC 26
#define PR_SET_UNALIGN 6
#define PR_MCE_KILL 33


int prctl_code_intptr[] = {
	PR_CAPBSET_READ,
	PR_CAPBSET_DROP,
	PR_SET_CHILD_SUBREAPER,
	PR_SET_DUMPABLE,
	PR_SET_FPEMU,
	PR_SET_KEEPCAPS,
	PR_SET_NO_NEW_PRIVS,
	PR_SET_PDEATHSIG,
	PR_SET_SECUREBITS,
	PR_SET_TIMERSLACK,
	PR_SET_TIMING,
	PR_SET_TSC,
	PR_SET_UNALIGN,
	PR_MCE_KILL
};


/* ---------- prctl_seccomp_mode ---------- */

#define SECCOMP_MODE_DISABLED 0
#define SECCOMP_MODE_STRICT 1
#define SECCOMP_MODE_FILTER 2


int prctl_seccomp_mode[] = {
	SECCOMP_MODE_DISABLED,
	SECCOMP_MODE_STRICT,
	SECCOMP_MODE_FILTER
};


/* ---------- virtio_net_flags ---------- */

#define VIRTIO_NET_HDR_F_NEEDS_CSUM 1
#define VIRTIO_NET_HDR_F_DATA_VALID 2


int virtio_net_flags[] = {
	VIRTIO_NET_HDR_F_NEEDS_CSUM,
	VIRTIO_NET_HDR_F_DATA_VALID
};


/* ---------- snd_seq_timer_type ---------- */

#define SNDRV_SEQ_TIMER_ALSA 0
#define SNDRV_SEQ_TIMER_MIDI_CLOCK 1
#define SNDRV_SEQ_TIMER_MIDI_TICK 2


int snd_seq_timer_type[] = {
	SNDRV_SEQ_TIMER_ALSA,
	SNDRV_SEQ_TIMER_MIDI_CLOCK,
	SNDRV_SEQ_TIMER_MIDI_TICK
};


/* ---------- cmsg_levels ---------- */

#define SOL_SOCKET 1
#define IPPROTO_ICMP 1
#define SOL_IP 0
#define SOL_TCP 6
#define SOL_UDP 17
#define SOL_IPV6 41
#define SOL_ICMPV6 58
#define SOL_SCTP 132
#define SOL_UDPLITE 136
#define SOL_RAW 255
#define SOL_IPX 256
#define SOL_AX25 257
#define SOL_ATALK 258
#define SOL_NETROM 259
#define SOL_ROSE 260
#define SOL_DECNET 261
#define SOL_PACKET 263
#define SOL_ATM 264
#define SOL_AAL 265
#define SOL_IRDA 266
#define SOL_NETBEUI 267
#define SOL_LLC 268
#define SOL_DCCP 269
#define SOL_NETLINK 270
#define SOL_TIPC 271
#define SOL_RXRPC 272
#define SOL_PPPOL2TP 273
#define SOL_BLUETOOTH 274
#define SOL_PNPIPE 275
#define SOL_RDS 276
#define SOL_IUCV 277
#define SOL_CAIF 278
#define SOL_ALG 279
#define SOL_NFC 280
#define SOL_KCM 281


int cmsg_levels[] = {
	SOL_SOCKET,
	IPPROTO_ICMP,
	SOL_IP,
	SOL_TCP,
	SOL_UDP,
	SOL_IPV6,
	SOL_ICMPV6,
	SOL_SCTP,
	SOL_UDPLITE,
	SOL_RAW,
	SOL_IPX,
	SOL_AX25,
	SOL_ATALK,
	SOL_NETROM,
	SOL_ROSE,
	SOL_DECNET,
	SOL_PACKET,
	SOL_ATM,
	SOL_AAL,
	SOL_IRDA,
	SOL_NETBEUI,
	SOL_LLC,
	SOL_DCCP,
	SOL_NETLINK,
	SOL_TIPC,
	SOL_RXRPC,
	SOL_PPPOL2TP,
	SOL_BLUETOOTH,
	SOL_PNPIPE,
	SOL_RDS,
	SOL_IUCV,
	SOL_CAIF,
	SOL_ALG,
	SOL_NFC,
	SOL_KCM
};


/* ---------- drm_map_type ---------- */

#define _DRM_FRAME_BUFFER 0
#define _DRM_REGISTERS 1
#define _DRM_SHM 2
#define _DRM_AGP 3
#define _DRM_SCATTER_GATHER 4
#define _DRM_CONSISTENT 5


int drm_map_type[] = {
	_DRM_FRAME_BUFFER,
	_DRM_REGISTERS,
	_DRM_SHM,
	_DRM_AGP,
	_DRM_SCATTER_GATHER,
	_DRM_CONSISTENT
};


/* ---------- iocb_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define IOCB_FLAG_RESFD 1


int iocb_flags[] = {
	0,
	IOCB_FLAG_RESFD
};


/* ---------- memfd_flags ---------- */

#define MFD_CLOEXEC 1
#define MFD_ALLOW_SEALING 2


int memfd_flags[] = {
	MFD_CLOEXEC,
	MFD_ALLOW_SEALING
};


/* ---------- xfrm_prefixlens ---------- */

#define 32 Undefined in const file! Need to manually fill out !
#define 128 Undefined in const file! Need to manually fill out !


int xfrm_prefixlens[] = {
	32,
	128
};


/* ---------- netlink_proto ---------- */

#define NETLINK_ROUTE 0
#define NETLINK_UNUSED 1
#define NETLINK_USERSOCK 2
#define NETLINK_FIREWALL 3
#define NETLINK_SOCK_DIAG 4
#define NETLINK_NFLOG 5
#define NETLINK_XFRM 6
#define NETLINK_SELINUX 7
#define NETLINK_ISCSI 8
#define NETLINK_AUDIT 9
#define NETLINK_FIB_LOOKUP 10
#define NETLINK_CONNECTOR 11
#define NETLINK_NETFILTER 12
#define NETLINK_IP6_FW 13
#define NETLINK_DNRTMSG 14
#define NETLINK_KOBJECT_UEVENT 15
#define NETLINK_GENERIC 16
#define NETLINK_SCSITRANSPORT 18
#define NETLINK_ECRYPTFS 19
#define NETLINK_RDMA 20
#define NETLINK_CRYPTO 21
#define NETLINK_INET_DIAG 4


int netlink_proto[] = {
	NETLINK_ROUTE,
	NETLINK_UNUSED,
	NETLINK_USERSOCK,
	NETLINK_FIREWALL,
	NETLINK_SOCK_DIAG,
	NETLINK_NFLOG,
	NETLINK_XFRM,
	NETLINK_SELINUX,
	NETLINK_ISCSI,
	NETLINK_AUDIT,
	NETLINK_FIB_LOOKUP,
	NETLINK_CONNECTOR,
	NETLINK_NETFILTER,
	NETLINK_IP6_FW,
	NETLINK_DNRTMSG,
	NETLINK_KOBJECT_UEVENT,
	NETLINK_GENERIC,
	NETLINK_SCSITRANSPORT,
	NETLINK_ECRYPTFS,
	NETLINK_RDMA,
	NETLINK_CRYPTO,
	NETLINK_INET_DIAG
};


/* ---------- snd_seq_remove_mode ---------- */

#define SNDRV_SEQ_REMOVE_INPUT 1
#define SNDRV_SEQ_REMOVE_OUTPUT 2
#define SNDRV_SEQ_REMOVE_DEST 4
#define SNDRV_SEQ_REMOVE_DEST_CHANNEL 8
#define SNDRV_SEQ_REMOVE_TIME_BEFORE 16
#define SNDRV_SEQ_REMOVE_TIME_AFTER 32
#define SNDRV_SEQ_REMOVE_TIME_TICK 64
#define SNDRV_SEQ_REMOVE_EVENT_TYPE 128
#define SNDRV_SEQ_REMOVE_IGNORE_OFF 256
#define SNDRV_SEQ_REMOVE_TAG_MATCH 512


int snd_seq_remove_mode[] = {
	SNDRV_SEQ_REMOVE_INPUT,
	SNDRV_SEQ_REMOVE_OUTPUT,
	SNDRV_SEQ_REMOVE_DEST,
	SNDRV_SEQ_REMOVE_DEST_CHANNEL,
	SNDRV_SEQ_REMOVE_TIME_BEFORE,
	SNDRV_SEQ_REMOVE_TIME_AFTER,
	SNDRV_SEQ_REMOVE_TIME_TICK,
	SNDRV_SEQ_REMOVE_EVENT_TYPE,
	SNDRV_SEQ_REMOVE_IGNORE_OFF,
	SNDRV_SEQ_REMOVE_TAG_MATCH
};


/* ---------- mbind_mode ---------- */

#define MPOL_DEFAULT 0
#define MPOL_BIND 2
#define MPOL_INTERLEAVE 3
#define MPOL_PREFERRED 1
#define MPOL_F_STATIC_NODES 32768
#define MPOL_F_RELATIVE_NODES 16384


int mbind_mode[] = {
	MPOL_DEFAULT,
	MPOL_BIND,
	MPOL_INTERLEAVE,
	MPOL_PREFERRED,
	MPOL_F_STATIC_NODES,
	MPOL_F_RELATIVE_NODES
};


/* ---------- snd_seq_client_name ---------- */

#define "client0" Undefined in const file! Need to manually fill out !
#define "client1" Undefined in const file! Need to manually fill out !


char* snd_seq_client_name[] = {
	"client0",
	"client1"
};


/* ---------- sctp_spp_flags ---------- */

#define SPP_HB_ENABLE 1
#define SPP_HB_DISABLE 2
#define SPP_HB_DEMAND 4
#define SPP_HB_TIME_IS_ZERO 128
#define SPP_PMTUD_ENABLE 8
#define SPP_PMTUD_DISABLE 16
#define SPP_SACKDELAY_ENABLE 32
#define SPP_SACKDELAY_DISABLE 64


int sctp_spp_flags[] = {
	SPP_HB_ENABLE,
	SPP_HB_DISABLE,
	SPP_HB_DEMAND,
	SPP_HB_TIME_IS_ZERO,
	SPP_PMTUD_ENABLE,
	SPP_PMTUD_DISABLE,
	SPP_SACKDELAY_ENABLE,
	SPP_SACKDELAY_DISABLE
};


/* ---------- mknod_mode ---------- */

#define S_IFREG 32768
#define S_IFCHR 8192
#define S_IFBLK 24576
#define S_IFIFO 4096
#define S_IFSOCK 49152
#define S_IRUSR 256
#define S_IWUSR 128
#define S_IXUSR 64
#define S_IRGRP 32
#define S_IWGRP 16
#define S_IXGRP 8
#define S_IROTH 4
#define S_IWOTH 2
#define S_IXOTH 1


int mknod_mode[] = {
	S_IFREG,
	S_IFCHR,
	S_IFBLK,
	S_IFIFO,
	S_IFSOCK,
	S_IRUSR,
	S_IWUSR,
	S_IXUSR,
	S_IRGRP,
	S_IWGRP,
	S_IXGRP,
	S_IROTH,
	S_IWOTH,
	S_IXOTH
};


/* ---------- drm_lock_flags ---------- */

#define _DRM_LOCK_READY 1
#define _DRM_LOCK_QUIESCENT 2
#define _DRM_LOCK_FLUSH 4
#define _DRM_LOCK_FLUSH_ALL 8
#define _DRM_HALT_ALL_QUEUES 16
#define _DRM_HALT_CUR_QUEUES 32


int drm_lock_flags[] = {
	_DRM_LOCK_READY,
	_DRM_LOCK_QUIESCENT,
	_DRM_LOCK_FLUSH,
	_DRM_LOCK_FLUSH_ALL,
	_DRM_HALT_ALL_QUEUES,
	_DRM_HALT_CUR_QUEUES
};


/* ---------- msgget_flags ---------- */

#define IPC_CREAT 512
#define IPC_EXCL 1024
#define S_IRUSR 256
#define S_IWUSR 128
#define S_IXUSR 64
#define S_IRGRP 32
#define S_IWGRP 16
#define S_IXGRP 8
#define S_IROTH 4
#define S_IWOTH 2
#define S_IXOTH 1


int msgget_flags[] = {
	IPC_CREAT,
	IPC_EXCL,
	S_IRUSR,
	S_IWUSR,
	S_IXUSR,
	S_IRGRP,
	S_IWGRP,
	S_IXGRP,
	S_IROTH,
	S_IWOTH,
	S_IXOTH
};


/* ---------- salg_name ---------- */

#define "cmac(aes)" Undefined in const file! Need to manually fill out !
#define "ecb(aes)" Undefined in const file! Need to manually fill out !
#define "cbc(aes)" Undefined in const file! Need to manually fill out !
#define "hmac(sha1)" Undefined in const file! Need to manually fill out !
#define "pcbc(fcrypt)" Undefined in const file! Need to manually fill out !
#define "ghash" Undefined in const file! Need to manually fill out !
#define "jitterentropy_rng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "hmac(sha256)" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "stdrng" Undefined in const file! Need to manually fill out !
#define "842" Undefined in const file! Need to manually fill out !
#define "lz4hc" Undefined in const file! Need to manually fill out !
#define "lz4" Undefined in const file! Need to manually fill out !
#define "lzo" Undefined in const file! Need to manually fill out !
#define "crct10dif" Undefined in const file! Need to manually fill out !
#define "crc32" Undefined in const file! Need to manually fill out !
#define "crc32c" Undefined in const file! Need to manually fill out !
#define "michael_mic" Undefined in const file! Need to manually fill out !
#define "zlib" Undefined in const file! Need to manually fill out !
#define "deflate" Undefined in const file! Need to manually fill out !
#define "poly1305" Undefined in const file! Need to manually fill out !
#define "chacha20" Undefined in const file! Need to manually fill out !
#define "salsa20" Undefined in const file! Need to manually fill out !
#define "seed" Undefined in const file! Need to manually fill out !
#define "anubis" Undefined in const file! Need to manually fill out !
#define "khazad" Undefined in const file! Need to manually fill out !
#define "xeta" Undefined in const file! Need to manually fill out !
#define "xtea" Undefined in const file! Need to manually fill out !
#define "tea" Undefined in const file! Need to manually fill out !
#define "ecb(arc4)" Undefined in const file! Need to manually fill out !
#define "arc4" Undefined in const file! Need to manually fill out !
#define "cast6" Undefined in const file! Need to manually fill out !
#define "cast5" Undefined in const file! Need to manually fill out !
#define "camellia" Undefined in const file! Need to manually fill out !
#define "aes" Undefined in const file! Need to manually fill out !
#define "tnepres" Undefined in const file! Need to manually fill out !
#define "serpent" Undefined in const file! Need to manually fill out !
#define "twofish" Undefined in const file! Need to manually fill out !
#define "blowfish" Undefined in const file! Need to manually fill out !
#define "fcrypt" Undefined in const file! Need to manually fill out !
#define "des3_ede" Undefined in const file! Need to manually fill out !
#define "des" Undefined in const file! Need to manually fill out !
#define "tgr128" Undefined in const file! Need to manually fill out !
#define "tgr160" Undefined in const file! Need to manually fill out !
#define "tgr192" Undefined in const file! Need to manually fill out !
#define "wp256" Undefined in const file! Need to manually fill out !
#define "wp384" Undefined in const file! Need to manually fill out !
#define "wp512" Undefined in const file! Need to manually fill out !
#define "sha384" Undefined in const file! Need to manually fill out !
#define "sha512" Undefined in const file! Need to manually fill out !
#define "sha224" Undefined in const file! Need to manually fill out !
#define "sha256" Undefined in const file! Need to manually fill out !
#define "sha1" Undefined in const file! Need to manually fill out !
#define "rmd320" Undefined in const file! Need to manually fill out !
#define "rmd256" Undefined in const file! Need to manually fill out !
#define "rmd160" Undefined in const file! Need to manually fill out !
#define "rmd128" Undefined in const file! Need to manually fill out !
#define "md5" Undefined in const file! Need to manually fill out !
#define "md4" Undefined in const file! Need to manually fill out !
#define "digest_null" Undefined in const file! Need to manually fill out !
#define "compress_null" Undefined in const file! Need to manually fill out !
#define "ecb(cipher_null)" Undefined in const file! Need to manually fill out !
#define "cipher_null" Undefined in const file! Need to manually fill out !
#define "rsa" Undefined in const file! Need to manually fill out !
#define "poly1305" Undefined in const file! Need to manually fill out !
#define "xts(serpent)" Undefined in const file! Need to manually fill out !
#define "lrw(serpent)" Undefined in const file! Need to manually fill out !
#define "ctr(serpent)" Undefined in const file! Need to manually fill out !
#define "cbc(serpent)" Undefined in const file! Need to manually fill out !
#define "__ecb-serpent-sse2" Undefined in const file! Need to manually fill out !
#define "ecb(serpent)" Undefined in const file! Need to manually fill out !
#define "__xts-serpent-sse2" Undefined in const file! Need to manually fill out !
#define "__lrw-serpent-sse2" Undefined in const file! Need to manually fill out !
#define "__ctr-serpent-sse2" Undefined in const file! Need to manually fill out !
#define "__cbc-serpent-sse2" Undefined in const file! Need to manually fill out !
#define "__ecb-serpent-sse2" Undefined in const file! Need to manually fill out !
#define "salsa20" Undefined in const file! Need to manually fill out !
#define "xts(twofish)" Undefined in const file! Need to manually fill out !
#define "lrw(twofish)" Undefined in const file! Need to manually fill out !
#define "ctr(twofish)" Undefined in const file! Need to manually fill out !
#define "cbc(twofish)" Undefined in const file! Need to manually fill out !
#define "ecb(twofish)" Undefined in const file! Need to manually fill out !
#define "twofish" Undefined in const file! Need to manually fill out !
#define "ctr(blowfish)" Undefined in const file! Need to manually fill out !
#define "cbc(blowfish)" Undefined in const file! Need to manually fill out !
#define "ecb(blowfish)" Undefined in const file! Need to manually fill out !
#define "blowfish" Undefined in const file! Need to manually fill out !
#define "xts(camellia)" Undefined in const file! Need to manually fill out !
#define "lrw(camellia)" Undefined in const file! Need to manually fill out !
#define "ctr(camellia)" Undefined in const file! Need to manually fill out !
#define "cbc(camellia)" Undefined in const file! Need to manually fill out !
#define "ecb(camellia)" Undefined in const file! Need to manually fill out !
#define "camellia" Undefined in const file! Need to manually fill out !
#define "ctr(des3_ede)" Undefined in const file! Need to manually fill out !
#define "cbc(des3_ede)" Undefined in const file! Need to manually fill out !
#define "ecb(des3_ede)" Undefined in const file! Need to manually fill out !
#define "des3_ede" Undefined in const file! Need to manually fill out !
#define "aes" Undefined in const file! Need to manually fill out !


char* salg_name[] = {
	"cmac(aes)",
	"ecb(aes)",
	"cbc(aes)",
	"hmac(sha1)",
	"pcbc(fcrypt)",
	"ghash",
	"jitterentropy_rng",
	"stdrng",
	"stdrng",
	"stdrng",
	"stdrng",
	"hmac(sha256)",
	"stdrng",
	"stdrng",
	"stdrng",
	"stdrng",
	"stdrng",
	"842",
	"lz4hc",
	"lz4",
	"lzo",
	"crct10dif",
	"crc32",
	"crc32c",
	"michael_mic",
	"zlib",
	"deflate",
	"poly1305",
	"chacha20",
	"salsa20",
	"seed",
	"anubis",
	"khazad",
	"xeta",
	"xtea",
	"tea",
	"ecb(arc4)",
	"arc4",
	"cast6",
	"cast5",
	"camellia",
	"aes",
	"tnepres",
	"serpent",
	"twofish",
	"blowfish",
	"fcrypt",
	"des3_ede",
	"des",
	"tgr128",
	"tgr160",
	"tgr192",
	"wp256",
	"wp384",
	"wp512",
	"sha384",
	"sha512",
	"sha224",
	"sha256",
	"sha1",
	"rmd320",
	"rmd256",
	"rmd160",
	"rmd128",
	"md5",
	"md4",
	"digest_null",
	"compress_null",
	"ecb(cipher_null)",
	"cipher_null",
	"rsa",
	"poly1305",
	"xts(serpent)",
	"lrw(serpent)",
	"ctr(serpent)",
	"cbc(serpent)",
	"__ecb-serpent-sse2",
	"ecb(serpent)",
	"__xts-serpent-sse2",
	"__lrw-serpent-sse2",
	"__ctr-serpent-sse2",
	"__cbc-serpent-sse2",
	"__ecb-serpent-sse2",
	"salsa20",
	"xts(twofish)",
	"lrw(twofish)",
	"ctr(twofish)",
	"cbc(twofish)",
	"ecb(twofish)",
	"twofish",
	"ctr(blowfish)",
	"cbc(blowfish)",
	"ecb(blowfish)",
	"blowfish",
	"xts(camellia)",
	"lrw(camellia)",
	"ctr(camellia)",
	"cbc(camellia)",
	"ecb(camellia)",
	"camellia",
	"ctr(des3_ede)",
	"cbc(des3_ede)",
	"ecb(des3_ede)",
	"des3_ede",
	"aes"
};


/* ---------- fcntl_dupfd ---------- */

#define F_DUPFD 0
#define F_DUPFD_CLOEXEC 1030


int fcntl_dupfd[] = {
	F_DUPFD,
	F_DUPFD_CLOEXEC
};


/* ---------- rt_flags ---------- */

#define RTF_UP 1
#define RTF_GATEWAY 2
#define RTF_HOST 4
#define RTF_REINSTATE 8
#define RTF_DYNAMIC 16
#define RTF_MODIFIED 32
#define RTF_MTU 64
#define RTF_WINDOW 128
#define RTF_IRTT 256
#define RTF_REJECT 512


int rt_flags[] = {
	RTF_UP,
	RTF_GATEWAY,
	RTF_HOST,
	RTF_REINSTATE,
	RTF_DYNAMIC,
	RTF_MODIFIED,
	RTF_MTU,
	RTF_WINDOW,
	RTF_IRTT,
	RTF_REJECT
};


/* ---------- uffdio_register_mode ---------- */

#define UFFDIO_REGISTER_MODE_MISSING 1
#define UFFDIO_REGISTER_MODE_WP 2


int uffdio_register_mode[] = {
	UFFDIO_REGISTER_MODE_MISSING,
	UFFDIO_REGISTER_MODE_WP
};


/* ---------- snd_seq_client_type ---------- */

#define NO_CLIENT 0
#define USER_CLIENT 1
#define KERNEL_CLIENT 2


int snd_seq_client_type[] = {
	NO_CLIENT,
	USER_CLIENT,
	KERNEL_CLIENT
};


/* ---------- ioctl_int_out ---------- */

#define FIOQSIZE 21600
#define FIGETBSZ 2


int ioctl_int_out[] = {
	FIOQSIZE,
	FIGETBSZ
};


/* ---------- open_flags ---------- */

#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
#define O_APPEND 1024
#define FASYNC 8192
#define O_CLOEXEC 524288
#define O_CREAT 64
#define O_DIRECT 65536
#define O_DIRECTORY 16384
#define O_EXCL 128
#define O_LARGEFILE 131072
#define O_NOATIME 262144
#define O_NOCTTY 256
#define O_NOFOLLOW 32768
#define O_NONBLOCK 2048
#define O_PATH 2097152
#define O_SYNC 1052672
#define O_TRUNC 512
#define __O_TMPFILE 4194304


int open_flags[] = {
	O_RDONLY,
	O_WRONLY,
	O_RDWR,
	O_APPEND,
	FASYNC,
	O_CLOEXEC,
	O_CREAT,
	O_DIRECT,
	O_DIRECTORY,
	O_EXCL,
	O_LARGEFILE,
	O_NOATIME,
	O_NOCTTY,
	O_NOFOLLOW,
	O_NONBLOCK,
	O_PATH,
	O_SYNC,
	O_TRUNC,
	__O_TMPFILE
};


/* ---------- snd_ctl_iface ---------- */

#define SNDRV_CTL_ELEM_IFACE_CARD 0
#define SNDRV_CTL_ELEM_IFACE_HWDEP 1
#define SNDRV_CTL_ELEM_IFACE_MIXER 2
#define SNDRV_CTL_ELEM_IFACE_PCM 3
#define SNDRV_CTL_ELEM_IFACE_RAWMIDI 4
#define SNDRV_CTL_ELEM_IFACE_TIMER 5
#define SNDRV_CTL_ELEM_IFACE_SEQUENCER 6


int snd_ctl_iface[] = {
	SNDRV_CTL_ELEM_IFACE_CARD,
	SNDRV_CTL_ELEM_IFACE_HWDEP,
	SNDRV_CTL_ELEM_IFACE_MIXER,
	SNDRV_CTL_ELEM_IFACE_PCM,
	SNDRV_CTL_ELEM_IFACE_RAWMIDI,
	SNDRV_CTL_ELEM_IFACE_TIMER,
	SNDRV_CTL_ELEM_IFACE_SEQUENCER
};


/* ---------- ipv6_types ---------- */

#define IPPROTO_IP 0
#define IPPROTO_ICMP 1
#define IPPROTO_IGMP 2
#define IPPROTO_IPIP 4
#define IPPROTO_TCP 6
#define IPPROTO_EGP 8
#define IPPROTO_PUP 12
#define IPPROTO_UDP 17
#define IPPROTO_IDP 22
#define IPPROTO_TP 29
#define IPPROTO_DCCP 33
#define IPPROTO_IPV6 41
#define IPPROTO_RSVP 46
#define IPPROTO_GRE 47
#define IPPROTO_ESP 50
#define IPPROTO_AH 51
#define IPPROTO_MTP 92
#define IPPROTO_BEETPH 94
#define IPPROTO_ENCAP 98
#define IPPROTO_PIM 103
#define IPPROTO_COMP 108
#define IPPROTO_SCTP 132
#define IPPROTO_UDPLITE 136
#define IPPROTO_MPLS 137
#define IPPROTO_RAW 255
#define IPPROTO_HOPOPTS 0
#define IPPROTO_ROUTING 43
#define IPPROTO_FRAGMENT 44
#define IPPROTO_ICMPV6 58
#define IPPROTO_NONE 59
#define IPPROTO_DSTOPTS 60
#define IPPROTO_MH 135
#define NEXTHDR_HOP 0
#define NEXTHDR_TCP 6
#define NEXTHDR_UDP 17
#define NEXTHDR_IPV6 41
#define NEXTHDR_ROUTING 43
#define NEXTHDR_FRAGMENT 44
#define NEXTHDR_GRE 47
#define NEXTHDR_ESP 50
#define NEXTHDR_AUTH 51
#define NEXTHDR_ICMP 58
#define NEXTHDR_NONE 59
#define NEXTHDR_DEST 60
#define NEXTHDR_SCTP 132
#define NEXTHDR_MOBILITY 135


int ipv6_types[] = {
	IPPROTO_IP,
	IPPROTO_ICMP,
	IPPROTO_IGMP,
	IPPROTO_IPIP,
	IPPROTO_TCP,
	IPPROTO_EGP,
	IPPROTO_PUP,
	IPPROTO_UDP,
	IPPROTO_IDP,
	IPPROTO_TP,
	IPPROTO_DCCP,
	IPPROTO_IPV6,
	IPPROTO_RSVP,
	IPPROTO_GRE,
	IPPROTO_ESP,
	IPPROTO_AH,
	IPPROTO_MTP,
	IPPROTO_BEETPH,
	IPPROTO_ENCAP,
	IPPROTO_PIM,
	IPPROTO_COMP,
	IPPROTO_SCTP,
	IPPROTO_UDPLITE,
	IPPROTO_MPLS,
	IPPROTO_RAW,
	IPPROTO_HOPOPTS,
	IPPROTO_ROUTING,
	IPPROTO_FRAGMENT,
	IPPROTO_ICMPV6,
	IPPROTO_NONE,
	IPPROTO_DSTOPTS,
	IPPROTO_MH,
	NEXTHDR_HOP,
	NEXTHDR_TCP,
	NEXTHDR_UDP,
	NEXTHDR_IPV6,
	NEXTHDR_ROUTING,
	NEXTHDR_FRAGMENT,
	NEXTHDR_GRE,
	NEXTHDR_ESP,
	NEXTHDR_AUTH,
	NEXTHDR_ICMP,
	NEXTHDR_NONE,
	NEXTHDR_DEST,
	NEXTHDR_SCTP,
	NEXTHDR_MOBILITY
};


/* ---------- kvm_mem_slots ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 3 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 5 Undefined in const file! Need to manually fill out !
#define 509 Undefined in const file! Need to manually fill out !
#define 510 Undefined in const file! Need to manually fill out !
#define 511 Undefined in const file! Need to manually fill out !
#define 10000 Undefined in const file! Need to manually fill out !
#define 65536 Undefined in const file! Need to manually fill out !
#define 65537 Undefined in const file! Need to manually fill out !
#define 65538 Undefined in const file! Need to manually fill out !
#define 65539 Undefined in const file! Need to manually fill out !
#define 65540 Undefined in const file! Need to manually fill out !
#define 66047 Undefined in const file! Need to manually fill out !
#define 66048 Undefined in const file! Need to manually fill out !
#define 66049 Undefined in const file! Need to manually fill out !


int kvm_mem_slots[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	509,
	510,
	511,
	10000,
	65536,
	65537,
	65538,
	65539,
	65540,
	66047,
	66048,
	66049
};


/* ---------- renameat2_flags ---------- */

#define RENAME_EXCHANGE 2
#define RENAME_NOREPLACE 1
#define RENAME_WHITEOUT 4


int renameat2_flags[] = {
	RENAME_EXCHANGE,
	RENAME_NOREPLACE,
	RENAME_WHITEOUT
};


/* ---------- icmp_option_types_buf ---------- */

#define ICMP_FILTER 1


int icmp_option_types_buf[] = {
	ICMP_FILTER
};


/* ---------- sap_values ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define LLC_SAP_NULL 0
#define LLC_SAP_LLC 2
#define LLC_SAP_SNA 4
#define LLC_SAP_PNM 14
#define LLC_SAP_IP 6
#define LLC_SAP_BSPAN 66
#define LLC_SAP_MMS 78
#define LLC_SAP_8208 126
#define LLC_SAP_3COM 128
#define LLC_SAP_PRO 142
#define LLC_SAP_SNAP 170
#define LLC_SAP_BANYAN 188
#define LLC_SAP_IPX 224
#define LLC_SAP_NETBEUI 240
#define LLC_SAP_LANMGR 244
#define LLC_SAP_IMPL 248
#define LLC_SAP_DISC 252
#define LLC_SAP_OSI 254
#define LLC_SAP_LAR 220
#define LLC_SAP_RM 212
#define LLC_SAP_GLOBAL 255


int sap_values[] = {
	1,
	LLC_SAP_NULL,
	LLC_SAP_LLC,
	LLC_SAP_SNA,
	LLC_SAP_PNM,
	LLC_SAP_IP,
	LLC_SAP_BSPAN,
	LLC_SAP_MMS,
	LLC_SAP_8208,
	LLC_SAP_3COM,
	LLC_SAP_PRO,
	LLC_SAP_SNAP,
	LLC_SAP_BANYAN,
	LLC_SAP_IPX,
	LLC_SAP_NETBEUI,
	LLC_SAP_LANMGR,
	LLC_SAP_IMPL,
	LLC_SAP_DISC,
	LLC_SAP_OSI,
	LLC_SAP_LAR,
	LLC_SAP_RM,
	LLC_SAP_GLOBAL
};


/* ---------- bt_rfcomm_type ---------- */

#define SOCK_STREAM 1
#define SOCK_RAW 3


int bt_rfcomm_type[] = {
	SOCK_STREAM,
	SOCK_RAW
};


/* ---------- umount_flags ---------- */

#define MNT_FORCE 1
#define MNT_DETACH 2
#define MNT_EXPIRE 4
#define UMOUNT_NOFOLLOW 8


int umount_flags[] = {
	MNT_FORCE,
	MNT_DETACH,
	MNT_EXPIRE,
	UMOUNT_NOFOLLOW
};


/* ---------- waitid_which ---------- */

#define P_PID 1
#define P_PGID 2
#define P_ALL 0


int waitid_which[] = {
	P_PID,
	P_PGID,
	P_ALL
};


/* ---------- mlockall_flags ---------- */

#define MCL_CURRENT 1
#define MCL_FUTURE 2


int mlockall_flags[] = {
	MCL_CURRENT,
	MCL_FUTURE
};


/* ---------- kvm_mce_status ---------- */

#define MCI_STATUS_VAL 9223372036854775808
#define MCI_STATUS_OVER 4611686018427387904
#define MCI_STATUS_UC 2305843009213693952
#define MCI_STATUS_EN 1152921504606846976
#define MCI_STATUS_MISCV 576460752303423488
#define MCI_STATUS_ADDRV 288230376151711744
#define MCI_STATUS_PCC 144115188075855872
#define MCI_STATUS_S 72057594037927936
#define MCI_STATUS_AR 36028797018963968


int kvm_mce_status[] = {
	MCI_STATUS_VAL,
	MCI_STATUS_OVER,
	MCI_STATUS_UC,
	MCI_STATUS_EN,
	MCI_STATUS_MISCV,
	MCI_STATUS_ADDRV,
	MCI_STATUS_PCC,
	MCI_STATUS_S,
	MCI_STATUS_AR
};


/* ---------- move_pages_flags ---------- */

#define MPOL_MF_MOVE 2
#define MPOL_MF_MOVE_ALL 4


int move_pages_flags[] = {
	MPOL_MF_MOVE,
	MPOL_MF_MOVE_ALL
};


/* ---------- keyring_type ---------- */

#define KEY_SPEC_THREAD_KEYRING 18446744073709551615
#define KEY_SPEC_PROCESS_KEYRING 18446744073709551614
#define KEY_SPEC_SESSION_KEYRING 18446744073709551613
#define KEY_SPEC_USER_KEYRING 18446744073709551612
#define KEY_SPEC_USER_SESSION_KEYRING 18446744073709551611
#define KEY_SPEC_GROUP_KEYRING 18446744073709551610
#define KEY_SPEC_REQKEY_AUTH_KEY 18446744073709551609
#define KEY_SPEC_REQUESTOR_KEYRING 18446744073709551608


int keyring_type[] = {
	KEY_SPEC_THREAD_KEYRING,
	KEY_SPEC_PROCESS_KEYRING,
	KEY_SPEC_SESSION_KEYRING,
	KEY_SPEC_USER_KEYRING,
	KEY_SPEC_USER_SESSION_KEYRING,
	KEY_SPEC_GROUP_KEYRING,
	KEY_SPEC_REQKEY_AUTH_KEY,
	KEY_SPEC_REQUESTOR_KEYRING
};


/* ---------- shmget_flags ---------- */

#define IPC_CREAT 512
#define IPC_EXCL 1024
#define SHM_HUGETLB 2048
#define SHM_HUGE_2MB 1409286144
#define SHM_HUGE_1GB 2013265920
#define SHM_NORESERVE 4096
#define S_IRUSR 256
#define S_IWUSR 128
#define S_IXUSR 64
#define S_IRGRP 32
#define S_IWGRP 16
#define S_IXGRP 8
#define S_IROTH 4
#define S_IWOTH 2
#define S_IXOTH 1


int shmget_flags[] = {
	IPC_CREAT,
	IPC_EXCL,
	SHM_HUGETLB,
	SHM_HUGE_2MB,
	SHM_HUGE_1GB,
	SHM_NORESERVE,
	S_IRUSR,
	S_IWUSR,
	S_IXUSR,
	S_IRGRP,
	S_IWGRP,
	S_IXGRP,
	S_IROTH,
	S_IWOTH,
	S_IXOTH
};


/* ---------- pthread_regset ---------- */

#define NT_PRSTATUS 1
#define NT_PRFPREG 2
#define NT_PRPSINFO 3
#define NT_TASKSTRUCT 4
#define NT_AUXV 6
#define NT_386_TLS 512
#define NT_386_IOPERM 513
#define NT_X86_XSTATE 514


int pthread_regset[] = {
	NT_PRSTATUS,
	NT_PRFPREG,
	NT_PRPSINFO,
	NT_TASKSTRUCT,
	NT_AUXV,
	NT_386_TLS,
	NT_386_IOPERM,
	NT_X86_XSTATE
};


/* ---------- futex_op ---------- */

#define FUTEX_WAIT 0
#define FUTEX_WAIT_BITSET 9
#define FUTEX_WAKE 1
#define FUTEX_REQUEUE 3
#define FUTEX_CMP_REQUEUE 4


int futex_op[] = {
	FUTEX_WAIT,
	FUTEX_WAIT_BITSET,
	FUTEX_WAKE,
	FUTEX_REQUEUE,
	FUTEX_CMP_REQUEUE
};


/* ---------- epoll_flags ---------- */

#define EPOLL_CLOEXEC 524288


int epoll_flags[] = {
	EPOLL_CLOEXEC
};


/* ---------- fuse_mode ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define S_IFREG 32768
#define S_IFCHR 8192
#define S_IFBLK 24576
#define S_IFIFO 4096
#define S_IFSOCK 49152
#define S_IFLNK 40960
#define S_IFDIR 16384


int fuse_mode[] = {
	1,
	2,
	S_IFREG,
	S_IFCHR,
	S_IFBLK,
	S_IFIFO,
	S_IFSOCK,
	S_IFLNK,
	S_IFDIR
};


/* ---------- inotify_flags ---------- */

#define IN_NONBLOCK 2048
#define IN_CLOEXEC 524288


int inotify_flags[] = {
	IN_NONBLOCK,
	IN_CLOEXEC
};


/* ---------- perf_read_format ---------- */

#define PERF_FORMAT_TOTAL_TIME_ENABLED 1
#define PERF_FORMAT_TOTAL_TIME_RUNNING 2
#define PERF_FORMAT_ID 4
#define PERF_FORMAT_GROUP 8


int perf_read_format[] = {
	PERF_FORMAT_TOTAL_TIME_ENABLED,
	PERF_FORMAT_TOTAL_TIME_RUNNING,
	PERF_FORMAT_ID,
	PERF_FORMAT_GROUP
};


/* ---------- madvise_flags ---------- */

#define MADV_NORMAL 0
#define MADV_RANDOM 1
#define MADV_SEQUENTIAL 2
#define MADV_WILLNEED 3
#define MADV_DONTNEED 4
#define MADV_REMOVE 9
#define MADV_DONTFORK 10
#define MADV_DOFORK 11
#define MADV_HWPOISON 100
#define MADV_SOFT_OFFLINE 101
#define MADV_MERGEABLE 12
#define MADV_UNMERGEABLE 13
#define MADV_HUGEPAGE 14
#define MADV_NOHUGEPAGE 15
#define MADV_DONTDUMP 16
#define MADV_DODUMP 17


int madvise_flags[] = {
	MADV_NORMAL,
	MADV_RANDOM,
	MADV_SEQUENTIAL,
	MADV_WILLNEED,
	MADV_DONTNEED,
	MADV_REMOVE,
	MADV_DONTFORK,
	MADV_DOFORK,
	MADV_HWPOISON,
	MADV_SOFT_OFFLINE,
	MADV_MERGEABLE,
	MADV_UNMERGEABLE,
	MADV_HUGEPAGE,
	MADV_NOHUGEPAGE,
	MADV_DONTDUMP,
	MADV_DODUMP
};


/* ---------- dup_flags ---------- */

#define O_CLOEXEC 524288


int dup_flags[] = {
	O_CLOEXEC
};


/* ---------- semget_flags ---------- */

#define IPC_CREAT 512
#define IPC_EXCL 1024
#define S_IRUSR 256
#define S_IWUSR 128
#define S_IXUSR 64
#define S_IRGRP 32
#define S_IWGRP 16
#define S_IXGRP 8
#define S_IROTH 4
#define S_IWOTH 2
#define S_IXOTH 1


int semget_flags[] = {
	IPC_CREAT,
	IPC_EXCL,
	S_IRUSR,
	S_IWUSR,
	S_IXUSR,
	S_IRGRP,
	S_IWGRP,
	S_IXGRP,
	S_IROTH,
	S_IWOTH,
	S_IXOTH
};


/* ---------- epoll_ev ---------- */

#define POLLIN 1
#define POLLOUT 4
#define POLLRDHUP 8192
#define POLLPRI 2
#define POLLERR 8
#define POLLHUP 16
#define EPOLLET 18446744071562067968
#define EPOLLONESHOT 1073741824
#define EPOLLEXCLUSIVE 268435456
#define EPOLLWAKEUP 536870912


int epoll_ev[] = {
	 POLLIN,
	POLLOUT,
	POLLRDHUP,
	POLLPRI,
	POLLERR,
	POLLHUP,
	EPOLLET,
	EPOLLONESHOT,
	EPOLLEXCLUSIVE,
	EPOLLWAKEUP
};


/* ---------- flr_flags ---------- */

#define IPV6_FL_F_CREATE 1
#define IPV6_FL_F_EXCL 2
#define IPV6_FL_F_REFLECT 4
#define IPV6_FL_F_REMOTE 8


int flr_flags[] = {
	IPV6_FL_F_CREATE,
	IPV6_FL_F_EXCL,
	IPV6_FL_F_REFLECT,
	IPV6_FL_F_REMOTE
};


/* ---------- ipv6_tlv_option_types ---------- */

#define IPV6_TLV_PAD1 0
#define IPV6_TLV_PADN 1
#define IPV6_TLV_ROUTERALERT 5
#define IPV6_TLV_CALIPSO 7
#define IPV6_TLV_JUMBO 194
#define IPV6_TLV_HAO 201
#define 0xff Undefined in const file! Need to manually fill out !
#define 0xfe Undefined in const file! Need to manually fill out !


int ipv6_tlv_option_types[] = {
	IPV6_TLV_PAD1,
	IPV6_TLV_PADN,
	IPV6_TLV_ROUTERALERT,
	IPV6_TLV_CALIPSO,
	IPV6_TLV_JUMBO,
	IPV6_TLV_HAO,
	0xff,
	0xfe
};


/* ---------- ioprio_which_pid ---------- */

#define IOPRIO_WHO_PROCESS 1
#define IOPRIO_WHO_PGRP 2


int ioprio_which_pid[] = {
	IOPRIO_WHO_PROCESS,
	IOPRIO_WHO_PGRP
};


/* ---------- bt_hci_ioctl ---------- */

#define HCIDEVUP 1074022601
#define HCIDEVDOWN 1074022602
#define HCIDEVRESET 1074022603
#define HCIDEVRESTAT 1074022604
#define HCIGETDEVLIST 2147764434
#define HCIGETDEVINFO 2147764435
#define HCIGETCONNLIST 2147764436
#define HCIGETCONNINFO 2147764437
#define HCIGETAUTHINFO 2147764439
#define HCISETRAW 1074022620
#define HCISETSCAN 1074022621
#define HCISETAUTH 1074022622
#define HCISETENCRYPT 1074022623
#define HCISETPTYPE 1074022624
#define HCISETLINKPOL 1074022625
#define HCISETLINKMODE 1074022626
#define HCISETACLMTU 1074022627
#define HCISETSCOMTU 1074022628
#define HCIBLOCKADDR 1074022630
#define HCIUNBLOCKADDR 1074022631
#define HCIINQUIRY 2147764464


int bt_hci_ioctl[] = {
	HCIDEVUP,
	HCIDEVDOWN,
	HCIDEVRESET,
	HCIDEVRESTAT,
	HCIGETDEVLIST,
	HCIGETDEVINFO,
	HCIGETCONNLIST,
	HCIGETCONNINFO,
	HCIGETAUTHINFO,
	HCISETRAW,
	HCISETSCAN,
	HCISETAUTH,
	HCISETENCRYPT,
	HCISETPTYPE,
	HCISETLINKPOL,
	HCISETLINKMODE,
	HCISETACLMTU,
	HCISETSCOMTU,
	HCIBLOCKADDR,
	HCIUNBLOCKADDR,
	HCIINQUIRY
};


/* ---------- kvm_cpu_caps ---------- */

#define KVM_CAP_HYPERV_SYNIC 123


int kvm_cpu_caps[] = {
	KVM_CAP_HYPERV_SYNIC
};


/* ---------- tcp_option_types_int ---------- */

#define TCP_NODELAY 1
#define TCP_MAXSEG 2
#define TCP_CORK 3
#define TCP_KEEPIDLE 4
#define TCP_KEEPINTVL 5
#define TCP_KEEPCNT 6
#define TCP_SYNCNT 7
#define TCP_LINGER2 8
#define TCP_DEFER_ACCEPT 9
#define TCP_WINDOW_CLAMP 10
#define TCP_QUICKACK 12
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define TCP_THIN_DUPACK 17
#define TCP_USER_TIMEOUT 18
#define TCP_REPAIR 19
#define TCP_REPAIR_QUEUE 20
#define TCP_QUEUE_SEQ 21
#define TCP_FASTOPEN 23
#define TCP_TIMESTAMP 24
#define TCP_NOTSENT_LOWAT 25
#define TCP_SAVE_SYN 27


int tcp_option_types_int[] = {
	TCP_NODELAY,
	TCP_MAXSEG,
	TCP_CORK,
	TCP_KEEPIDLE,
	TCP_KEEPINTVL,
	TCP_KEEPCNT,
	TCP_SYNCNT,
	TCP_LINGER2,
	TCP_DEFER_ACCEPT,
	TCP_WINDOW_CLAMP,
	TCP_QUICKACK,
	TCP_THIN_LINEAR_TIMEOUTS,
	TCP_THIN_DUPACK,
	TCP_USER_TIMEOUT,
	TCP_REPAIR,
	TCP_REPAIR_QUEUE,
	TCP_QUEUE_SEQ,
	TCP_FASTOPEN,
	TCP_TIMESTAMP,
	TCP_NOTSENT_LOWAT,
	TCP_SAVE_SYN
};


/* ---------- perf_bp_type ---------- */

#define HW_BREAKPOINT_EMPTY 0
#define HW_BREAKPOINT_R 1
#define HW_BREAKPOINT_W 2
#define HW_BREAKPOINT_X 4


int perf_bp_type[] = {
	HW_BREAKPOINT_EMPTY,
	HW_BREAKPOINT_R,
	HW_BREAKPOINT_W,
	HW_BREAKPOINT_X
};


/* ---------- sync_file_flags ---------- */

#define SYNC_FILE_RANGE_WAIT_BEFORE 1
#define SYNC_FILE_RANGE_WRITE 2
#define SYNC_FILE_RANGE_WAIT_AFTER 4


int sync_file_flags[] = {
	SYNC_FILE_RANGE_WAIT_BEFORE,
	SYNC_FILE_RANGE_WRITE,
	SYNC_FILE_RANGE_WAIT_AFTER
};


/* ---------- syz_bf_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !


int syz_bf_flags[] = {
	0,
	1,
	2
};


/* ---------- wait_options ---------- */

#define WNOHANG 1
#define WUNTRACED 2
#define WCONTINUED 8
#define WEXITED 4
#define WSTOPPED 2
#define WCONTINUED 8
#define WNOHANG 1
#define WNOWAIT 16777216
#define __WCLONE 2147483648
#define __WALL 1073741824
#define __WNOTHREAD 536870912


int wait_options[] = {
	WNOHANG,
	WUNTRACED,
	WCONTINUED,
	WEXITED,
	WSTOPPED,
	WCONTINUED,
	WNOHANG,
	WNOWAIT,
	__WCLONE,
	__WALL,
	__WNOTHREAD
};


/* ---------- ioctl_int_in ---------- */

#define FIONBIO 21537
#define FIOASYNC 21586


int ioctl_int_in[] = {
	FIONBIO,
	FIOASYNC
};


/* ---------- fallocate_mode ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define FALLOC_FL_KEEP_SIZE 1
#define FALLOC_FL_PUNCH_HOLE 2


int fallocate_mode[] = {
	0,
	FALLOC_FL_KEEP_SIZE,
	FALLOC_FL_PUNCH_HOLE
};


/* ---------- netlink_sockopts ---------- */

#define NETLINK_ADD_MEMBERSHIP 1
#define NETLINK_DROP_MEMBERSHIP 2
#define NETLINK_PKTINFO 3
#define NETLINK_BROADCAST_ERROR 4
#define NETLINK_NO_ENOBUFS 5
#define NETLINK_RX_RING 6
#define NETLINK_TX_RING 7
#define NETLINK_LISTEN_ALL_NSID 8
#define NETLINK_LIST_MEMBERSHIPS 9
#define NETLINK_CAP_ACK 10


int netlink_sockopts[] = {
	NETLINK_ADD_MEMBERSHIP,
	NETLINK_DROP_MEMBERSHIP,
	NETLINK_PKTINFO,
	NETLINK_BROADCAST_ERROR,
	NETLINK_NO_ENOBUFS,
	NETLINK_RX_RING,
	NETLINK_TX_RING,
	NETLINK_LISTEN_ALL_NSID,
	NETLINK_LIST_MEMBERSHIPS,
	NETLINK_CAP_ACK
};


/* ---------- ipv4_option_types ---------- */

#define IPOPT_END 0
#define IPOPT_NOOP 1
#define IPOPT_SEC 130
#define IPOPT_LSRR 131
#define IPOPT_TIMESTAMP 68
#define IPOPT_CIPSO 134
#define IPOPT_RR 7
#define IPOPT_SID 136
#define IPOPT_SSRR 137
#define IPOPT_RA 148


int ipv4_option_types[] = {
	IPOPT_END,
	IPOPT_NOOP,
	IPOPT_SEC,
	IPOPT_LSRR,
	IPOPT_TIMESTAMP,
	IPOPT_CIPSO,
	IPOPT_RR,
	IPOPT_SID,
	IPOPT_SSRR,
	IPOPT_RA
};


/* ---------- uffdio_features ---------- */

#define UFFD_FEATURE_PAGEFAULT_FLAG_WP 1
#define UFFD_FEATURE_EVENT_FORK 2
#define UFFD_FEATURE_EVENT_REMAP 4
#define UFFD_FEATURE_EVENT_REMOVE 8
#define UFFD_FEATURE_MISSING_HUGETLBFS 16
#define UFFD_FEATURE_MISSING_SHMEM 32
#define UFFD_FEATURE_EVENT_UNMAP 64


int uffdio_features[] = {
	UFFD_FEATURE_PAGEFAULT_FLAG_WP,
	UFFD_FEATURE_EVENT_FORK,
	UFFD_FEATURE_EVENT_REMAP,
	UFFD_FEATURE_EVENT_REMOVE,
	UFFD_FEATURE_MISSING_HUGETLBFS,
	UFFD_FEATURE_MISSING_SHMEM,
	UFFD_FEATURE_EVENT_UNMAP
};


/* ---------- fiemap_flags ---------- */

#define FIEMAP_FLAG_SYNC 1
#define FIEMAP_FLAG_XATTR 2
#define FIEMAP_FLAG_CACHE 4


int fiemap_flags[] = {
	FIEMAP_FLAG_SYNC,
	FIEMAP_FLAG_XATTR,
	FIEMAP_FLAG_CACHE
};


/* ---------- ptrace_req_peek ---------- */

#define PTRACE_PEEKTEXT 1
#define PTRACE_PEEKDATA 2


int ptrace_req_peek[] = {
	PTRACE_PEEKTEXT,
	PTRACE_PEEKDATA
};


/* ---------- syslog_cmd ---------- */

#define SYSLOG_ACTION_CLOSE 0
#define SYSLOG_ACTION_OPEN 1
#define SYSLOG_ACTION_READ 2
#define SYSLOG_ACTION_READ_ALL 3
#define SYSLOG_ACTION_READ_CLEAR 4
#define SYSLOG_ACTION_CLEAR 5
#define SYSLOG_ACTION_CONSOLE_ON 7
#define SYSLOG_ACTION_CONSOLE_OFF 6
#define SYSLOG_ACTION_SIZE_UNREAD 9
#define SYSLOG_ACTION_SIZE_BUFFER 10


int syslog_cmd[] = {
	SYSLOG_ACTION_CLOSE,
	SYSLOG_ACTION_OPEN,
	SYSLOG_ACTION_READ,
	SYSLOG_ACTION_READ_ALL,
	SYSLOG_ACTION_READ_CLEAR,
	SYSLOG_ACTION_CLEAR,
	SYSLOG_ACTION_CONSOLE_ON,
	SYSLOG_ACTION_CONSOLE_OFF,
	SYSLOG_ACTION_SIZE_UNREAD,
	SYSLOG_ACTION_SIZE_BUFFER
};


/* ---------- ipv4_option_timestamp_flags ---------- */

#define IPOPT_TS_TSONLY 0
#define IPOPT_TS_TSANDADDR 1
#define IPOPT_TS_PRESPEC 3


int ipv4_option_timestamp_flags[] = {
	IPOPT_TS_TSONLY,
	IPOPT_TS_TSANDADDR,
	IPOPT_TS_PRESPEC
};


/* ---------- priority_which ---------- */

#define PRIO_PROCESS 0
#define PRIO_PGRP 1
#define PRIO_USER 2


int priority_which[] = {
	PRIO_PROCESS,
	PRIO_PGRP,
	PRIO_USER
};


/* ---------- mq_open_flags ---------- */

#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
#define O_NONBLOCK 2048
#define O_CREAT 64
#define O_EXCL 128
#define O_CREAT 64


int mq_open_flags[] = {
	O_RDONLY,
	O_WRONLY,
	O_RDWR,
	O_NONBLOCK,
	O_CREAT,
	O_EXCL,
	O_CREAT
};


/* ---------- kvm_x86_dr7 ---------- */

#define 1 Undefined in const file! Need to manually fill out !
#define 2 Undefined in const file! Need to manually fill out !
#define 4 Undefined in const file! Need to manually fill out !
#define 8 Undefined in const file! Need to manually fill out !
#define 16 Undefined in const file! Need to manually fill out !
#define 32 Undefined in const file! Need to manually fill out !
#define 64 Undefined in const file! Need to manually fill out !
#define 128 Undefined in const file! Need to manually fill out !


int kvm_x86_dr7[] = {
	1,
	2,
	4,
	8,
	16,
	32,
	64,
	128
};


/* ---------- flock_type ---------- */

#define F_RDLCK 0
#define F_WRLCK 1
#define F_UNLCK 2


int flock_type[] = {
	F_RDLCK,
	F_WRLCK,
	F_UNLCK
};


/* ---------- ipv4_types ---------- */

#define IPPROTO_IP 0
#define IPPROTO_ICMP 1
#define IPPROTO_IGMP 2
#define IPPROTO_IPIP 4
#define IPPROTO_TCP 6
#define IPPROTO_EGP 8
#define IPPROTO_PUP 12
#define IPPROTO_UDP 17
#define IPPROTO_IDP 22
#define IPPROTO_TP 29
#define IPPROTO_DCCP 33
#define IPPROTO_IPV6 41
#define IPPROTO_RSVP 46
#define IPPROTO_GRE 47
#define IPPROTO_ESP 50
#define IPPROTO_AH 51
#define IPPROTO_MTP 92
#define IPPROTO_BEETPH 94
#define IPPROTO_ENCAP 98
#define IPPROTO_PIM 103
#define IPPROTO_COMP 108
#define IPPROTO_SCTP 132
#define IPPROTO_UDPLITE 136
#define IPPROTO_MPLS 137
#define IPPROTO_RAW 255


int ipv4_types[] = {
	IPPROTO_IP,
	IPPROTO_ICMP,
	IPPROTO_IGMP,
	IPPROTO_IPIP,
	IPPROTO_TCP,
	IPPROTO_EGP,
	IPPROTO_PUP,
	IPPROTO_UDP,
	IPPROTO_IDP,
	IPPROTO_TP,
	IPPROTO_DCCP,
	IPPROTO_IPV6,
	IPPROTO_RSVP,
	IPPROTO_GRE,
	IPPROTO_ESP,
	IPPROTO_AH,
	IPPROTO_MTP,
	IPPROTO_BEETPH,
	IPPROTO_ENCAP,
	IPPROTO_PIM,
	IPPROTO_COMP,
	IPPROTO_SCTP,
	IPPROTO_UDPLITE,
	IPPROTO_MPLS,
	IPPROTO_RAW
};


/* ---------- brctl_cmds ---------- */

#define BRCTL_GET_VERSION 0
#define BRCTL_GET_BRIDGES 1
#define BRCTL_ADD_BRIDGE 2
#define BRCTL_DEL_BRIDGE 3


int brctl_cmds[] = {
	BRCTL_GET_VERSION,
	BRCTL_GET_BRIDGES,
	BRCTL_ADD_BRIDGE,
	BRCTL_DEL_BRIDGE
};


/* ---------- sctp_sndrcv_flags ---------- */

#define SCTP_UNORDERED 1
#define SCTP_ADDR_OVER 2
#define SCTP_ABORT 4
#define SCTP_EOF 512


int sctp_sndrcv_flags[] = {
	SCTP_UNORDERED,
	SCTP_ADDR_OVER,
	SCTP_ABORT,
	SCTP_EOF
};


/* ---------- kvm_device_flags ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define KVM_CREATE_DEVICE_TEST 1


int kvm_device_flags[] = {
	0,
	KVM_CREATE_DEVICE_TEST
};


/* ---------- ns_type ---------- */

#define 0 Undefined in const file! Need to manually fill out !
#define CLONE_NEWIPC 134217728
#define CLONE_NEWNET 1073741824
#define CLONE_NEWUTS 67108864


int ns_type[] = {
	0,
	CLONE_NEWIPC,
	CLONE_NEWNET,
	CLONE_NEWUTS
};


/* ---------- msgsnd_flags ---------- */

#define IPC_NOWAIT 2048


int msgsnd_flags[] = {
	IPC_NOWAIT
};


/* ---------- perf_branch_sample_type ---------- */

#define PERF_SAMPLE_BRANCH_USER 1
#define PERF_SAMPLE_BRANCH_KERNEL 2
#define PERF_SAMPLE_BRANCH_HV 4
#define PERF_SAMPLE_BRANCH_ANY 8
#define PERF_SAMPLE_BRANCH_ANY_CALL 16
#define PERF_SAMPLE_BRANCH_ANY_RETURN 32
#define PERF_SAMPLE_BRANCH_IND_CALL 64
#define PERF_SAMPLE_BRANCH_ABORT_TX 128
#define PERF_SAMPLE_BRANCH_IN_TX 256
#define PERF_SAMPLE_BRANCH_NO_TX 512
#define PERF_SAMPLE_BRANCH_COND 1024
#define PERF_SAMPLE_BRANCH_CALL_STACK 2048
#define PERF_SAMPLE_BRANCH_IND_JUMP 4096
#define PERF_SAMPLE_BRANCH_CALL 8192
#define PERF_SAMPLE_BRANCH_NO_FLAGS 16384
#define PERF_SAMPLE_BRANCH_NO_CYCLES 32768
#define PERF_SAMPLE_BRANCH_MAX 65536


int perf_branch_sample_type[] = {
	PERF_SAMPLE_BRANCH_USER,
	PERF_SAMPLE_BRANCH_KERNEL,
	PERF_SAMPLE_BRANCH_HV,
	PERF_SAMPLE_BRANCH_ANY,
	PERF_SAMPLE_BRANCH_ANY_CALL,
	PERF_SAMPLE_BRANCH_ANY_RETURN,
	PERF_SAMPLE_BRANCH_IND_CALL,
	PERF_SAMPLE_BRANCH_ABORT_TX,
	PERF_SAMPLE_BRANCH_IN_TX,
	PERF_SAMPLE_BRANCH_NO_TX,
	PERF_SAMPLE_BRANCH_COND,
	PERF_SAMPLE_BRANCH_CALL_STACK,
	PERF_SAMPLE_BRANCH_IND_JUMP,
	PERF_SAMPLE_BRANCH_CALL,
	PERF_SAMPLE_BRANCH_NO_FLAGS,
	PERF_SAMPLE_BRANCH_NO_CYCLES,
	PERF_SAMPLE_BRANCH_MAX
};


/* ---------- snd_seq_port_type ---------- */

#define SNDRV_SEQ_PORT_TYPE_SPECIFIC 1
#define SNDRV_SEQ_PORT_TYPE_MIDI_GENERIC 2
#define SNDRV_SEQ_PORT_TYPE_MIDI_GM 4
#define SNDRV_SEQ_PORT_TYPE_MIDI_GS 8
#define SNDRV_SEQ_PORT_TYPE_MIDI_XG 16
#define SNDRV_SEQ_PORT_TYPE_MIDI_MT32 32
#define SNDRV_SEQ_PORT_TYPE_MIDI_GM2 64
#define SNDRV_SEQ_PORT_TYPE_SYNTH 1024
#define SNDRV_SEQ_PORT_TYPE_DIRECT_SAMPLE 2048
#define SNDRV_SEQ_PORT_TYPE_SAMPLE 4096
#define SNDRV_SEQ_PORT_TYPE_HARDWARE 65536
#define SNDRV_SEQ_PORT_TYPE_SOFTWARE 131072
#define SNDRV_SEQ_PORT_TYPE_SYNTHESIZER 262144
#define SNDRV_SEQ_PORT_TYPE_PORT 524288
#define SNDRV_SEQ_PORT_TYPE_APPLICATION 1048576


int snd_seq_port_type[] = {
	SNDRV_SEQ_PORT_TYPE_SPECIFIC,
	SNDRV_SEQ_PORT_TYPE_MIDI_GENERIC,
	SNDRV_SEQ_PORT_TYPE_MIDI_GM,
	SNDRV_SEQ_PORT_TYPE_MIDI_GS,
	SNDRV_SEQ_PORT_TYPE_MIDI_XG,
	SNDRV_SEQ_PORT_TYPE_MIDI_MT32,
	SNDRV_SEQ_PORT_TYPE_MIDI_GM2,
	SNDRV_SEQ_PORT_TYPE_SYNTH,
	SNDRV_SEQ_PORT_TYPE_DIRECT_SAMPLE,
	SNDRV_SEQ_PORT_TYPE_SAMPLE,
	SNDRV_SEQ_PORT_TYPE_HARDWARE,
	SNDRV_SEQ_PORT_TYPE_SOFTWARE,
	SNDRV_SEQ_PORT_TYPE_SYNTHESIZER,
	SNDRV_SEQ_PORT_TYPE_PORT,
	SNDRV_SEQ_PORT_TYPE_APPLICATION
};


/* ---------- filesystem ---------- */

#define "sysfs" Undefined in const file! Need to manually fill out !
#define "rootfs" Undefined in const file! Need to manually fill out !
#define "ramfs" Undefined in const file! Need to manually fill out !
#define "tmpfs" Undefined in const file! Need to manually fill out !
#define "devtmpfs" Undefined in const file! Need to manually fill out !
#define "debugfs" Undefined in const file! Need to manually fill out !
#define "securityfs" Undefined in const file! Need to manually fill out !
#define "sockfs" Undefined in const file! Need to manually fill out !
#define "pipefs" Undefined in const file! Need to manually fill out !
#define "anon_inodefs" Undefined in const file! Need to manually fill out !
#define "devpts" Undefined in const file! Need to manually fill out !
#define "ext3" Undefined in const file! Need to manually fill out !
#define "ext2" Undefined in const file! Need to manually fill out !
#define "ext4" Undefined in const file! Need to manually fill out !
#define "hugetlbfs" Undefined in const file! Need to manually fill out !
#define "vfat" Undefined in const file! Need to manually fill out !
#define "ecryptfs" Undefined in const file! Need to manually fill out !
#define "fuseblk" Undefined in const file! Need to manually fill out !
#define "fuse" Undefined in const file! Need to manually fill out !
#define "rpc_pipefs" Undefined in const file! Need to manually fill out !
#define "nfs" Undefined in const file! Need to manually fill out !
#define "nfs4" Undefined in const file! Need to manually fill out !
#define "nfsd" Undefined in const file! Need to manually fill out !
#define "binfmt_misc" Undefined in const file! Need to manually fill out !
#define "autofs" Undefined in const file! Need to manually fill out !
#define "xfs" Undefined in const file! Need to manually fill out !
#define "jfs" Undefined in const file! Need to manually fill out !
#define "msdos" Undefined in const file! Need to manually fill out !
#define "ntfs" Undefined in const file! Need to manually fill out !
#define "minix" Undefined in const file! Need to manually fill out !
#define "hfs" Undefined in const file! Need to manually fill out !
#define "hfsplus" Undefined in const file! Need to manually fill out !
#define "qnx4" Undefined in const file! Need to manually fill out !
#define "ufs" Undefined in const file! Need to manually fill out !
#define "btrfs" Undefined in const file! Need to manually fill out !
#define "configfs" Undefined in const file! Need to manually fill out !
#define "ncpfs" Undefined in const file! Need to manually fill out !
#define "qnx6" Undefined in const file! Need to manually fill out !
#define "exofs" Undefined in const file! Need to manually fill out !
#define "befs" Undefined in const file! Need to manually fill out !
#define "vxfs" Undefined in const file! Need to manually fill out !
#define "gfs2" Undefined in const file! Need to manually fill out !
#define "gfs2meta" Undefined in const file! Need to manually fill out !
#define "fusectl" Undefined in const file! Need to manually fill out !
#define "bfs" Undefined in const file! Need to manually fill out !
#define "nsfs" Undefined in const file! Need to manually fill out !
#define "efs" Undefined in const file! Need to manually fill out !
#define "cifs" Undefined in const file! Need to manually fill out !
#define "efivarfs" Undefined in const file! Need to manually fill out !
#define "affs" Undefined in const file! Need to manually fill out !
#define "tracefs" Undefined in const file! Need to manually fill out !
#define "bdev" Undefined in const file! Need to manually fill out !
#define "ocfs2" Undefined in const file! Need to manually fill out !
#define "ocfs2_dlmfs" Undefined in const file! Need to manually fill out !
#define "hpfs" Undefined in const file! Need to manually fill out !
#define "proc" Undefined in const file! Need to manually fill out !
#define "afs" Undefined in const file! Need to manually fill out !
#define "reiserfs" Undefined in const file! Need to manually fill out !
#define "jffs2" Undefined in const file! Need to manually fill out !
#define "romfs" Undefined in const file! Need to manually fill out !
#define "aio" Undefined in const file! Need to manually fill out !
#define "sysv" Undefined in const file! Need to manually fill out !
#define "v7" Undefined in const file! Need to manually fill out !
#define "udf" Undefined in const file! Need to manually fill out !
#define "ceph" Undefined in const file! Need to manually fill out !
#define "pstore" Undefined in const file! Need to manually fill out !
#define "adfs" Undefined in const file! Need to manually fill out !
#define "9p" Undefined in const file! Need to manually fill out !
#define "hostfs" Undefined in const file! Need to manually fill out !
#define "squashfs" Undefined in const file! Need to manually fill out !
#define "cramfs" Undefined in const file! Need to manually fill out !
#define "iso9660" Undefined in const file! Need to manually fill out !
#define "coda" Undefined in const file! Need to manually fill out !
#define "nilfs2" Undefined in const file! Need to manually fill out !
#define "logfs" Undefined in const file! Need to manually fill out !
#define "overlay" Undefined in const file! Need to manually fill out !
#define "f2fs" Undefined in const file! Need to manually fill out !
#define "omfs" Undefined in const file! Need to manually fill out !
#define "ubifs" Undefined in const file! Need to manually fill out !
#define "openpromfs" Undefined in const file! Need to manually fill out !
#define "bpf" Undefined in const file! Need to manually fill out !
#define "cgroup" Undefined in const file! Need to manually fill out !
#define "cgroup2" Undefined in const file! Need to manually fill out !
#define "cpuset" Undefined in const file! Need to manually fill out !
#define "mqueue" Undefined in const file! Need to manually fill out !
#define "aufs" Undefined in const file! Need to manually fill out !
#define "selinuxfs" Undefined in const file! Need to manually fill out !


char* filesystem[] = {
	"sysfs",
	"rootfs",
	"ramfs",
	"tmpfs",
	"devtmpfs",
	"debugfs",
	"securityfs",
	"sockfs",
	"pipefs",
	"anon_inodefs",
	"devpts",
	"ext3",
	"ext2",
	"ext4",
	"hugetlbfs",
	"vfat",
	"ecryptfs",
	"fuseblk",
	"fuse",
	"rpc_pipefs",
	"nfs",
	"nfs4",
	"nfsd",
	"binfmt_misc",
	"autofs",
	"xfs",
	"jfs",
	"msdos",
	"ntfs",
	"minix",
	"hfs",
	"hfsplus",
	"qnx4",
	"ufs",
	"btrfs",
	"configfs",
	"ncpfs",
	"qnx6",
	"exofs",
	"befs",
	"vxfs",
	"gfs2",
	"gfs2meta",
	"fusectl",
	"bfs",
	"nsfs",
	"efs",
	"cifs",
	"efivarfs",
	"affs",
	"tracefs",
	"bdev",
	"ocfs2",
	"ocfs2_dlmfs",
	"hpfs",
	"proc",
	"afs",
	"reiserfs",
	"jffs2",
	"romfs",
	"aio",
	"sysv",
	"v7",
	"udf",
	"ceph",
	"pstore",
	"adfs",
	"9p",
	"hostfs",
	"squashfs",
	"cramfs",
	"iso9660",
	"coda",
	"nilfs2",
	"logfs",
	"overlay",
	"f2fs",
	"omfs",
	"ubifs",
	"openpromfs",
	"bpf",
	"cgroup",
	"cgroup2",
	"cpuset",
	"mqueue",
	"aufs",
	"selinuxfs"
};


/* ---------- ptrace_req_setregs ---------- */

#define PTRACE_SETREGS 13
#define PTRACE_SETFPREGS 15


int ptrace_req_setregs[] = {
	PTRACE_SETREGS,
	PTRACE_SETFPREGS
};


/* ---------- shutdown_flags ---------- */

#define SHUT_RD 0
#define SHUT_WR 1


int shutdown_flags[] = {
	SHUT_RD,
	SHUT_WR
};


/* ---------- snd_seq_subs_type ---------- */

#define SNDRV_SEQ_QUERY_SUBS_READ 0
#define SNDRV_SEQ_QUERY_SUBS_WRITE 1


int snd_seq_subs_type[] = {
	SNDRV_SEQ_QUERY_SUBS_READ,
	SNDRV_SEQ_QUERY_SUBS_WRITE
};


/* ---------- snd_seq_port_cap ---------- */

#define SNDRV_SEQ_PORT_CAP_READ 1
#define SNDRV_SEQ_PORT_CAP_WRITE 2
#define SNDRV_SEQ_PORT_CAP_SYNC_READ 4
#define SNDRV_SEQ_PORT_CAP_SYNC_WRITE 8
#define SNDRV_SEQ_PORT_CAP_DUPLEX 16
#define SNDRV_SEQ_PORT_CAP_SUBS_READ 32
#define SNDRV_SEQ_PORT_CAP_SUBS_WRITE 64
#define SNDRV_SEQ_PORT_CAP_NO_EXPORT 128


int snd_seq_port_cap[] = {
	SNDRV_SEQ_PORT_CAP_READ,
	SNDRV_SEQ_PORT_CAP_WRITE,
	SNDRV_SEQ_PORT_CAP_SYNC_READ,
	SNDRV_SEQ_PORT_CAP_SYNC_WRITE,
	SNDRV_SEQ_PORT_CAP_DUPLEX,
	SNDRV_SEQ_PORT_CAP_SUBS_READ,
	SNDRV_SEQ_PORT_CAP_SUBS_WRITE,
	SNDRV_SEQ_PORT_CAP_NO_EXPORT
};


/* ---------- mmap_flags ---------- */

#define MAP_SHARED 1
#define MAP_PRIVATE 2
#define MAP_32BIT 64
#define MAP_ANONYMOUS 32
#define MAP_DENYWRITE 2048
#define MAP_EXECUTABLE 4096
#define MAP_FILE 0
#define MAP_FIXED 16
#define MAP_GROWSDOWN 256
#define MAP_HUGETLB 262144
#define MAP_LOCKED 8192
#define MAP_NONBLOCK 65536
#define MAP_NORESERVE 16384
#define MAP_POPULATE 32768
#define MAP_STACK 131072
#define MAP_UNINITIALIZED 0


int mmap_flags[] = {
	MAP_SHARED,
	MAP_PRIVATE,
	MAP_32BIT,
	MAP_ANONYMOUS,
	MAP_DENYWRITE,
	MAP_EXECUTABLE,
	MAP_FILE,
	MAP_FIXED,
	MAP_GROWSDOWN,
	MAP_HUGETLB,
	MAP_LOCKED,
	MAP_NONBLOCK,
	MAP_NORESERVE,
	MAP_POPULATE,
	MAP_STACK,
	MAP_UNINITIALIZED
};


/* ---------- ptrace_req_setopts ---------- */

#define PTRACE_SETOPTIONS 16896
#define PTRACE_SEIZE 16902


int ptrace_req_setopts[] = {
	PTRACE_SETOPTIONS,
	PTRACE_SEIZE
};


/* ---------- sched_attr_size ---------- */

#define 48 Undefined in const file! Need to manually fill out !


int sched_attr_size[] = {
	48
};


/* ---------- kvm_vcpu_target ---------- */

#define KVM_ARM_TARGET_CORTEX_A53 4
#define KVM_ARM_TARGET_AEM_V8 0
#define KVM_ARM_TARGET_FOUNDATION_V8 1
#define KVM_ARM_TARGET_CORTEX_A57 2
#define KVM_ARM_TARGET_XGENE_POTENZA 3
#define KVM_ARM_TARGET_GENERIC_V8 5


int kvm_vcpu_target[] = {
	KVM_ARM_TARGET_CORTEX_A53,
	KVM_ARM_TARGET_AEM_V8,
	KVM_ARM_TARGET_FOUNDATION_V8,
	KVM_ARM_TARGET_CORTEX_A57,
	KVM_ARM_TARGET_XGENE_POTENZA,
	KVM_ARM_TARGET_GENERIC_V8
};


/* ---------- timerfd_create_flags ---------- */

#define TFD_NONBLOCK 2048
#define TFD_CLOEXEC 524288


int timerfd_create_flags[] = {
	TFD_NONBLOCK,
	TFD_CLOEXEC
};


/* ---------- ptrace_req_cont ---------- */

#define PTRACE_CONT 7
#define PTRACE_SYSCALL 24
#define PTRACE_SINGLESTEP 9
#define PTRACE_SYSEMU 31
#define PTRACE_SYSEMU_SINGLESTEP 32


int ptrace_req_cont[] = {
	PTRACE_CONT,
	PTRACE_SYSCALL,
	PTRACE_SINGLESTEP,
	PTRACE_SYSEMU,
	PTRACE_SYSEMU_SINGLESTEP
};


/* ---------- other macros ---------- */

#define __NR_rt_sigtimedwait 137
#define EVIOCGID 2148025602
#define KDSETMODE 19258
#define DRM_IOCTL_CONTROL 1074291732
#define __NR_umount2 39
#define TE_IOCTL_CLOSE_CLIENT_SESSION 3224925201
#define KEYCTL_REJECT 19
#define __NR_fchmodat 53
#define __NR_lseek 62
#define F_ADD_SEALS 1033
#define KDGKBSENT 19272
#define __NR_sync_file_range 84
#define SNDRV_SEQ_IOCTL_GET_SUBSCRIPTION 3226489680
#define F_GETOWN_EX 16
#define __NR_mq_timedsend 182
#define BPF_PROG_ATTACH 8
#define BTPROTO_BNEP 4
#define BT_SECURITY 4
#define GIO_SCRNMAP 19264
#define __NR_mq_getsetattr 185
#define TIOCNXCL 21517
#define SCTP_SNDRCV 1
#define __NR_chmod 90
#define SNDRV_CTL_IOCTL_TLV_COMMAND 3221771548
#define GIO_FONT 19296
#define TIOCGETD 21540
#define __NR_set_tid_address 96
#define SIOCOUTQ 21521
#define AX25_MAX_DIGIS 8
#define __NR_getsockname 204
#define CMTPGETCONNLIST 2147763154
#define VT_RELDISP 22021
#define __NR_signalfd4 74
#define __NR_mq_notify 184
#define TUNSETIFINDEX 1074025690
#define DRM_IOCTL_SET_MASTER 25630
#define __NR_lgetxattr 9
#define SO_ATTACH_BPF 50
#define NETROM_IDLE 7
#define DRM_IOCTL_GET_UNIQUE 3222299649
#define GIO_UNISCRNMAP 19305
#define __NR_fremovexattr 16
#define KVM_SET_SREGS 1073786500
#define EVIOCGSND64 2151695642
#define BPF_MAP_GET_NEXT_KEY 4
#define F_SETSIG 10
#define SHM_INFO 14
#define __NR_msgrcv 188
#define KVM_SET_TSS_ADDR 44615
#define NETROM_T1 1
#define LOOP_GET_STATUS 19459
#define BPF_OBJ_GET 7
#define SNDRV_CTL_IOCTL_PCM_NEXT_DEVICE 2147767600
#define SCTP_DISABLE_FRAGMENTS 8
#define BT_CHANNEL_POLICY 10
#define PIO_FONT 19297
#define KEYCTL_GET_SECURITY 17
#define __NR_mmap 222
#define SNDRV_TIMER_IOCTL_PARAMS 1079006226
#define SIOCDARP 35155
#define KVM_GET_PIT 3225988709
#define DRM_IOCTL_PRIME_HANDLE_TO_FD 3222037549
#define KVM_SET_PIT 2152246886
#define EVIOCGNAME64 2151695622
#define KVM_TPR_ACCESS_REPORTING 3223891602
#define PERF_EVENT_IOC_ENABLE 9216
#define __NR_geteuid 175
#define KEYCTL_UPDATE 2
#define PERF_EVENT_IOC_DISABLE 9217
#define TUNSETIFF 1074025674
#define FS_IOC_FIEMAP 3223348747
#define __NR_sync 81
#define __NR_utime 132
#define KVM_ASSIGN_SET_MSIX_NR 1074310771
#define __NR_statfs 43
#define SCTP_STATUS 14
#define __NR_removexattr 14
#define SNDRV_SEQ_IOCTL_QUERY_NEXT_CLIENT 3233567569
#define __NR_pwritev 70
#define __NR_process_vm_readv 270
#define TIOCMGET 21525
#define __NR_getegid 177
#define __NR_msgsnd 189
#define LOOP_SET_FD 19456
#define KVM_SET_REGS 1130409602
#define KEYCTL_REVOKE 3
#define __NR_socketpair 199
#define SIOCADDDLCI 35200
#define SIOCKCMATTACH 35296
#define NETROM_N2 3
#define EVIOCGVERSION 2147763457
#define KVM_CREATE_VM 44545
#define __NR_fsync 82
#define BTPROTO_HCI 1
#define EVIOCGREP 2148025603
#define UFFDIO_REGISTER 3223366144
#define KEYCTL_UNLINK 9
#define EVIOCSABS0 1075332544
#define KVM_IOEVENTFD 1077980793
#define __NR_recvmmsg 243
#define __NR_readv 65
#define BPF_OBJ_PIN 6
#define SNDRV_SEQ_IOCTL_SET_QUEUE_TEMPO 1076646722
#define KVM_XEN_HVM_CONFIG 1077456506
#define ION_IOC_IMPORT 3221768453
#define __NR_recvfrom 207
#define TCGETA 21509
#define __NR_linkat 37
#define __NR_mq_timedreceive 183
#define KEYCTL_INVALIDATE 21
#define __NR_delete_module 106
#define LOOP_SET_STATUS64 19460
#define __NR_clock_getres 114
#define __NR_sched_setscheduler 119
#define DRM_IOCTL_SWITCH_CTX 1074291748
#define EVIOCSFF 1076905344
#define SNDRV_SEQ_IOCTL_CREATE_PORT 3232256800
#define KVM_PPC_GET_PVINFO 1082175137
#define KVM_SMI 44727
#define SNDRV_SEQ_IOCTL_GET_QUEUE_TIMER 3227538245
#define KVM_GET_FPU 2147528332
#define __NR_io_destroy 1
#define DRM_IOCTL_DROP_MASTER 25631
#define DRM_IOCTL_RM_CTX 3221775393
#define DRM_IOCTL_MARK_BUFS 1075864599
#define __NR_shmctl 195
#define EVIOCREVOKE 1074021777
#define KVM_GET_TSC_KHZ 44707
#define AF_NETROM 6
#define KDSETKEYCODE 19277
#define RNDZAPENTCNT 20996
#define __NR_io_submit 2
#define __NR_userfaultfd 282
#define TIOCNOTTY 21538
#define EVIOCGRAB 1074021776
#define SCTP_AUTH_KEY 23
#define F_GETOWN 9
#define __NR_sched_getaffinity 123
#define KVM_SET_XSAVE 1342221989
#define DRM_IOCTL_AGP_BIND 1074816054
#define SNDRV_SEQ_IOCTL_RUNNING_MODE 3222295299
#define BT_POWER 9
#define __NR_mknod 133
#define __NR_tkill 130
#define UFFDIO_API 3222841919
#define __NR_prctl 167
#define __NR_rt_sigreturn 139
#define __NR_fstatfs 44
#define TCP_MD5SIG_MAXKEYLEN 80
#define __NR_sched_yield 124
#define KDGKBTYPE 19251
#define KVM_GET_EMULATED_CPUID 3221794313
#define KVM_TRANSLATE 3222843013
#define EVIOCSMASK 1074808211
#define KVM_DEASSIGN_PCI_DEVICE 1077980786
#define SCTP_I_WANT_MAPPED_V4_ADDR 12
#define __NR_finit_module 273
#define __NR_pkey_mprotect 288
#define SNDRV_CTL_IOCTL_POWER_STATE 2147767761
#define __NR_modify_ldt 154
#define KEYCTL_CHOWN 4
#define KEYCTL_GET_KEYRING_ID 0
#define KVM_GET_SREGS 2147528323
#define DRM_IOCTL_AGP_ENABLE 1074291762
#define DRM_DISPLAY_MODE_LEN 32
#define PTRACE_SETREGSET 16901
#define __NR_lstat 6
#define __NR_clock_adjtime 266
#define DRM_IOCTL_AGP_ACQUIRE 25648
#define SHM_STAT 13
#define TIOCSTI 21522
#define KVM_GET_PIT2 2154868383
#define __NR_getpgid 155
#define LOOP_CTL_ADD 19584
#define __NR_setsockopt 208
#define KVM_SET_PIT2 1081126560
#define EVIOCGEFFECTS 2147763588
#define TIOCCBRK 21544
#define HIDPCONNADD 1074022600
#define SNDRV_CTL_IOCTL_SUBSCRIBE_EVENTS 3221509398
#define VT_SETMODE 22018
#define __NR_preadv 69
#define TIOCEXCL 21516
#define TIOCSLCKTRMIOS 21591
#define __NR_creat 85
#define ICMPV6_DEST_UNREACH 1
#define __NR_dup 23
#define KVM_GET_CPUID2 3221794449
#define KDSKBSENT 19273
#define NETROM_T2 2
#define TUNSETVNETHDRSZ 1074025688
#define __NR_ptrace 117
#define BPF_PROG_LOAD 5
#define __NR_llistxattr 12
#define SCTP_GET_PEER_ADDRS 108
#define DRM_IOCTL_UNLOCK 1074291755
#define DRM_IOCTL_NEW_CTX 1074291749
#define SNDRV_SEQ_IOCTL_SUBSCRIBE_PORT 1079006000
#define __NR_set_robust_list 99
#define __NR_ioctl 29
#define __NR_timerfd_create 85
#define KVM_SET_VCPU_EVENTS 1077980832
#define KDGKBLED 19300
#define KVM_IRQFD 1075883638
#define SNDRV_SEQ_IOCTL_GET_QUEUE_STATUS 3227276096
#define SIOCDEVPRIVATE_BEG 35312
#define KVM_PPC_GET_SMMU_INFO 2186325670
#define __NR_pselect6 72
#define SNDRV_SEQ_IOCTL_GET_NAMED_QUEUE 3230421814
#define __NR_sigaltstack 132
#define DRM_IOCTL_GET_CTX 3221775395
#define EVIOCRMFF 1074021761
#define __NR_eventfd 284
#define EVIOCGBITSND64 2151695666
#define __NR_inotify_init1 26
#define __NR_readlink 89
#define SCTP_GET_PEER_ADDR_INFO 15
#define KDGETLED 19249
#define PERF_EVENT_IOC_SET_FILTER 1074275334
#define __NR_get_thread_area 211
#define __NR_move_pages 239
#define DRM_IOCTL_FREE_BUFS 1074816026
#define __NR_sendfile 71
#define SCTP_EVENTS 11
#define __NR_personality 92
#define __NR_shutdown 210
#define TCSETS 21506
#define __NR_shmdt 197
#define __NR_flock 32
#define SNDRV_CTL_IOCTL_ELEM_ADD 3239073047
#define SNDRV_CTL_IOCTL_ELEM_READ 3301463314
#define EVIOCGMTSLOTS64 2151695626
#define KVM_SET_CPUID2 1074310800
#define PTRACE_GETSIGINFO 16898
#define ALG_SET_AEAD_AUTHSIZE 5
#define KDGETMODE 19259
#define __NR_tee 77
#define KVM_REGISTER_COALESCED_MMIO 1074835047
#define __NR_kexec_load 104
#define TUNATTACHFILTER 1074812117
#define KVM_X86_SET_MCE 1077980830
#define __NR_unlinkat 35
#define SCTP_PARTIAL_DELIVERY_POINT 19
#define KVM_CREATE_VCPU 44609
#define GETZCNT 15
#define SCTP_ADAPTATION_LAYER 7
#define KVM_ASSIGN_SET_MSIX_ENTRY 1074835060
#define KVM_GET_DEVICE_ATTR 1075359458
#define __NR_fallocate 47
#define PTRACE_POKEUSR 6
#define SCTP_AUTH_ACTIVE_KEY 24
#define __NR_unshare 97
#define __NR_semop 193
#define __NR_setgroups 159
#define BT_VOICE 11
#define __NR_rmdir 84
#define LOOP_CTL_GET_FREE 19586
#define MSG_INFO 12
#define BPF_PSEUDO_MAP_FD 1
#define BTPROTO_HIDP 6
#define __NR_capget 90
#define __NR_syslog 116
#define __NR_set_mempolicy 237
#define SNDRV_SEQ_IOCTL_UNSUBSCRIBE_PORT 1079006001
#define KVM_ENABLE_CAP 1080602275
#define __NR_pivot_root 41
#define DRM_IOCTL_AUTH_MAGIC 1074029585
#define KCM_RECV_DISABLE 1
#define KDENABIO 19254
#define __NR_setfsuid 151
#define KDSKBMODE 19269
#define __NR_rt_sigprocmask 135
#define __NR_syz_emit_ethernet 1000006
#define __NR_sendmmsg 269
#define __NR_fstat 80
#define EVIOCGPROP64 2151695625
#define SNDRV_SEQ_IOCTL_GET_QUEUE_INFO 3230421812
#define SCTP_AUTH_CHUNK 21
#define TIOCPKT 21536
#define EVIOCGBITKEY64 2151695649
#define LO_KEY_SIZE 32
#define TE_IOCTL_OPEN_CLIENT_SESSION 3224925200
#define SO_PEERCRED 17
#define SCO_CONNINFO 2
#define SNDRV_SEQ_IOCTL_PVERSION 2147767040
#define SNDRV_TIMER_IOCTL_CONTINUE 21666
#define SNDRV_TIMER_IOCTL_INFO 2162709521
#define __NR_writev 66
#define BTPROTO_SCO 2
#define TIOCLINUX 21532
#define KDGKBMETA 19298
#define SNDRV_TIMER_IOCTL_NEXT_DEVICE 3222557697
#define SCTP_PEER_ADDR_PARAMS 9
#define SCO_OPTIONS 1
#define __NR_link 86
#define SNDRV_CTL_IOCTL_CARD_INFO 2172146945
#define __NR_getdents 78
#define __NR_exit_group 94
#define KVM_DEASSIGN_DEV_IRQ 1077980789
#define SNDRV_TIMER_IOCTL_STATUS 2153796628
#define __NR_renameat2 276
#define KVM_SET_DEVICE_ATTR 1075359457
#define __NR_inotify_init 253
#define KVM_CREATE_IRQCHIP 44640
#define SEM_INFO 19
#define SNDRV_SEQ_IOCTL_SET_QUEUE_INFO 3230421813
#define __NR_getpid 172
#define KVM_KVMCLOCK_CTRL 44717
#define __NR_sched_getscheduler 120
#define EVIOCSABS20 1075332576
#define PERF_EVENT_IOC_REFRESH 9218
#define DRM_IOCTL_GET_CLIENT 3223872517
#define __NR_getrusage 165
#define SIOCRTMSG 35085
#define SNDRV_SEQ_IOCTL_CLIENT_ID 2147767041
#define __NR_syncfs 267
#define DRM_IOCTL_GET_STATS 2163762182
#define UFFDIO_UNREGISTER 2148575745
#define SNDRV_CTL_IOCTL_HWDEP_NEXT_DEVICE 3221509408
#define LOOP_CLR_FD 19457
#define DRM_IOCTL_ADD_BUFS 3223348246
#define ALG_SET_OP 3
#define KVM_CREATE_DEVICE 3222056672
#define __NR_pipe2 59
#define BNEPCONNADD 1074021064
#define __NR_ftruncate 46
#define TCSBRK 21513
#define SCTP_DEFAULT_SEND_PARAM 10
#define KEYCTL_DESCRIBE 6
#define __NR_open 2
#define __NR_connect 203
#define SNDRV_TIMER_IOCTL_PVERSION 2147767296
#define KVM_SET_ONE_REG 1074835116
#define TUNSETOWNER 1074025676
#define SIOCIPXCFGDATA 35298
#define ICMPV6_PKT_TOOBIG 2
#define __NR_epoll_create1 20
#define __NR_openat 56
#define ION_IOC_SHARE 3221768452
#define __NR_semget 190
#define CMTPGETCONNINFO 2147763155
#define DRM_IOCTL_INFO_BUFS 3222299672
#define __NR_membarrier 283
#define __NR_inotify_rm_watch 28
#define KVM_GET_MP_STATE 2147790488
#define __NR_select 23
#define __NR_munlockall 231
#define TUNDETACHFILTER 1074812118
#define BNEPGETSUPPFEAT 2147762900
#define __NR_fchownat 54
#define TUNSETQUEUE 1074025689
#define DRM_IOCTL_AGP_UNBIND 1074816055
#define __NR_timer_create 107
#define SCTP_GET_ASSOC_ID_LIST 29
#define __NR_timer_settime 110
#define TIOCGLCKTRMIOS 21590
#define __NR_getrlimit 163
#define HIDPCONNDEL 1074022601
#define DRM_IOCTL_RES_CTX 3222299686
#define SNDRV_CTL_IOCTL_ELEM_REPLACE 3239073048
#define __NR_truncate 45
#define SIOCDEVPRIVATE_END 35327
#define EVIOCSKEYCODE_V2 1076380932
#define L2CAP_CONNINFO 2
#define __NR_mkdirat 34
#define SCTP_CONTEXT 17
#define KEYCTL_LINK 8
#define SIOCKCMUNATTACH 35297
#define SNDRV_SEQ_IOCTL_GET_PORT_INFO 3232256802
#define __NR_accept 202
#define RNDADDTOENTCNT 1074024961
#define __NR_madvise 233
#define BPF_PROG_DETACH 9
#define __NR_acct 89
#define KDGKBENT 19270
#define __NR_vmsplice 75
#define PR_SET_ENDIAN 20
#define __NR_get_robust_list 100
#define UFFDIO_WAKE 2148575746
#define SNDRV_SEQ_IOCTL_QUERY_SUBS 3227013967
#define __NR_io_setup 0
#define __NR_sched_setaffinity 122
#define SNDRV_TIMER_IOCTL_SELECT 1077171216
#define __NR_wait4 260
#define F_SETLEASE 1024
#define __NR_pause 34
#define BT_RCVMTU 13
#define TCSBRKP 21541
#define SO_ATTACH_FILTER 26
#define KVM_SET_IRQCHIP 2181607011
#define __NR_timerfd_gettime 87
#define DRM_IOCTL_ADD_CTX 3221775392
#define KEYCTL_READ 11
#define DRM_IOCTL_MODE_GETCRTC 3228066977
#define SIOCATMARK 35077
#define KVM_ASSIGN_SET_INTX_MASK 1077980836
#define TIOCGSOFTCAR 21529
#define SNDRV_CTL_IOCTL_PCM_PREFER_SUBDEVICE 1074025778
#define SCTP_PEER_AUTH_CHUNKS 26
#define DRM_IOCTL_WAIT_VBLANK 3222823994
#define ICMPV6_TIME_EXCEED 3
#define __NR_clock_nanosleep 115
#define EVIOCSABS3F 1075332607
#define __NR_add_key 217
#define KVM_ARM_VCPU_INIT 1075883694
#define __NR_sendto 206
#define __NR_listxattr 11
#define IPC_RMID 0
#define SCTP_NODELAY 3
#define FIOGETOWN 35075
#define SHM_UNLOCK 12
#define PR_SET_NAME 15
#define SIOCSARP 35157
#define KDDELIO 19253
#define KVM_SET_CPUID 1074310794
#define KCMPROTO_CONNECTED 0
#define PR_SET_MM 35
#define SIOCINQ 21531
#define __NR_fchmod 52
#define SNDRV_CTL_IOCTL_RAWMIDI_INFO 3238810945
#define KEYCTL_CLEAR 7
#define KVM_GET_LAPIC 2214637198
#define PTRACE_GETREGSET 16900
#define SNDRV_TIMER_IOCTL_GINFO 3237499907
#define DRM_IOCTL_SET_VERSION 3222299655
#define SNDRV_SEQ_IOCTL_GET_QUEUE_TEMPO 3224130369
#define KDSKBMETA 19299
#define __NR_msgget 186
#define TIOCSETD 21539
#define __NR_init_module 105
#define TCSETSF 21508
#define KVM_SET_GUEST_DEBUG 1107865243
#define TUNGETFILTER 2148553947
#define KVM_SET_LAPIC 1140895375
#define SNDRV_SEQ_IOCTL_SET_PORT_INFO 1084773155
#define KVM_GET_NR_MMU_PAGES 44613
#define KVM_GET_SUPPORTED_CPUID 3221794309
#define SNDRV_CTL_IOCTL_RAWMIDI_NEXT_DEVICE 3221509440
#define __NR_open_by_handle_at 265
#define GIO_FONTX 19307
#define DRM_IOCTL_MODE_GETPLANERESOURCES 3222299829
#define __NR_mlockall 230
#define SIOCGPGRP 35076
#define KEYCTL_SET_REQKEY_KEYRING 14
#define NFC_SOCKPROTO_LLCP 1
#define __NR_syz_open_dev 1000002
#define FIONREAD 21531
#define TUNSETSNDBUF 1074025684
#define KVM_REINJECT_CONTROL 44657
#define __NR_epoll_ctl 21
#define DRM_IOCTL_MAP_BUFS 3222823961
#define SCTP_AUTO_ASCONF 30
#define KEYCTL_JOIN_SESSION_KEYRING 1
#define SETALL 17
#define PTRACE_GETEVENTMSG 16897
#define __NR_request_key 218
#define DRM_IOCTL_DMA 3225445417
#define __NR_keyctl 219
#define __NR_syz_open_pts 1000003
#define __NR_timerfd_settime 86
#define SNDRV_SEQ_IOCTL_GET_QUEUE_CLIENT 3226227529
#define PERF_EVENT_IOC_PERIOD 1074275332
#define KVM_GET_REGS 2204151425
#define EVIOCGMASK 2148550034
#define EVIOCSCLOCKID 1074021792
#define SCTP_DEFAULT_SNDINFO 34
#define DRM_IOCTL_AGP_FREE 1075864629
#define __NR_getdents64 61
#define __NR_symlinkat 36
#define __NR_socket 198
#define SNDRV_TIMER_IOCTL_GPARAMS 1078481924
#define __NR_syz_kvm_setup_cpu 1000007
#define SNDRV_SEQ_IOCTL_SET_CLIENT_INFO 1086083857
#define KVM_SET_DEBUGREGS 1082175138
#define DRM_IOCTL_SET_SAREA_CTX 1074816028
#define __NR_name_to_handle_at 264
#define __NR_setns 268
#define __NR_stat 4
#define VT_GETMODE 22017
#define SCTP_SNDINFO 2
#define __NR_fcntl 25
#define HIDPGETCONNLIST 2147764434
#define F_SETOWN_EX 15
#define SCTP_SOCKOPT_BINDX_REM 101
#define RFCOMM_CONNINFO 2
#define RNDADDENTROPY 1074287107
#define __NR_getgid 176
#define __NR_perf_event_open 241
#define VT_GETSTATE 22019
#define __NR_setresgid 149
#define SNDRV_SEQ_IOCTL_SYSTEM_INFO 3224392450
#define PIO_SCRNMAP 19265
#define SCTP_HMAC_IDENT 22
#define TUNSETOFFLOAD 1074025680
#define KVM_SET_VAPIC_ADDR 1074310803
#define __NR_pkey_alloc 289
#define __NR_timer_getoverrun 109
#define SNDRV_SEQ_IOCTL_SET_QUEUE_CLIENT 1078743882
#define __NR_memfd_create 279
#define __NR_getresuid 148
#define __NR_futex 98
#define __NR_sendmsg 211
#define IPC_STAT 2
#define SCTP_SOCKOPT_CONNECTX 110
#define SCTP_LOCAL_AUTH_CHUNKS 27
#define DRM_IOCTL_MODESET_CTL 1074291720
#define __NR_ioperm 173
#define LO_NAME_SIZE 64
#define ICMPV6_ECHO_REQUEST 128
#define SCTP_PEER_ADDR_THLDS 31
#define __NR_mq_unlink 181
#define SOL_L2CAP 6
#define SOL_SCO 17
#define GETNCNT 14
#define DRM_IOCTL_AGP_RELEASE 25649
#define IPX_TYPE 1
#define __NR_prlimit64 261
#define __NR_fsetxattr 7
#define __NR_arch_prctl 158
#define SCTP_SOCKOPT_BINDX_ADD 100
#define FUSE_DEV_IOC_CLONE 2147804416
#define KVM_GET_XSAVE 2415963812
#define __NR_exit 93
#define SCM_RIGHTS 1
#define PIO_FONTX 19308
#define TUNGETVNETHDRSZ 2147767511
#define EVIOCGABS20 2149074272
#define KVM_GET_MSRS 3221794440
#define NFC_SOCKPROTO_RAW 0
#define __NR_pipe 22
#define KIOCSOUND 19247
#define SCTP_SOCKOPT_PEELOFF 102
#define PIO_FONTRESET 19309
#define __NR_sysinfo 179
#define VT_DISALLOCATE 22024
#define SCTP_GET_ASSOC_STATS 112
#define __NR_shmget 194
#define __NR_syz_test 1000001
#define GIO_UNIMAP 19302
#define TUNGETSNDBUF 2147767507
#define DRM_IOCTL_IRQ_BUSID 3222299651
#define SCM_CREDENTIALS 2
#define __NR_inotify_add_watch 27
#define DRM_IOCTL_MODE_GETRESOURCES 3225445536
#define SHM_LOCK 11
#define SCTP_GET_ASSOC_NUMBER 28
#define CMTPCONNADD 1074021320
#define SNDRV_CTL_IOCTL_PCM_INFO 3240121649
#define __NR_readahead 213
#define LOOP_GET_STATUS64 19461
#define TCGETS 21505
#define SNDRV_TIMER_IOCTL_STOP 21665
#define TIOCGPGRP 21519
#define KVM_SET_GSI_ROUTING 1074310762
#define ION_IOC_ALLOC 3223341312
#define KEYCTL_SEARCH 10
#define __NR_lsetxattr 6
#define SCTP_ASSOCINFO 1
#define __NR_clock_settime 112
#define DRM_IOCTL_SG_FREE 1074816057
#define KEYCTL_SESSION_TO_PARENT 18
#define __NR_syz_fuse_mount 1000004
#define __NR_poll 7
#define SCTP_GET_LOCAL_ADDRS 109
#define SNDRV_CTL_IOCTL_PVERSION 2147767552
#define __NR_pwrite64 68
#define SCTP_DELAYED_SACK 16
#define SNDRV_SEQ_IOCTL_GET_CLIENT_INFO 3233567504
#define KVM_INTERRUPT 1074048646
#define __NR_sysfs 139
#define SCTP_MAX_BURST 20
#define TIOCMBIC 21527
#define BNEPGETCONNLIST 2147762898
#define SCTP_RTOINFO 0
#define SNDRV_SEQ_IOCTL_SET_CLIENT_POOL 1079530316
#define KDGETKEYCODE 19276
#define PR_GET_NAME 16
#define LOOP_SET_DIRECT_IO 19464
#define DRM_IOCTL_SET_UNIQUE 1074816016
#define SNDRV_CTL_IOCTL_TLV_WRITE 3221771547
#define AF_KCM 41
#define KVM_ASSIGN_DEV_IRQ 1077980784
#define AF_ALG 38
#define DRM_IOCTL_SG_ALLOC 3222299704
#define __NR_getitimer 102
#define __NR_io_getevents 4
#define KVM_UNREGISTER_COALESCED_MMIO 1074835048
#define F_SETFD 2
#define __NR_dup2 33
#define __NR_sched_setparam 118
#define RNDGETENTCNT 2147766784
#define KDSKBLED 19301
#define __NR_tgkill 131
#define KVM_RUN 44672
#define TIOCSWINSZ 21524
#define __NR_munmap 215
#define SCTP_SOCKOPT_CONNECTX_OLD 107
#define KEYCTL_GET_PERSISTENT 22
#define __NR_fgetxattr 10
#define __NR_restart_syscall 128
#define SNDRV_SEQ_IOCTL_QUERY_NEXT_PORT 3232256850
#define DRM_IOCTL_SET_CLIENT_CAP 1074816013
#define TUNGETFEATURES 2147767503
#define LOOP_SET_STATUS 19458
#define DRM_IOCTL_MODE_SETCRTC 3228066978
#define __NR_fchown 55
#define __NR_gettid 178
#define __NR_unlink 87
#define __NR_listen 201
#define __NR_faccessat 48
#define __NR_accept4 242
#define __NR_setitimer 103
#define __NR_futimesat 261
#define __NR_readlinkat 78
#define __NR_rt_tgsigqueueinfo 240
#define __NR_pread64 67
#define LOOP_SET_CAPACITY 19463
#define L2CAP_LM 3
#define ALG_SET_KEY 1
#define __NR_mincore 232
#define SCTP_RECVNXTINFO 33
#define BNEPCONNDEL 1074021065
#define DRM_IOCTL_GEM_OPEN 3222299659
#define __NR_read 63
#define __NR_lookup_dcookie 18
#define F_SETPIPE_SZ 1031
#define __NR_rename 82
#define __NR_epoll_pwait 22
#define TUNSETNOCSUM 1074025672
#define __NR_setpriority 140
#define __NR_rt_sigsuspend 133
#define SIOCGIFBR 35136
#define KEYCTL_ASSUME_AUTHORITY 16
#define AF_NFC 39
#define __NR_flistxattr 13
#define SCTP_AUTH_DELETE_KEY 25
#define KVM_S390_VCPU_FAULT 1074310738
#define VT_RESIZE 22025
#define ALG_SET_AEAD_ASSOCLEN 4
#define __NR_kcmp 272
#define __NR_munlock 229
#define __NR_migrate_pages 238
#define DRM_IOCTL_AGP_INFO 2151179315
#define VT_WAITACTIVE 22023
#define DRM_IOCTL_GET_SAREA_CTX 3222299677
#define SCTP_SET_PEER_PRIMARY_ADDR 5
#define EVIOCSABS2F 1075332591
#define KVM_IRQ_LINE_STATUS 3221794407
#define __NR_setrlimit 164
#define __NR_uname 160
#define SNDRV_SEQ_IOCTL_SET_QUEUE_TIMER 1080054598
#define KVM_CREATE_PIT2 1077980791
#define NETROM_T4 6
#define KDDISABIO 19255
#define SNDRV_CTL_IOCTL_ELEM_LOCK 1077957908
#define __NR_clock_gettime 113
#define EVIOCGSW64 2151695643
#define TIOCMSET 21528
#define ICMPV6_PARAMPROB 4
#define __NR_alarm 37
#define SNDRV_SEQ_IOCTL_REMOVE_EVENTS 1077957454
#define __NR_splice 76
#define __NR_recvmsg 212
#define AF_BLUETOOTH 31
#define __NR_bpf 280
#define EVIOCGKEYCODE 2148025604
#define __NR_eventfd2 19
#define __NR_rt_sigpending 136
#define BT_DEFER_SETUP 7
#define FIOSETOWN 35073
#define KVM_SET_CLOCK 1076932219
#define KVM_GET_ONE_REG 1074835115
#define PR_SET_FPEXC 12
#define SIOCPROTOPRIVATE_BEG 35296
#define VT_RESIZEX 22026
#define TCXONC 21514
#define IFNAMSIZ 16
#define KVM_X86_GET_MCE_CAP_SUPPORTED 2148052637
#define F_SETFL 4
#define SNDRV_TIMER_IOCTL_PAUSE 21667
#define __NR_sched_getattr 275
#define SIOCGARP 35156
#define SIOCDELDLCI 35201
#define __NR_mprotect 226
#define SNDRV_CTL_IOCTL_ELEM_LIST 3226490128
#define __NR_iopl 172
#define SCTP_FRAGMENT_INTERLEAVE 18
#define IPC_INFO 3
#define SNDRV_TIMER_IOCTL_START 21664
#define SO_TIMESTAMPING 37
#define KVM_SET_USER_MEMORY_REGION 1075883590
#define KVM_DIRTY_TLB 1074835114
#define __NR_time 201
#define __NR_mknodat 33
#define VT_ACTIVATE 22022
#define TE_IOCTL_SS_CMD 2147775536
#define __NR_semtimedop 192
#define __NR_fdatasync 83
#define __NR_setxattr 5
#define ICMPV6_ECHO_REPLY 129
#define SOL_RFCOMM 18
#define EVIOCGLED64 2151695641
#define __NR_renameat 38
#define EVIOCGKEYCODE_V2 2150122756
#define GETPID 11
#define SIOCADDRT 35083
#define __NR_setpgid 154
#define __NR_write 64
#define TIOCCONS 21533
#define __NR_ioprio_get 31
#define SIOCAIPXPRISLT 35297
#define TUNSETPERSIST 1074025675
#define __NR_lremovexattr 15
#define EVIOCGUNIQ64 2151695624
#define TIOCGWINSZ 21523
#define __NR_bind 200
#define SNDRV_CTL_IOCTL_ELEM_WRITE 3301463315
#define KVM_S390_INTERRUPT 1074835092
#define KVM_ASSIGN_PCI_DEVICE 2151722601
#define __NR_times 153
#define __NR_utimes 235
#define KVM_CHECK_EXTENSION 44547
#define TUNSETTXFILTER 1074025681
#define __NR_get_mempolicy 236
#define SNDRV_CTL_IOCTL_HWDEP_INFO 2161923361
#define SCTP_SOCKOPT_CONNECTX3 111
#define PERF_EVENT_IOC_RESET 9219
#define KVM_GET_REG_LIST 3221794480
#define EVIOCGPHYS64 2151695623
#define __NR_setfsgid 152
#define SO_LINGER 13
#define KVM_SET_FPU 1073786509
#define KVM_GET_IRQCHIP 3255348834
#define __NR_mlock2 284
#define ION_IOC_CUSTOM 3222292742
#define KEYCTL_INSTANTIATE_IOV 20
#define __NR_mlock 228
#define __NR_epoll_wait 232
#define TIOCSSOFTCAR 21530
#define KVM_SET_NR_MMU_PAGES 44612
#define PIO_UNIMAPCLR 19304
#define KDADDIO 19252
#define KVM_PPC_ALLOCATE_HTAB 3221532327
#define DRM_IOCTL_GET_MAP 3223872516
#define PERF_EVENT_IOC_SET_OUTPUT 9221
#define __NR_getuid 174
#define DRM_IOCTL_GET_MAGIC 2147771394
#define __NR_getresgid 150
#define __NR_shmat 196
#define SIOCDELRT 35084
#define SNDRV_TIMER_IOCTL_TREAD 1074025474
#define BTPROTO_L2CAP 0
#define PERF_EVENT_IOC_SET_BPF 1074013192
#define __NR_getpeername 205
#define KDSIGACCEPT 19278
#define KVM_S390_UCAS_UNMAP 1075359313
#define KEYCTL_NEGATE 13
#define BPF_MAP_CREATE 0
#define __NR_waitid 95
#define KVM_ARM_SET_DEVICE_ADDR 1074835115
#define __NR_getpgrp 111
#define SNDRV_SEQ_IOCTL_DELETE_PORT 1084773153
#define SIOCAIPXITFCRT 35296
#define KVM_X86_SETUP_MCE 1074310812
#define __NR_timer_delete 111
#define KVM_GET_DEBUGREGS 2155916961
#define __NR_getpriority 141
#define __NR_uselib 134
#define DRM_IOCTL_GEM_CLOSE 1074291721
#define __NR_getsockopt 209
#define KVM_SET_BOOT_CPU_ID 44664
#define __NR_sched_getparam 121
#define DRM_IOCTL_GEM_FLINK 3221775370
#define __NR_signalfd 282
#define __NR_symlink 88
#define KEYCTL_SET_TIMEOUT 15
#define KVM_HAS_DEVICE_ATTR 1075359459
#define KEYCTL_SETPERM 5
#define KVM_SET_IDENTITY_MAP_ADDR 1074310728
#define BPF_MAP_LOOKUP_ELEM 1
#define SCTP_AUTOCLOSE 4
#define KVM_IRQ_LINE 1074310753
#define SIOCGSKNS 35148
#define DRM_IOCTL_VERSION 3225445376
#define __NR_mremap 216
#define MSG_STAT 11
#define GIO_CMAP 19312
#define DRM_IOCTL_RM_MAP 1076388891
#define KVM_GET_MSR_INDEX_LIST 3221532162
#define __NR_getrandom 278
#define KVM_S390_UCAS_MAP 1075359312
#define DRM_IOCTL_PRIME_FD_TO_HANDLE 3222037550
#define SIOCOUTQNSD 35147
#define TIOCSBRK 21543
#define BT_SNDMTU 12
#define PR_SET_PTRACER 1499557217
#define __NR_mq_open 180
#define SNDRV_SEQ_IOCTL_GET_CLIENT_POOL 3227013963
#define __NR_pkey_free 290
#define KDGKBDIACR 19274
#define EVIOCGABS0 2149074240
#define ION_IOC_MAP 3221768450
#define ALG_SET_IV 2
#define IPC_SET 1
#define IPC_PRIVATE 0
#define TUNGETIFF 2147767506
#define __NR_msync 227
#define KDSETLED 19250
#define DRM_IOCTL_GET_CAP 3222299660
#define __NR_msgctl 187
#define UFFD_API 170
#define PIO_UNISCRNMAP 19306
#define KVM_GET_VCPU_EVENTS 2151722655
#define BT_FLUSHABLE 8
#define SIOCPROTOPRIVATE_END 35311
#define SNDRV_CTL_IOCTL_ELEM_INFO 3239073041
#define KVM_GET_DIRTY_LOG 1074835010
#define __NR_setreuid 145
#define __NR_set_thread_area 205
#define EVIOCSREP 1074283779
#define EVIOCGKEY64 2151695640
#define __NR_sched_setattr 274
#define SCTP_INIT 0
#define __NR_sched_rr_get_interval 127
#define SIOCBRDELBR 35233
#define RNDCLEARPOOL 20998
#define PIO_UNIMAP 19303
#define BTPROTO_RFCOMM 3
#define __NR_get_kernel_syms 177
#define __NR_rt_sigqueueinfo 138
#define EVIOCGABS3F 2149074303
#define __NR_semctl 191
#define KVM_SET_MP_STATE 1074048665
#define SNDRV_CTL_IOCTL_ELEM_UNLOCK 1077957909
#define __NR_fadvise64 223
#define SIOCSPGRP 35074
#define CMTPCONNDEL 1074021321
#define __NR_getgroups 158
#define SIOCBRADDBR 35232
#define F_SETOWN 8
#define SIOCKCMCLONE 35298
#define __NR_nanosleep 101
#define __NR_syz_fuseblk_mount 1000005
#define TIOCSCTTY 21518
#define __NR_mkdir 83
#define EVIOCGBITSW64 2151695653
#define __NR_process_vm_writev 271
#define __NR_dup3 24
#define DRM_IOCTL_LOCK 1074291754
#define __NR_ioprio_set 30
#define DRM_IOCTL_ADD_MAP 3223872533
#define KVM_GET_XCRS 2173218470
#define KVM_SET_SIGNAL_MASK 1074048651
#define SNDRV_CTL_IOCTL_TLV_READ 3221771546
#define PR_SET_SECCOMP 22
#define __NR_setuid 146
#define EVIOCGABS2F 2149074287
#define SCTP_INITMSG 2
#define SEM_STAT 18
#define __NR_chown 92
#define ION_IOC_FREE 3221506305
#define PTRACE_SETSIGINFO 16899
#define PTRACE_PEEKUSR 3
#define __NR_setgid 144
#define HIDPGETCONNINFO 2147764435
#define __NR_ppoll 73
#define BPF_MAP_UPDATE_ELEM 2
#define TE_IOCTL_LAUNCH_OPERATION 3224925204
#define VT_OPENQRY 22016
#define __NR_setregid 143
#define DRM_IOCTL_AGP_ALLOC 3223348276
#define SCTP_MAXSEG 13
#define KVM_NMI 44698
#define KVM_SET_TSC_KHZ 44706
#define SNDRV_SEQ_IOCTL_DELETE_QUEUE 1082938163
#define SETVAL 16
#define KVM_SET_XCRS 1099476647
#define __NR_setresuid 147
#define ION_IOC_SYNC 3221768455
#define EVIOCSKEYCODE 1074283780
#define KEYCTL_INSTANTIATE 12
#define __NR_ustat 136
#define __NR_capset 91
#define __NR_timer_gettime 108
#define GETVAL 12
#define KVM_GET_VCPU_MMAP_SIZE 44548
#define TUNSETLINK 1074025677
#define KVM_GET_CLOCK 2150674044
#define PERF_EVENT_IOC_ID 2148017159
#define SNDRV_CTL_IOCTL_ELEM_REMOVE 3225441561
#define __NR_fanotify_init 262
#define SNDRV_CTL_IOCTL_RAWMIDI_PREFER_SUBDEVICE 1074025794
#define SCTP_PRIMARY_ADDR 6
#define KDGKBMODE 19268
#define __NR_seccomp 277
#define L2CAP_OPTIONS 1
#define __NR_close 57
#define BTPROTO_CMTP 5
#define KVM_SIGNAL_MSI 1075883685
#define __NR_rt_sigaction 134
#define SNDRV_TIMER_IOCTL_GSTATUS 3226489861
#define __NR_lchown 94
#define SCTP_RECVRCVINFO 32
#define TCFLSH 21515
#define __NR_mbind 235
#define __NR_fanotify_mark 263
#define __NR_mount 40
#define __NR_getxattr 8
#define KVM_SET_MSRS 1074310793
#define __NR_remap_file_pages 234
#define GETALL 13
#define BNEPGETCONNINFO 2147762899
#define __NR_utimensat 88
#define RFCOMM_LM 3
#define __NR_io_cancel 3
#define SIOCIPXNCPCONN 35299
#define BPF_MAP_DELETE_ELEM 3
#define SNDRV_SEQ_IOCTL_CREATE_QUEUE 3230421810
#define AT_FDCWD 18446744073709551516
#define __NR_epoll_create 213