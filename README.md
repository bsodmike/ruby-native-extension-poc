# Ruby C wrapper for uname command

Example usage shown below.  You will need to install `rake-compiler` first.

This PoC was tested with Ruby 2.4.0.

```
-> % rake compile
install -c tmp/x86_64-darwin14/wrapper_c_uname/2.4.0/wrapper_c_uname.bundle lib/wrapper_c_uname.bundle
cp tmp/x86_64-darwin14/wrapper_c_uname/2.4.0/wrapper_c_uname.bundle tmp/x86_64-darwin14/stage/lib/wrapper_c_uname.bundle
mdesilva@iMac-5K [06:19:53] clion/wrapper_c_uname {2.4.0} ⭠ master±


-> % ruby -r ./lib/wrapper_c_uname.bundle -e "p Uname.rv"
"Darwin iMac-5K.local 14.3.0 Darwin Kernel Version 14.3.0: Mon Mar 23 11:59:05 PDT 2015; root:xnu-2782.20.48~5/RELEASE_X86_64 x86_64"
```

The compiled output may be loaded into IRB via `irb -r ./lib/wrapper_c_uname.bundle` as well. 

## License

This project is licensed under the terms of the MIT License.