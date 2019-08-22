LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)


LOCAL_SRC_FILES := \
    syzkaller.c


LOCAL_MODULE    := syzkaller

# LOCAL_ARM_MODE := arm
# LOCAL_C_INCLUDES := $(LOCAL_PATH)/
# LOCAL_CFLAGS += -fPIE
# LOCAL_LDFLAGS += -fPIE -pie
# LOCAL_CFLAGS += -DDEBUG -D__ARM__ -fno-stack-protector
LOCAL_LDFLAGS += -static
# LOCAL_MODULE_TAGS := optional

# LOCAL_CFLAGS += -Werror

include $(BUILD_EXECUTABLE)
