#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010EEd0000ADC1sv0000D1ACsd00004000bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000ADC1sv0000D1ACsd00004100bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000ADC1sv0000D1ACsd00004110bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000ADC1sv0000D1ACsd00004080bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00000007sv0000D1ACsd00004000bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00000007sv0000D1ACsd00004100bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00000007sv0000D1ACsd00004110bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00000007sv0000D1ACsd00004080bc*sc*i*");

MODULE_INFO(srcversion, "22FD49C19BCD6C381B78C37");