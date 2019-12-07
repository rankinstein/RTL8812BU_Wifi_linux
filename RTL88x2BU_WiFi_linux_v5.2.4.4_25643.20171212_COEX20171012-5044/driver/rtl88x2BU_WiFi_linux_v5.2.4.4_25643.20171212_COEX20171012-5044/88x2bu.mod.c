#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe732d7bd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x52c44ca0, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x930f461a, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x767dd2b8, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x9169a811, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x6ba3e482, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x1de48f9e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xd2a6c379, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x50ab7527, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x5a9551dd, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xec22ab20, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x5e103929, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x9a20f7d4, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x3597d649, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xff8ecdf1, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0xd5b642c8, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd8a01b09, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4285b36f, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4686627a, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x6d38d0c5, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x761e204b, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x116b7798, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3b1a0613, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x593c1bac, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rbx) },
	{ 0xc8449c67, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2867f378, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x4a575065, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
	{ 0xd8b54361, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xc0604e09, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb9cdf814, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb942e322, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5595e5bb, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xbdbf11b1, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xcf6e861a, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xfc04e836, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xc4cd408, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x6251d5ff, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xa4312831, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0x233eafaa, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3d529d22, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1d0fea12, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x27c2fdd5, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xbdc6b187, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7ecc301c, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x47a3cb1d, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xb8bafbe0, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0x5dfc06bd, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x312db39c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3167b08c, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xb251af93, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc5eca00b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3adeebc0, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xafc176e2, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x5b9f91d1, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xf05c7b8, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r15) },
	{ 0xf67ddb4f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x2f9b1369, __VMLINUX_SYMBOL_STR(__vfs_read) },
	{ 0x5183a9a8, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf5e300a6, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x4dea655e, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe969aec6, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xf544ff64, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x16594b10, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7ed4dbc1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd155dd, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x4540aff6, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xa6b6d5bd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2d0dca0a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x3fdb244b, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x57a5c446, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x5aeb145f, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x46c6dd23, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x7f45d2ce, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xbf43e7e9, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0xa1ffb8de, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xdf6160a2, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd979a547, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdi) },
	{ 0x7e61343d, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x74ceb8bd, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xedc77fb9, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x6baa3841, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x94c28676, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa8e4627a, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x178eb4f5, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf22449ae, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x1b29993, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0xc1f9a22f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x769a629, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xbbaf7bfc, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xa62e1122, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xbfaf8920, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x111a33fb, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5538d7a6, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x798daa19, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x8dfe2d2d, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3269cbd8, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x957d231a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9d3dd8c7, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x89be0446, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xea754025, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x1157074, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x42063f6a, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xb27ad916, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x52551555, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0xe1e06fe8, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x5154821d, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x85d3ecd3, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x6a4e858f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2909b671, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x3546d858, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x311a746d, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9d3f9371, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x5c9aa66e, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xf0895149, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3f31d4d1, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xacc56579, __VMLINUX_SYMBOL_STR(skb_pull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDApB82Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB812d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "0CBF7F205F83070A80C4B15");