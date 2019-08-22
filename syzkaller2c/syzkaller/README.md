# syzkaller - linux syscall fuzzer

`syzkaller` is an unsupervised, coverage-guided Linux syscall fuzzer.
It is meant to be used with [KASAN](https://kernel.org/doc/html/latest/dev-tools/kasan.html) (`CONFIG_KASAN=y`),
[KTSAN](https://github.com/google/ktsan) (`CONFIG_KTSAN=y`),
or [KUBSAN](https://kernel.org/doc/html/latest/dev-tools/ubsan.html).

Project mailing list: [syzkaller@googlegroups.com](https://groups.google.com/forum/#!forum/syzkaller), which you can subscribe to either with an
google account or by sending an email to syzkaller+subscribe@googlegroups.com.

List of [found bugs](https://github.com/google/syzkaller/wiki/Found-Bugs).

