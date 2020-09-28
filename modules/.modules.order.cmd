cmd_/home/cs469/modules/modules.order := {   echo /home/cs469/modules/simple_module.ko;   echo /home/cs469/modules/simple_args.ko; :; } | awk '!x[$$0]++' - > /home/cs469/modules/modules.order
