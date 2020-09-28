cmd_/home/cs469/modules/Module.symvers := sed 's/ko$$/o/' /home/cs469/modules/modules.order | scripts/mod/modpost -m    -o /home/cs469/modules/Module.symvers -e -i Module.symvers   -T -
