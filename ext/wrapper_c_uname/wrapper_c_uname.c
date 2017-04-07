#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include "ruby.h"

VALUE Uname = Qnil;

void Init_wrapper_c_uname();
VALUE method_uname_rv();

void Init_wrapper_c_uname() {
    Uname = rb_define_module("Uname");
    rb_define_singleton_method(Uname, "rv", method_uname_rv, 0);
}

VALUE method_uname_rv() {
    FILE *fp = popen("/usr/bin/uname -rv", "r");
    char buf[1024];

    fgets(buf, sizeof(buf), fp);

    /**
     * `strlen` pulls out the string upto the `\n` char within the buffer
     * This is for debugging use only.
     */
    // printf("String length: %d", (int) strlen(buf));

    fclose(fp);

    return rb_str_new(buf, strlen(buf) - 1);
}

