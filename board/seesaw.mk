CPU := cortex-m0
LINKER_SCRIPT := lib/asf/sam0/utils/linker_scripts/samd09/gcc/samd09d14a_flash.ld

SVD := lib/svd/ATSAMD09D14A.svd

DEBUG_ADAPTER ?= jlink
JLINK_DEVICE := ATSAMD09D14
BLACK_MAGIC_PORT ?= /dev/ttyACM0
BLACK_MAGIC_POWER_TARGET ?= N

INC_DIRS += \
  src/board/seesaw

DEFINES += \
  __SAMD09D14A__ \
