BPV = "2.25.1"
MMYY = "16.10"
RELEASE = "20${MMYY}"
PR = "r20${MMYY}"

inherit pythonnative

LIC_FILES_CHKSUM="\
    file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552\
    file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674\
    file://COPYING3;md5=d32239bcb673463ab874e80d47fae504\
    file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6\
    file://gas/COPYING;md5=d32239bcb673463ab874e80d47fae504\
    file://include/COPYING;md5=59530bdf33659b29e73d4adb9f9f6552\
    file://include/COPYING3;md5=d32239bcb673463ab874e80d47fae504\
    file://libiberty/COPYING.LIB;md5=a916467b91076e631dd8edb7424769c7\
    file://bfd/COPYING;md5=d32239bcb673463ab874e80d47fae504\
    "

SRCREV = "331ccedd381918185634a0f6c864eea4e2d7c960"
SRC_URI = "\
     git://git.linaro.org/toolchain/binutils-gdb.git;protocol=https;branch=linaro_binutils-2_25-branch \
     file://binutils-uclibc-100-uclibc-conf.patch \
     file://binutils-uclibc-300-001_ld_makefile_patch.patch \
     file://binutils-uclibc-300-006_better_file_error.patch \
     file://binutils-uclibc-300-012_check_ldrunpath_length.patch \
     file://binutils-uclibc-gas-needs-libm.patch \
     file://libiberty_path_fix.patch \
     file://binutils-poison.patch \
     file://libtool-2.4-update.patch \
     file://libtool-rpath-fix.patch \
     file://binutils-armv5e.patch \
     file://replace_macros_with_static_inline.patch;apply=no \
     file://0001-Fix-MMIX-build-breakage-from-bfd_set_section_vma-cha.patch;apply=no \
     file://0001-AArch64-Define-LP64-BE-linker-name.patch \
     file://0001-Fix-an-internal-error-in-do_print_to_mapfile-seen-wi.patch \
     file://0001-AArch64-gas-Support-ILP32-triplet-aarch64-linux-gnu_.patch \
     file://0002-AArch64-ld-Support-ILP32-triplet-aarch64-linux-gnu_i.patch \
     "

S = "${WORKDIR}/git"
