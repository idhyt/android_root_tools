#include "common.h"
#include "type_flags_maps.h"



#define int8 char
#define int16 short
#define int32 int
#define int64 long
#define int8be char
#define int16be short
#define int32be int
#define int64be long
#define intptr int*
#define get_uid int
#define get_pid int
#define get_gid int



long get_map_page() {
	printf("get a page by [mmap/munmap/mremap/madvise]");
	return 0;
}



struct sockaddr_generic {
	int16 sa_family;
	char * sa_data;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_generic *st_sockaddr_generic = (struct sockaddr_generic *)rand_buf;
st_sockaddr_generic->sa_family = socket_domain[randnum(1)%ARRAY_SIZE(socket_domain)];
st_sockaddr_generic->sa_data = randbuf(0xff);


struct sockaddr_storage_generic {
	int16 sa_family;
	char * sa_data;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_storage_generic *st_sockaddr_storage_generic = (struct sockaddr_storage_generic *)rand_buf;
st_sockaddr_storage_generic->sa_family = socket_domain[randnum(1)%ARRAY_SIZE(socket_domain)];
st_sockaddr_storage_generic->sa_data = randbuf(0xff);


struct send_msghdr {
	char * msg_name;
	int32 msg_namelen;
	char * msg_iov;
	intptr msg_iovlen;
	char * msg_control;
	intptr msg_controllen;
	int32 msg_flags;
};

char *rand_buf = (char *)randbuf(0xff);
struct send_msghdr *st_send_msghdr = (struct send_msghdr *)rand_buf;
st_send_msghdr->msg_name = randbuf(0xff);
st_send_msghdr->msg_namelen = randnum(2);
st_send_msghdr->msg_iov = randbuf(0xff);
st_send_msghdr->msg_iovlen = randnum(2);
st_send_msghdr->msg_control = randbuf(0xff);
st_send_msghdr->msg_controllen = randnum(2);
st_send_msghdr->msg_flags = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct send_mmsghdr {
	send_msghdr msg_hdr;
	int32 msg_len;
};

struct recv_msghdr {
	char * msg_name;
	int32 msg_namelen;
	char * msg_iov;
	intptr msg_iovlen;
	char * msg_control;
	intptr msg_controllen;
	int32 msg_flags;
};

char *rand_buf = (char *)randbuf(0xff);
struct recv_msghdr *st_recv_msghdr = (struct recv_msghdr *)rand_buf;
st_recv_msghdr->msg_name = randbuf(0xff);
st_recv_msghdr->msg_namelen = randnum(2);
st_recv_msghdr->msg_iov = randbuf(0xff);
st_recv_msghdr->msg_iovlen = randnum(2);
st_recv_msghdr->msg_control = randbuf(0xff);
st_recv_msghdr->msg_controllen = randnum(2);


struct recv_mmsghdr {
	recv_msghdr msg_hdr;
	int32 msg_len;
};

struct cmsghdr {
	intptr cmsg_len;
	int32 cmsg_level;
	int32 cmsg_type;
	char * data;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr *st_cmsghdr = (struct cmsghdr *)rand_buf;
st_cmsghdr->cmsg_len = randnum(2);
st_cmsghdr->cmsg_level = cmsg_levels[randnum(1)%ARRAY_SIZE(cmsg_levels)];
st_cmsghdr->data = randbuf(0xff);


struct ifreq_SIOCGIFINDEX {
	devname ifr_ifrn;
	ifindex ifr_ifru;
	char * pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct ifreq_SIOCGIFINDEX *st_ifreq_SIOCGIFINDEX = (struct ifreq_SIOCGIFINDEX *)rand_buf;
st_ifreq_SIOCGIFINDEX->pad = randbuf(0xff);


struct ifreq {
	devname ifr_ifrn;
	get_ifr_ifru ifr_ifru;
};

struct syzn_devname {
	int8 s;
	int8 y;
	int8 z;
	int8 N;
	int8 0;
};

struct ifmap {
	int64 mem_start;
	int64 mem_end;
	int16 base_addr;
	int8 irq;
	int8 dma;
	int8 port;
};

struct if_settings {
	int32 type;
	int32 size;
	get_ifs_ifsu ifs_ifsu;
};

struct raw_hdlc_proto {
	int16 encode;
	int16 parity;
};

struct cisco_proto {
	int32 val;
	int32 timeout;
};

struct fr_proto {
	int32 t391;
	int32 t392;
	int32 n391;
	int32 n392;
	int32 n393;
	int16 lmi;
	int16 dce;
};

struct fr_proto_pvc {
	int32 dlcl;
};

struct fr_proto_pvc_info {
	int32 dlci;
	devname master;
};

struct sync_serial_settings {
	int32 rate;
	int32 type;
	int16 loop;
};

struct te1_settings {
	int32 rate;
	int32 type;
	int16 loop;
	int32 slot;
};

struct ifconf_buf {
	int32 ifc_len;
	char * ifcu_buf;
};

char *rand_buf = (char *)randbuf(0xff);
struct ifconf_buf *st_ifconf_buf = (struct ifconf_buf *)rand_buf;
st_ifconf_buf->ifc_len = randnum(2);
st_ifconf_buf->ifcu_buf = randbuf(0xff);


struct ifconf_req {
	int32 ifc_len;
	char * ifcu_req;
};

char *rand_buf = (char *)randbuf(0xff);
struct ifconf_req *st_ifconf_req = (struct ifconf_req *)rand_buf;
st_ifconf_req->ifc_len = randnum(2);
st_ifconf_req->ifcu_req = randbuf(0xff);


struct brctl_arg_get {
	int64 cmd;
	char * buf;
	int64 indices;
};

char *rand_buf = (char *)randbuf(0xff);
struct brctl_arg_get *st_brctl_arg_get = (struct brctl_arg_get *)rand_buf;
st_brctl_arg_get->buf = randbuf(0xff);


struct brctl_arg_add_del {
	int64 cmd;
	char * devname;
	int64 pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct brctl_arg_add_del *st_brctl_arg_add_del = (struct brctl_arg_add_del *)rand_buf;
st_brctl_arg_add_del->devname = randbuf(0xff);


struct brctl_arg_generic {
	int64 a0;
	int64 a1;
	int64 a2;
};

struct dlci_add {
	get_devname devname;
	int16 dlci;
};

struct sockaddr_alg {
	int16 family;
	char * type;
	int32 feat;
	int32 mask;
	char * name;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_alg *st_sockaddr_alg = (struct sockaddr_alg *)rand_buf;
st_sockaddr_alg->type = salg_type[randnum(1)%ARRAY_SIZE(salg_type)];
st_sockaddr_alg->feat = af_alg_type[randnum(1)%ARRAY_SIZE(af_alg_type)];
st_sockaddr_alg->mask = af_alg_type[randnum(1)%ARRAY_SIZE(af_alg_type)];
st_sockaddr_alg->name = salg_name[randnum(1)%ARRAY_SIZE(salg_name)];


struct msghdr_alg {
	intptr addr;
	int32 addrlen;
	char * vec;
	intptr vlen;
	char * ctrl;
	intptr ctrllen;
	int32 f;
};

char *rand_buf = (char *)randbuf(0xff);
struct msghdr_alg *st_msghdr_alg = (struct msghdr_alg *)rand_buf;
st_msghdr_alg->vec = randbuf(0xff);
st_msghdr_alg->vlen = randnum(2);
st_msghdr_alg->ctrl = randbuf(0xff);
st_msghdr_alg->f = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct cmsghdr_alg_iv {
	intptr len;
	int32 level;
	int32 type;
	int32 ivlen;
	char * iv;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_alg_iv *st_cmsghdr_alg_iv = (struct cmsghdr_alg_iv *)rand_buf;
st_cmsghdr_alg_iv->len = randnum(2);
st_cmsghdr_alg_iv->ivlen = randnum(2);
st_cmsghdr_alg_iv->iv = randbuf(0xff);


struct cmsghdr_alg_op {
	intptr len;
	int32 level;
	int32 type;
	int32 op;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_alg_op *st_cmsghdr_alg_op = (struct cmsghdr_alg_op *)rand_buf;
st_cmsghdr_alg_op->len = randnum(2);


struct cmsghdr_alg_assoc {
	intptr len;
	int32 level;
	int32 type;
	int32 assoc;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_alg_assoc *st_cmsghdr_alg_assoc = (struct cmsghdr_alg_assoc *)rand_buf;
st_cmsghdr_alg_assoc->len = randnum(2);


struct ax25_pair {
	sock_ax25 fd0;
	sock_ax25 fd1;
};

struct ax25_address {
	char * ax25_call;
};

char *rand_buf = (char *)randbuf(0xff);
struct ax25_address *st_ax25_address = (struct ax25_address *)rand_buf;
st_ax25_address->ax25_call = randbuf(0xff);


struct sockaddr_ax25 {
	int16 sax25_family;
	ax25_address sax25_call;
	int32 sax25_ndigis;
};

struct full_sockaddr_ax25 {
	sockaddr_ax25 fsa_ax25;
	char * fsa_digipeater;
};

char *rand_buf = (char *)randbuf(0xff);
struct full_sockaddr_ax25 *st_full_sockaddr_ax25 = (struct full_sockaddr_ax25 *)rand_buf;
st_full_sockaddr_ax25->fsa_digipeater = randbuf(0xff);


struct sockaddr_hci {
	int16 fam;
	int16 dev;
	int16 chan;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_hci *st_sockaddr_hci = (struct sockaddr_hci *)rand_buf;
st_sockaddr_hci->chan = bt_chi_chan[randnum(1)%ARRAY_SIZE(bt_chi_chan)];


struct hci_inquiry_req {
	int16 dev;
	int16 flags;
	int8 lap0;
	int8 lap1;
	int8 lap2;
	int8 len;
	int8 rsp;
};

struct hci_ufilter {
	int32 type;
	int32 event0;
	int32 event1;
	int16 opcode;
};

struct sockaddr_sco {
	int16 fam;
	bdaddr addr;
};

struct sockaddr_l2 {
	int16 fam;
	int16 psm;
	bdaddr addr;
	int16 cid;
	int8 typ;
};

struct bdaddr {
	int8 addr0;
	int8 addr1;
	int8 addr2;
	int8 addr3;
	int8 addr4;
	int8 addr5;
};

struct bt_security {
	int8 lev;
	int8 keysize;
};

struct l2cap_options {
	int16 omtu;
	int16 imtu;
	int16 flushto;
	int8 mode;
	int8 fcs;
	int8 maxtx;
	int16 txwin;
};

struct l2cap_conninfo {
	int16 handle;
	int8 devcls0;
	int8 devcls1;
	int8 devcls2;
};

struct sockaddr_rc {
	int16 fam;
	bdaddr addr;
	int8 chan;
};

struct hidp_connadd_req {
	sock ctrlsk;
	sock intrsk;
	int16 parser;
	int16 rdsize;
	char * rddata;
	int8 country;
	int8 subclas;
	int16 vendor;
	int16 product;
	int16 version;
	int32 flags;
	int32 idleto;
	char * name;
};

char *rand_buf = (char *)randbuf(0xff);
struct hidp_connadd_req *st_hidp_connadd_req = (struct hidp_connadd_req *)rand_buf;
st_hidp_connadd_req->rddata = randbuf(0xff);
st_hidp_connadd_req->name = randbuf(0xff);


struct hidp_conndel_req {
	bdaddr addr;
	int32 flags;
};

struct hidp_conninfo {
	bdaddr addr;
	int32 flags;
	int16 state;
	int16 vendor;
	int16 product;
	int16 ver;
	char * name;
};

char *rand_buf = (char *)randbuf(0xff);
struct hidp_conninfo *st_hidp_conninfo = (struct hidp_conninfo *)rand_buf;
st_hidp_conninfo->name = randbuf(0xff);


struct hidp_connlist_req {
	int32 cnum;
	char * ci;
};

char *rand_buf = (char *)randbuf(0xff);
struct hidp_connlist_req *st_hidp_connlist_req = (struct hidp_connlist_req *)rand_buf;
st_hidp_connlist_req->cnum = randnum(2);
st_hidp_connlist_req->ci = randbuf(0xff);


struct cmtp_connadd_req {
	get_sock sock;
	int32 flags;
};

struct cmtp_conndel_req {
	bdaddr addr;
	int32 flags;
};

struct cmtp_conninfo {
	bdaddr addr;
	int32 flags;
	int16 state;
	int32 num;
};

struct cmtp_connlist_req {
	int32 cnum;
	char * ci;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmtp_connlist_req *st_cmtp_connlist_req = (struct cmtp_connlist_req *)rand_buf;
st_cmtp_connlist_req->cnum = randnum(2);
st_cmtp_connlist_req->ci = randbuf(0xff);


struct bnep_connadd_req {
	get_sock sock;
	int32 flags;
	int16 role;
	char * device;
};

char *rand_buf = (char *)randbuf(0xff);
struct bnep_connadd_req *st_bnep_connadd_req = (struct bnep_connadd_req *)rand_buf;
st_bnep_connadd_req->device = randbuf(0xff);


struct bnep_conndel_req {
	int32 flags;
	char * dst;
};

char *rand_buf = (char *)randbuf(0xff);
struct bnep_conndel_req *st_bnep_conndel_req = (struct bnep_conndel_req *)rand_buf;
st_bnep_conndel_req->dst = randbuf(0xff);


struct bnep_conninfo {
	int32 flags;
	int16 role;
	int16 state;
	char * dst;
	char * device;
};

char *rand_buf = (char *)randbuf(0xff);
struct bnep_conninfo *st_bnep_conninfo = (struct bnep_conninfo *)rand_buf;
st_bnep_conninfo->dst = randbuf(0xff);
st_bnep_conninfo->device = randbuf(0xff);


struct bnep_connlist_req {
	int32 cnum;
	char * ci;
};

char *rand_buf = (char *)randbuf(0xff);
struct bnep_connlist_req *st_bnep_connlist_req = (struct bnep_connlist_req *)rand_buf;
st_bnep_connlist_req->cnum = randnum(2);
st_bnep_connlist_req->ci = randbuf(0xff);


struct sock_in_pair {
	sock_in f0;
	sock_in f1;
};

struct sockaddr_in {
	int16 family;
	int16 port;
	ipv4_addr addr;
	char * pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_in *st_sockaddr_in = (struct sockaddr_in *)rand_buf;
st_sockaddr_in->pad = randbuf(0xff);


struct sockaddr_storage_in {
	sockaddr_in addr;
	char * pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_storage_in *st_sockaddr_storage_in = (struct sockaddr_storage_in *)rand_buf;
st_sockaddr_storage_in->pad = randbuf(0xff);


struct xfrm_filter {
	xfrm_userpolicy_info info;
	xfrm_user_tmpl tmpl;
};

struct xfrm_userpolicy_info {
	xfrm_selector sel;
	xfrm_lifetime_cfg lft;
	xfrm_lifetime_cur curlft;
	int32 priority;
	int32 index;
	int8 dir;
	int8 action;
	int8 flags;
	int8 share;
};

char *rand_buf = (char *)randbuf(0xff);
struct xfrm_userpolicy_info *st_xfrm_userpolicy_info = (struct xfrm_userpolicy_info *)rand_buf;
st_xfrm_userpolicy_info->action = xfrm_policy_actions[randnum(1)%ARRAY_SIZE(xfrm_policy_actions)];
st_xfrm_userpolicy_info->flags = xfrm_policy_flags[randnum(1)%ARRAY_SIZE(xfrm_policy_flags)];
st_xfrm_userpolicy_info->share = xfrm_policy_shares[randnum(1)%ARRAY_SIZE(xfrm_policy_shares)];


struct xfrm_selector {
	xfrm_address daddr;
	xfrm_address saddr;
	int16 dport;
	int16 dport_mask;
	int16 sport;
	int16 sport_mask;
	int16 family;
	int8 prefixlen_d;
	int8 prefixlen_s;
	int8 proto;
	get_ifindex ifindex;
	uid user;
};

char *rand_buf = (char *)randbuf(0xff);
struct xfrm_selector *st_xfrm_selector = (struct xfrm_selector *)rand_buf;
st_xfrm_selector->family = socket_domain[randnum(1)%ARRAY_SIZE(socket_domain)];
st_xfrm_selector->prefixlen_d = xfrm_prefixlens[randnum(1)%ARRAY_SIZE(xfrm_prefixlens)];
st_xfrm_selector->prefixlen_s = xfrm_prefixlens[randnum(1)%ARRAY_SIZE(xfrm_prefixlens)];


struct xfrm_lifetime_cfg {
	int64 soft_byte_limit;
	int64 hard_byte_limit;
	int64 soft_packet_limit;
	int64 hard_packet_limit;
	int64 soft_add_expires_seconds;
	int64 hard_add_expires_seconds;
	int64 soft_use_expires_seconds;
	int64 hard_use_expires_seconds;
};

struct xfrm_lifetime_cur {
	int64 bytes;
	int64 packets;
	int64 add_time;
	int64 use_time;
};

struct xfrm_user_tmpl {
	xfrm_id id;
	int16 family;
	xfrm_address saddr;
	int32 reqid;
	int8 mode;
	int8 share;
	int8 optional;
	int32 aalgos;
	int32 ealgos;
	int32 calgos;
};

char *rand_buf = (char *)randbuf(0xff);
struct xfrm_user_tmpl *st_xfrm_user_tmpl = (struct xfrm_user_tmpl *)rand_buf;
st_xfrm_user_tmpl->family = socket_domain[randnum(1)%ARRAY_SIZE(socket_domain)];
st_xfrm_user_tmpl->mode = xfrm_modes[randnum(1)%ARRAY_SIZE(xfrm_modes)];
st_xfrm_user_tmpl->share = xfrm_policy_shares[randnum(1)%ARRAY_SIZE(xfrm_policy_shares)];


struct xfrm_id {
	xfrm_address daddr;
	int32 spi;
	int8 proto;
};

struct ip_mreq {
	ipv4_addr imr_multiaddr;
	ipv4_addr imr_interface;
};

struct ip_mreqn {
	ipv4_addr imr_multiaddr;
	ipv4_addr imr_address;
	ifindex imr_;
};

struct ip_mreq_source {
	ipv4_addr imr_multiaddr;
	ipv4_addr imr_interface;
	ipv4_addr imr_sourceaddr;
};

struct ip_msfilter {
	ipv4_addr imsf_multiaddr;
	ipv4_addr imsf_interface;
	int32 imsf_fmode;
	int32 imsf_numsrc;
	char * imsf_slist;
};

char *rand_buf = (char *)randbuf(0xff);
struct ip_msfilter *st_ip_msfilter = (struct ip_msfilter *)rand_buf;
st_ip_msfilter->imsf_fmode = ip_msfilter_mode[randnum(1)%ARRAY_SIZE(ip_msfilter_mode)];
st_ip_msfilter->imsf_numsrc = randnum(2);
st_ip_msfilter->imsf_slist = randbuf(0xff);


struct in_pktinfo {
	ifindex ipi_;
	ipv4_addr ipi_spec_dst;
	ipv4_addr ipi_addr;
};

struct group_req_in {
	int32 gr_interface;
	sockaddr_storage_in gr_group;
};

struct group_source_req_in {
	int32 gsr_interface;
	sockaddr_storage_in gsr_group;
	sockaddr_storage_in gsr_source;
};

struct group_filter_in {
	int32 gf_interface;
	sockaddr_storage_in gf_group;
	int32 gf_fmode;
	int32 gf_numsrc;
	char * gf_slist;
};

char *rand_buf = (char *)randbuf(0xff);
struct group_filter_in *st_group_filter_in = (struct group_filter_in *)rand_buf;
st_group_filter_in->gf_fmode = ip_msfilter_mode[randnum(1)%ARRAY_SIZE(ip_msfilter_mode)];
st_group_filter_in->gf_numsrc = randnum(2);
st_group_filter_in->gf_slist = randbuf(0xff);


struct rtentry_in {
	int64 rt_pad1;
	sockaddr_in rt_dst;
	sockaddr_in rt_gateway;
	sockaddr_in rt_genmask;
	int16 rt_flags;
	int16 rt_pad2;
	int64 rt_pad3;
	intptr rt_pad4;
	int16 rt_metric;
	char * rt_dev;
	int64 rt_mtu;
	int64 rt_window;
	int16 rt_irtt;
};

char *rand_buf = (char *)randbuf(0xff);
struct rtentry_in *st_rtentry_in = (struct rtentry_in *)rand_buf;
st_rtentry_in->rt_flags = rt_flags[randnum(1)%ARRAY_SIZE(rt_flags)];
st_rtentry_in->rt_dev = randbuf(0xff);


struct sockaddr_ethernet {
	int16 sa_family;
	mac_addr sa_data;
	char * pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_ethernet *st_sockaddr_ethernet = (struct sockaddr_ethernet *)rand_buf;
st_sockaddr_ethernet->sa_family = sockaddr_ethernet_family[randnum(1)%ARRAY_SIZE(sockaddr_ethernet_family)];
st_sockaddr_ethernet->pad = randbuf(0xff);


struct arpreq_in {
	sockaddr_in arp_pa;
	sockaddr_ethernet arp_ha;
	int32 arp_flags;
	sockaddr_in arp_netmask;
	devname arp_dev;
};

char *rand_buf = (char *)randbuf(0xff);
struct arpreq_in *st_arpreq_in = (struct arpreq_in *)rand_buf;
st_arpreq_in->arp_flags = arp_flags[randnum(1)%ARRAY_SIZE(arp_flags)];


struct ifreq_in {
	devname ifr_ifrn;
	ifr_ifru_in ifr_ifru;
};

struct sock_in6_pair {
	sock_in6 f0;
	sock_in6 f1;
};

struct sockaddr_in6 {
	int16 family;
	int16 port;
	int32 flow;
	ipv6_addr addr;
	int32 scope;
};

struct sockaddr_storage_in6 {
	sockaddr_in6 addr;
	char * pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_storage_in6 *st_sockaddr_storage_in6 = (struct sockaddr_storage_in6 *)rand_buf;
st_sockaddr_storage_in6->pad = randbuf(0xff);


struct mif6ctl {
	int16 mif6c_mifi;
	int8 mif6c_flags;
	int8 vifc_threshold;
	int16 mif6c_pifi;
	int32 vifc_rate_limit;
};

char *rand_buf = (char *)randbuf(0xff);
struct mif6ctl *st_mif6ctl = (struct mif6ctl *)rand_buf;
st_mif6ctl->mif6c_flags = mif6c_flags[randnum(1)%ARRAY_SIZE(mif6c_flags)];


struct mf6cctl {
	sockaddr_in6 mf6cc_origin;
	sockaddr_in6 mf6cc_mcastgrp;
	int16 mf6cc_parent;
	char * mf6cc_ifset;
};

char *rand_buf = (char *)randbuf(0xff);
struct mf6cctl *st_mf6cctl = (struct mf6cctl *)rand_buf;
st_mf6cctl->mf6cc_ifset = randbuf(0xff);


struct ipv6_mreq {
	ipv6_addr multi;
	get_ifindex ifindex;
};

struct in6_flowlabel_req {
	ipv6_addr flr_dst;
	int32 flr_label;
	int8 flr_action;
	int8 flr_share;
	int16 flr_flags;
	int16 flr_expires;
	int16 flr_linger;
	int32 __flr_pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct in6_flowlabel_req *st_in6_flowlabel_req = (struct in6_flowlabel_req *)rand_buf;
st_in6_flowlabel_req->flr_action = flr_actions[randnum(1)%ARRAY_SIZE(flr_actions)];
st_in6_flowlabel_req->flr_share = flr_shares[randnum(1)%ARRAY_SIZE(flr_shares)];
st_in6_flowlabel_req->flr_flags = flr_flags[randnum(1)%ARRAY_SIZE(flr_flags)];


struct group_req_in6 {
	int32 gr_interface;
	sockaddr_storage_in6 gr_group;
};

struct group_source_req_in6 {
	int32 gsr_interface;
	sockaddr_storage_in6 gsr_group;
	sockaddr_storage_in6 gsr_source;
};

struct group_filter_in6 {
	int32 gf_interface;
	sockaddr_storage_in6 gf_group;
	int32 gf_fmode;
	int32 gf_numsrc;
	char * gf_slist;
};

char *rand_buf = (char *)randbuf(0xff);
struct group_filter_in6 *st_group_filter_in6 = (struct group_filter_in6 *)rand_buf;
st_group_filter_in6->gf_fmode = ip_msfilter_mode[randnum(1)%ARRAY_SIZE(ip_msfilter_mode)];
st_group_filter_in6->gf_numsrc = randnum(2);
st_group_filter_in6->gf_slist = randbuf(0xff);


struct in6_pktinfo {
	ipv6_addr ipi6_addr;
	ifindex ipi6_;
};

struct in6_rtmsg {
	ipv6_addr rtmsg_dst;
	ipv6_addr rtmsg_src;
	ipv6_addr rtmsg_gateway;
	int32 rtmsg_type;
	int16 rtmsg_dst_len;
	int16 rtmsg_src_len;
	int32 rtmsg_metric;
	int64 rtmsg_info;
	int32 rtmsg_flags;
	ifindex rtmsg_;
};

char *rand_buf = (char *)randbuf(0xff);
struct in6_rtmsg *st_in6_rtmsg = (struct in6_rtmsg *)rand_buf;
st_in6_rtmsg->rtmsg_metric = rtmsg_metrics[randnum(1)%ARRAY_SIZE(rtmsg_metrics)];
st_in6_rtmsg->rtmsg_flags = rtmsg_flags[randnum(1)%ARRAY_SIZE(rtmsg_flags)];


struct in6_ifreq {
	ipv6_addr ifr6_addr;
	int32 ifr6_prefixlen;
	ifindex ifr6_;
};

struct dccp_pair {
	sock_dccp f0;
	sock_dccp f1;
};

struct dccp6_pair {
	sock_dccp6 f0;
	sock_dccp6 f1;
};

struct icmp_pair {
	sock_icmp f0;
	sock_icmp f1;
};

struct icmp6_pair {
	sock_icmp6 f0;
	sock_icmp6 f1;
};

struct sctp_pair {
	sock_sctp fd0;
	sock_sctp fd1;
};

struct msghdr_sctp {
	char * addr;
	int32 addrlen;
	char * vec;
	intptr vlen;
	char * ctrl;
	intptr ctrllen;
	int32 f;
};

char *rand_buf = (char *)randbuf(0xff);
struct msghdr_sctp *st_msghdr_sctp = (struct msghdr_sctp *)rand_buf;
st_msghdr_sctp->addr = randbuf(0xff);
st_msghdr_sctp->addrlen = randnum(2);
st_msghdr_sctp->vec = randbuf(0xff);
st_msghdr_sctp->vlen = randnum(2);
st_msghdr_sctp->ctrl = randbuf(0xff);
st_msghdr_sctp->ctrllen = randnum(2);
st_msghdr_sctp->f = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct cmsghdr_sctp_init {
	intptr len;
	int32 level;
	int32 type;
	sctp_initmsg msg;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_sctp_init *st_cmsghdr_sctp_init = (struct cmsghdr_sctp_init *)rand_buf;
st_cmsghdr_sctp_init->len = randnum(2);


struct sctp_initmsg {
	int16 nostr;
	int16 minstr;
	int16 maxatt;
	int16 maxinit;
};

struct cmsghdr_sctp_sndrcv {
	intptr len;
	int32 level;
	int32 type;
	sctp_sndrcvinfo msg;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_sctp_sndrcv *st_cmsghdr_sctp_sndrcv = (struct cmsghdr_sctp_sndrcv *)rand_buf;
st_cmsghdr_sctp_sndrcv->len = randnum(2);


struct sctp_sndrcvinfo {
	int16 stream;
	int16 ssn;
	int16 flags;
	int32 ppid;
	int32 context;
	int32 ttl;
	int32 tsn;
	int32 cumtsn;
	int32 assoc;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_sndrcvinfo *st_sctp_sndrcvinfo = (struct sctp_sndrcvinfo *)rand_buf;
st_sctp_sndrcvinfo->flags = sctp_sndrcv_flags[randnum(1)%ARRAY_SIZE(sctp_sndrcv_flags)];


struct cmsghdr_sctp_sndinfo {
	intptr len;
	int32 level;
	int32 type;
	sctp_sndinfo msg;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_sctp_sndinfo *st_cmsghdr_sctp_sndinfo = (struct cmsghdr_sctp_sndinfo *)rand_buf;
st_cmsghdr_sctp_sndinfo->len = randnum(2);


struct sctp_sndinfo {
	int16 sid;
	int16 flags;
	int32 ppid;
	int32 context;
	int32 assoc;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_sndinfo *st_sctp_sndinfo = (struct sctp_sndinfo *)rand_buf;
st_sctp_sndinfo->flags = sctp_sndrcv_flags[randnum(1)%ARRAY_SIZE(sctp_sndrcv_flags)];


struct sctp_sack_info {
	int32 assoc;
	int32 delay;
	int32 freq;
};

struct sctp_assoc_value {
	int32 assoc;
	int32 value;
};

struct sctp_event_subscribe {
	char * ev;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_event_subscribe *st_sctp_event_subscribe = (struct sctp_event_subscribe *)rand_buf;
st_sctp_event_subscribe->ev = randbuf(0xff);


struct sctp_paddrparams {
	int32 assoc;
	sockaddr_storage_sctp addr;
	int32 interv;
	int16 maxrxt;
	int32 pathmtu;
	int32 sackdel;
	int32 spp;
	int32 flags;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_paddrparams *st_sctp_paddrparams = (struct sctp_paddrparams *)rand_buf;
st_sctp_paddrparams->flags = sctp_spp_flags[randnum(1)%ARRAY_SIZE(sctp_spp_flags)];


struct sctp_authkey {
	int32 assoc;
	int16 keynum;
	int16 keylen;
	char * key;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_authkey *st_sctp_authkey = (struct sctp_authkey *)rand_buf;
st_sctp_authkey->keylen = randnum(2);
st_sctp_authkey->key = randbuf(0xff);


struct sctp_prim {
	int32 assoc;
	sockaddr_storage_sctp addr;
};

struct sctp_rtoinfo {
	int32 assoc;
	int32 init;
	int32 max;
	int32 min;
};

struct sctp_assocparams {
	int32 assoc;
	int16 maxrxt;
	int16 ndest;
	int32 prwnd;
	int32 lrwnd;
	int32 life;
};

struct sctp_hmacalgo {
	int32 nident;
	char * ident;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_hmacalgo *st_sctp_hmacalgo = (struct sctp_hmacalgo *)rand_buf;
st_sctp_hmacalgo->nident = randnum(2);
st_sctp_hmacalgo->ident = randbuf(0xff);


struct sctp_authkeyid {
	int32 assoc;
	int16 keyn;
};

struct sctp_paddrthlds {
	int32 assoc;
	sockaddr_storage_sctp addr;
	int16 maxrxt;
	int16 pfthld;
};

struct sctp_paddrinfo {
	int32 assoc;
	sockaddr_storage_sctp addr;
	int32 state;
	int32 cwnd;
	int32 srtt;
	int32 rto;
	int32 mtu;
};

struct sctp_status {
	int32 assoc;
	int32 state;
	int32 rwnd;
	int16 unpack;
	int16 pend;
	int16 in;
	int16 out;
	int32 frag;
	sctp_paddrinfo prim;
};

struct sctp_getaddrs_old {
	int32 assoc;
	int32 num;
	char * addrs;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_getaddrs_old *st_sctp_getaddrs_old = (struct sctp_getaddrs_old *)rand_buf;
st_sctp_getaddrs_old->addrs = randbuf(0xff);


struct sctp_getaddrs {
	int32 assoc;
	int32 num;
	int8 addrs;
};

struct sctp_peeloff_arg_t {
	int32 assoc;
	int32 sd;
};

struct sctp_assoc_stats {
	int32 assoc;
	sockaddr_storage_sctp rto;
	char * status;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_assoc_stats *st_sctp_assoc_stats = (struct sctp_assoc_stats *)rand_buf;
st_sctp_assoc_stats->status = randbuf(0xff);


struct sctp_assoc_ids {
	int32 num;
	char * assoc;
};

char *rand_buf = (char *)randbuf(0xff);
struct sctp_assoc_ids *st_sctp_assoc_ids = (struct sctp_assoc_ids *)rand_buf;
st_sctp_assoc_ids->assoc = randbuf(0xff);


struct sctp_authchunks {
	int8 chunk;
};

struct sctp_setadaptation {
	int32 adpt;
};

struct tcp_pair {
	sock_tcp f0;
	sock_tcp f1;
};

struct tcp6_pair {
	sock_tcp6 f0;
	sock_tcp6 f1;
};

struct tcp_repair_window {
	int32 snd_wl1;
	int32 snd_wnd;
	int32 max_window;
	int32 rcv_wnd;
	int32 rcv_wup;
};

struct sockaddr_storage_tcp {
	sockaddr_storage_in in;
	sockaddr_storage_in6 in6;
};

struct tcp_md5sig {
	sockaddr_storage_tcp tcpm_addr;
	int16 __tcpm_pad1;
	int16 tcpm_keylen;
	int32 __tcpm_pad2;
	char * tcpm_key;
};

char *rand_buf = (char *)randbuf(0xff);
struct tcp_md5sig *st_tcp_md5sig = (struct tcp_md5sig *)rand_buf;
st_tcp_md5sig->tcpm_key = randbuf(0xff);


struct tcp_repair_opt {
	int32 opt_code;
	int32 opt_val;
};

char *rand_buf = (char *)randbuf(0xff);
struct tcp_repair_opt *st_tcp_repair_opt = (struct tcp_repair_opt *)rand_buf;
st_tcp_repair_opt->opt_code = tcp_repair_opt_codes[randnum(1)%ARRAY_SIZE(tcp_repair_opt_codes)];


struct udp_pair {
	sock_udp f0;
	sock_udp f1;
};

struct udp6_pair {
	sock_udp6 f0;
	sock_udp6 f1;
};

struct ipx_pair {
	sock_ipx fd0;
	sock_ipx fd1;
};

struct sockaddr_ipx {
	int16 sipx_family;
	int16be sipx_port;
	int32be sipx_network;
	char * sipx_node;
	int8 sipx_type;
	int8 pad;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_ipx *st_sockaddr_ipx = (struct sockaddr_ipx *)rand_buf;
st_sockaddr_ipx->sipx_node = randbuf(0xff);


struct ifreq_ipx {
	char * ifrn_name;
	sockaddr_ipx ifr_addr;
};

char *rand_buf = (char *)randbuf(0xff);
struct ifreq_ipx *st_ifreq_ipx = (struct ifreq_ipx *)rand_buf;
st_ifreq_ipx->ifrn_name = randbuf(0xff);


struct ipx_config_data {
	int16 ipxcfg_auto_select_primary;
	int16 ipxcfg_auto_create_interfaces;
};

struct kcm_attach {
	sock fd;
	fd_bpf_prog bpf_fd;
};

struct kcm_unattach {
	sock fd;
};

struct kcm_clone {
	sock fd;
};

struct sockaddr_nl {
	int16 family;
	int16 pad;
	int32 pid;
	int32 groups;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_nl *st_sockaddr_nl = (struct sockaddr_nl *)rand_buf;
st_sockaddr_nl->family = netlink_family[randnum(1)%ARRAY_SIZE(netlink_family)];


struct msghdr_netlink {
	char * addr;
	int32 addrlen;
	char * vec;
	intptr vlen;
	char * ctrl;
	intptr ctrllen;
	int32 f;
};

char *rand_buf = (char *)randbuf(0xff);
struct msghdr_netlink *st_msghdr_netlink = (struct msghdr_netlink *)rand_buf;
st_msghdr_netlink->addr = randbuf(0xff);
st_msghdr_netlink->addrlen = randnum(2);
st_msghdr_netlink->vec = randbuf(0xff);
st_msghdr_netlink->vlen = randnum(2);
st_msghdr_netlink->ctrl = randbuf(0xff);
st_msghdr_netlink->ctrllen = randnum(2);
st_msghdr_netlink->f = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct iovec_nl {
	char * data;
	intptr len;
};

char *rand_buf = (char *)randbuf(0xff);
struct iovec_nl *st_iovec_nl = (struct iovec_nl *)rand_buf;
st_iovec_nl->data = randbuf(0xff);


struct netlink_msg {
	int32 len;
	int16 type;
	int16 flags;
	int32 seq;
	int32 pid;
	char * data;
};

char *rand_buf = (char *)randbuf(0xff);
struct netlink_msg *st_netlink_msg = (struct netlink_msg *)rand_buf;
st_netlink_msg->len = randnum(2);
st_netlink_msg->flags = netlink_msg_flags[randnum(1)%ARRAY_SIZE(netlink_msg_flags)];
st_netlink_msg->data = randbuf(0xff);


struct nl_mmap_req {
	int32 bsize;
	int32 bnumber;
	int32 fsize;
	int32 fnumber;
};

struct msghdr_netrom {
	char * addr;
	int32 addrlen;
	char * vec;
	intptr vlen;
	char * ctrl;
	intptr ctrllen;
	int32 f;
};

char *rand_buf = (char *)randbuf(0xff);
struct msghdr_netrom *st_msghdr_netrom = (struct msghdr_netrom *)rand_buf;
st_msghdr_netrom->addr = randbuf(0xff);
st_msghdr_netrom->addrlen = randnum(2);
st_msghdr_netrom->vec = randbuf(0xff);
st_msghdr_netrom->vlen = randnum(2);
st_msghdr_netrom->ctrl = randbuf(0xff);
st_msghdr_netrom->ctrllen = randnum(2);
st_msghdr_netrom->f = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct sockaddr_nfc_llcp {
	int16 family;
	int32 devidx;
	int32 target;
	int32 proto;
	int8 dsap;
	int8 ssap;
	char * serv;
	intptr servlen;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_nfc_llcp *st_sockaddr_nfc_llcp = (struct sockaddr_nfc_llcp *)rand_buf;
st_sockaddr_nfc_llcp->proto = nfc_proto[randnum(1)%ARRAY_SIZE(nfc_proto)];
st_sockaddr_nfc_llcp->serv = randbuf(0xff);


struct sockaddr_nfc {
	int16 family;
	int32 dev;
	int32 targ;
	int32 proto;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_nfc *st_sockaddr_nfc = (struct sockaddr_nfc *)rand_buf;
st_sockaddr_nfc->proto = nfc_proto[randnum(1)%ARRAY_SIZE(nfc_proto)];


struct nfc_llcp_send_msghdr {
	char * addr;
	int32 addrlen;
	char * vec;
	intptr vlen;
	char * ctrl;
	intptr ctrllen;
	int32 f;
};

char *rand_buf = (char *)randbuf(0xff);
struct nfc_llcp_send_msghdr *st_nfc_llcp_send_msghdr = (struct nfc_llcp_send_msghdr *)rand_buf;
st_nfc_llcp_send_msghdr->addr = randbuf(0xff);
st_nfc_llcp_send_msghdr->addrlen = randnum(2);
st_nfc_llcp_send_msghdr->vec = randbuf(0xff);
st_nfc_llcp_send_msghdr->vlen = randnum(2);
st_nfc_llcp_send_msghdr->ctrl = randbuf(0xff);
st_nfc_llcp_send_msghdr->ctrllen = randnum(2);
st_nfc_llcp_send_msghdr->f = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct unix_pair {
	sock_unix fd0;
	sock_unix fd1;
};

struct sockaddr_un_file {
	int16 family;
	filename path;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_un_file *st_sockaddr_un_file = (struct sockaddr_un_file *)rand_buf;
st_sockaddr_un_file->family = unix_socket_family[randnum(1)%ARRAY_SIZE(unix_socket_family)];


struct sockaddr_un_abstract {
	int16 family;
	int8 ind;
	int32 id;
};

char *rand_buf = (char *)randbuf(0xff);
struct sockaddr_un_abstract *st_sockaddr_un_abstract = (struct sockaddr_un_abstract *)rand_buf;
st_sockaddr_un_abstract->family = unix_socket_family[randnum(1)%ARRAY_SIZE(unix_socket_family)];


struct msghdr_un {
	char * addr;
	int32 addrlen;
	char * vec;
	intptr vlen;
	char * ctrl;
	intptr ctrllen;
	int32 f;
};

char *rand_buf = (char *)randbuf(0xff);
struct msghdr_un *st_msghdr_un = (struct msghdr_un *)rand_buf;
st_msghdr_un->addr = randbuf(0xff);
st_msghdr_un->addrlen = randnum(2);
st_msghdr_un->vec = randbuf(0xff);
st_msghdr_un->vlen = randnum(2);
st_msghdr_un->ctrl = randbuf(0xff);
st_msghdr_un->ctrllen = randnum(2);
st_msghdr_un->f = send_flags[randnum(1)%ARRAY_SIZE(send_flags)];


struct cmsghdr_un_rights {
	intptr len;
	int32 level;
	int32 type;
	char * fds;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_un_rights *st_cmsghdr_un_rights = (struct cmsghdr_un_rights *)rand_buf;
st_cmsghdr_un_rights->len = randnum(2);
st_cmsghdr_un_rights->fds = randbuf(0xff);


struct cmsghdr_un_cred {
	intptr len;
	int32 level;
	int32 type;
	get_pid pid;
	get_uid uid;
	get_gid gid;
};

char *rand_buf = (char *)randbuf(0xff);
struct cmsghdr_un_cred *st_cmsghdr_un_cred = (struct cmsghdr_un_cred *)rand_buf;
st_cmsghdr_un_cred->len = randnum(2);

